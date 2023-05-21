using System;
using UnityEngine.UI;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class CoinCounter : MonoBehaviour
{
    //Scripts
    public CoinsData coinsDataScript;
    private GameData gameData;
    private GameManager GM;
    public GameObject GMObject;


    public GameObject coinPopUpViolet;
    public GameObject coinPopUpGreen;

    public Text coinScoreText;
    public Text dollarScoreText;
    public GameObject dollarsPopUp;

    [Header("Counter Animators")]
    public Animator coinCountAnim;
    public Animator dollarCountAnim;

    private GameObject coinCountPosition;
    private GameObject dollarCountPosition;
    private Transform coinPosition;
    private Transform dollarPosition;

    public UIManager spawnMoneyInUI;

    public bool doubleRewardEnabled;

    private int coinsCount;
    public int Coins
    {
        set { coinsCount = value; }
    }
    private float dollarsCount = 0;
    public float Dollars
    {
        set { dollarsCount = value; }
    }
    private int fruitsCount = 0;

    [Header("Offers")]
    public GameObject offersPanel;
    public GameObject chickPop;
    public GameObject duckPop;
    public GameObject henPop;
    public GameObject sheepPop;
    public GameObject donkeyPop;
    public GameObject cowPop;


    private GameObject tempObject;


    public List<Transform> coinPopUps = new List<Transform>();
    private ObjectPooler poolScript;
    private AudioManager audioManagerScript;


    private void Start()
    {
        GMObject = GameObject.FindGameObjectWithTag("GameManager");
        GM = GMObject.GetComponent<GameManager>();
        gameData = GMObject.GetComponent<GameData>();

        coinsCount = GetCoinScoreCount();
        coinScoreText.text = coinsCount.ToString();

        dollarsCount = GetDollarScoreCount();
        dollarScoreText.text = dollarsCount.ToString("0.00 $BPL");
        
        fruitsCount = GetFruitScoreCount();

        if (PlayerPrefs.HasKey("ChickPopShowed"))
        {
            offersPanel.SetActive(false);
            chickPop.SetActive(false);
        }

        if (PlayerPrefs.HasKey("DuckPopShowed"))
        {
            offersPanel.SetActive(false);
            duckPop.SetActive(false);
        }
        if (PlayerPrefs.HasKey("HenPopShowed"))
        {
            offersPanel.SetActive(false);
            henPop.SetActive(false);
        }
        if (PlayerPrefs.HasKey("SheepPopShowed"))
        {
            offersPanel.SetActive(false);
            sheepPop.SetActive(false);
            PlayerPrefs.SetInt("SheepPopShowed", 1);
        }
        if (PlayerPrefs.HasKey("DonkeyPopShowed"))
        {
            offersPanel.SetActive(false);
            donkeyPop.SetActive(false);
        }
        if (PlayerPrefs.HasKey("CowPopShowed"))
        {
            offersPanel.SetActive(false);
            cowPop.SetActive(false);
        }


        poolScript = ObjectPooler.Instance;
        audioManagerScript = AudioManager.instance;

        coinCountPosition = GameObject.FindGameObjectWithTag("CoinCountPosition");
        dollarCountPosition = GameObject.FindGameObjectWithTag("DollarCountPosition");
        coinPosition = coinCountPosition.transform;
        dollarPosition = dollarCountPosition.transform;

    }


    private void Update()
    {
//        Debug.Log("Coin Score : " + coinsCount);
//        Debug.Log("Dollar Score : " + dollarsCount);

      

        if (coinsCount >= 50000 && !PlayerPrefs.HasKey("ChickPopShowed"))
        {
            offersPanel.SetActive(true);
            chickPop.SetActive(true);
            PlayerPrefs.SetInt("ChickPopShowed", 1);

        }

        if (coinsCount >= 70000 && !PlayerPrefs.HasKey("DuckPopShowed"))
        {
            offersPanel.SetActive(true);
            duckPop.SetActive(true);
            PlayerPrefs.SetInt("DuckPopShowed", 1);

        }
        if (coinsCount >= 150000 && !PlayerPrefs.HasKey("HenPopShowed"))
        {
            offersPanel.SetActive(true);
            henPop.SetActive(true);
            PlayerPrefs.SetInt("HenPopShowed", 1);

        }
        if (dollarsCount >= 2000f && !PlayerPrefs.HasKey("SheepPopShowed"))
        {
            offersPanel.SetActive(true);
            sheepPop.SetActive(true);
            PlayerPrefs.SetInt("SheepPopShowed", 1);

        }
        if (dollarsCount >= 3500f && !PlayerPrefs.HasKey("DonkeyPopShowed"))
        {
            offersPanel.SetActive(true);
            donkeyPop.SetActive(true);
            PlayerPrefs.SetInt("DonkeyPopShowed", 1);

        }
        if (dollarsCount >= 6000f && !PlayerPrefs.HasKey("CowPopShowed"))
        {
            offersPanel.SetActive(true);
            cowPop.SetActive(true);
            PlayerPrefs.SetInt("CowPopShowed", 1);

        }



        for (int i = 0; i < coinPopUps.Count; i++)
        {
            if (coinPopUps[i].CompareTag("GreenPopUp"))
            {
                if (Vector3.Distance(dollarPosition.position, coinPopUps[i].position) < 0.001f)
                {
                    Transform emptyTransform = coinPopUps[i];
                    coinPopUps.Remove(emptyTransform);
                    emptyTransform.gameObject.SetActive(false);
                    //Destroy(emptyTransform.gameObject);


                    // dollarScoreText.text = dollarsCount.ToString("$0.00");
                }
            }
            else
            {
                if (Vector3.Distance(coinPosition.position, coinPopUps[i].position) < 0.001f)
                {
                    Transform emptyTransform = coinPopUps[i];
                    coinPopUps.Remove(emptyTransform);
                    emptyTransform.gameObject.SetActive(false);
                    //Destroy(emptyTransform.gameObject);

                    //  coinScoreText.text = coinsCount.ToString();
                }
            }

        }
    }



    private void spawnEffectViolet(string name, Vector3 position)
    {
        //Taptic.Medium();
        tempObject = poolScript.SpawnFromPool("PopUpViolet", position, Quaternion.identity);
        // tempObject = Instantiate(coinPopUpViolet, position, Quaternion.identity);
        tempObject.GetComponent<ColectionParticleSetUp>().settexture(name);
        coinPopUps.Add(tempObject.transform);
    }

    private void spawnEffectGreen(string name, Vector3 position)
    {
        //Taptic.Medium();
        tempObject = poolScript.SpawnFromPool("PopUpGreen", position, Quaternion.identity);
        // tempObject = Instantiate(coinPopUpGreen, position, Quaternion.identity);
        tempObject.GetComponent<ColectionParticleSetUp>().settexture(name);
        coinPopUps.Add(tempObject.transform);
    }



    //ScoreCount
    private void OnCollisionEnter(Collision collision)
    {
        // capturedCoinList.Add(collisionObject);
        Taptic.Medium();

        GameObject collisionObject = collision.gameObject;

        countTheObject(collisionObject);
        // Destroy(collisionObject);

    }

    public void countTheObject(GameObject collisionObject)
    {
        // log event and property for firebase

        //OneSignal.SendTag("score_coins", GetCoinScoreCount().ToString());
        //OneSignal.SendTag("score_dollars", GetDollarScoreCount().ToString());
        //OneSignal.SendTag("fruits_unlocked", PlayerPrefs.GetInt("Fruits").ToString());


        //OneSignal.SendTags(new Dictionary<string, string>() {
        //    { "score_coins", GetCoinScoreCount().ToString() },
        //    { "score_dollars",GetDollarScoreCount().ToString()},
        //    { "fruits_unlocked", PlayerPrefs.GetInt("Fruits").ToString() } });


        Vector3 objPosition = collisionObject.transform.position;
        switch (collisionObject.tag)
        {
            case "Coin1":
                StartCoroutine(UpdateCoinScoreCo(1, 2.6f));
                // coinScoreText.text = coinsCount.ToString();
                spawnEffectViolet("Coin1", objPosition);
                // scoreCountUI = 1;
                //spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);

                break;

            case "Coin5":
                StartCoroutine(UpdateCoinScoreCo(5, 2.6f));
                //  coinScoreText.text = coinsCount.ToString();

                spawnEffectViolet("Coin5", objPosition);
                //scoreCountUI = 5;
                // spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);
                //Save score
                break;

            case "Coin10":
                StartCoroutine(UpdateCoinScoreCo(10, 2.6f));
                //   coinScoreText.text = coinsCount.ToString();

                spawnEffectViolet("Coin10", objPosition);

                //  spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);
                break;

            case "Coin50":
                StartCoroutine(UpdateCoinScoreCo(50, 2.6f));
                //  coinScoreText.text = coinsCount.ToString();

                spawnEffectViolet("Coin50", objPosition);
                //scoreCountUI = 50;
                // spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);
                break;

            case "Coin100":
                StartCoroutine(UpdateCoinScoreCo(100, 2.6f));
                //  coinScoreText.text = coinsCount.ToString();

                spawnEffectViolet("Coin100", objPosition);
                // scoreCountUI = 100;
                // spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);
                break;

            case "Coin500":
                StartCoroutine(UpdateCoinScoreCo(500, 2.6f));
                // coinScoreText.text = coinsCount.ToString();

                spawnEffectViolet("Coin500", objPosition);
                // scoreCountUI = 500;
                //  spawnMoneyInUI.MoneyUISpawn(scoreCountUI);
                collisionObject.SetActive(false);
                //Destroy(collisionObject);
                break;

            case "ShakeMonede":
                if (collisionObject.GetComponent<CoinScript>().nameKey == "Chest")
                {
                    // Debug.Log("CHESTTTT");
                    GM.gameObject.GetComponent<UIManager>().OpenChestPopUpActivate();

                }
                Destroy(collisionObject);
                break;

            case "dollarMonede":

                spawnEffectGreen("dollarMonede", objPosition);

                //StartCoroutine(UpdateDollarScoreCo(0.01f, 2.6f));
                StartCoroutine(UpdateDollarScoreCo(0.1f, 2.6f));

                collisionObject.SetActive(false);

                calculateCongratDolar();

                break;

            case "Fruits":
                coinsDataScript.RemoveFruitFromList(collisionObject.transform);

                // GM.gameObject.GetComponent<UIManager>().fruitUIUpdate.SetUpFruits();
                spawnEffectViolet("fruit", objPosition);
                UpdateFruitScore(collisionObject.GetComponent<CoinScript>().nameKey);
                // StartCoroutine(UpdateCoinScoreCo(1000, 2.6f));
                UpdateCoinScore(1000);
                coinScoreText.text = coinsCount.ToString();
                //Debug.Log("Now Destroys! " + collisionObject.name);
                coinsDataScript.fruitsList.Remove(collisionObject.transform);
                Destroy(collisionObject);

                break;

            default:
                //Debug.Log("Something is wrong with coins!");
                break;

        }

        audioManagerScript.Play("CoinBell");
        // AudioManager.instance.
       SaveCoinScoreCount();
    }

    public void ClosePopUp()
    {
        dollarsPopUp.SetActive(false);
    }

    /*void PopUpTimer()
    {
        if (popUpTimer > 0)
        {
            popUpTimer -= 1;
        }
        else
        {
            popUpTimer = 0;
            dollarsPopUp.SetActive(false);
        }
    }*/



    public void calculateCongratCoin()
    {
        string temp = PlayerPrefs.GetString("CongratsCoin");

        //Debug.Log("Inside milestone");

        switch (temp)
        {
            case "":
                if (coinsCount > 1000)
                {
                    coinMilestone("1K", "5K");
                }
                break;
            case "5K":
                if (coinsCount > 5000)
                {
                    coinMilestone("5K", "10K");
                }
                break;
            case "10K":
                if (coinsCount > 10000)
                {
                    coinMilestone("10K", "25K");
                }
                break;
            case "25K":
                if (coinsCount > 25000)
                {
                    coinMilestone("25K", "50K");
                }
                break;
            case "50K":
                if (coinsCount > 50000)
                {
                    coinMilestone("50K", "100K");
                }
                break;
            case "100K":
                if (coinsCount > 100000)
                {
                    coinMilestone("100K", "200K");
                }
                break;
            case "200K":
                if (coinsCount > 200000)
                {
                    coinMilestone("200K", "300K");
                }
                break;
            case "300K":
                if (coinsCount > 300000)
                {
                    coinMilestone("300K", "400K");
                }
                break;
            case "400K":
                if (coinsCount > 400000)
                {
                    coinMilestone("400K", "500K");
                }
                break;
            case "500K":
                if (coinsCount > 500000)
                {
                    coinMilestone("500K", "600K");
                }
                break;
            case "600K":
                if (coinsCount > 600000)
                {
                    coinMilestone("600K", "700K");
                }
                break;
            case "700K":
                if (coinsCount > 700000)
                {
                    coinMilestone("700K", "800K");
                }
                break;
            case "800K":
                if (coinsCount > 800000)
                {
                    coinMilestone("800K", "900K");
                }
                break;
            case "900K":
                if (coinsCount > 900000)
                {
                    coinMilestone("900K", "990K");
                }
                break;
            case "990K":
                if (coinsCount > 990000)
                {
                    coinMilestone("900K", "1000K");
                }
                break;
            default:
                break;
        }
    }

    void coinMilestone(string now,string then)
    {
        //spawnMoneyInUI.congratsPopUpActivate(now);
        PlayerPrefs.SetString("CongratsCoin", then);

        // FirebaseAnalytics.LogEvent("Currency", new Parameter("Coins", now));
        //Debug.Log("50K reached!!");
    }

    public void calculateCongratDolar()
    {
        string temp = PlayerPrefs.GetString("CongratsDol");

        switch (temp)
        {
            case "":
                if (GetDollarScoreCount() > 1)
                {
                    dolarMilestone("1$","5$");
                }
                break;
            case "5$":
                if (GetDollarScoreCount() > 5)
                {
                    dolarMilestone("5$", "10$");
                }
                break;
            case "10$":
                if (GetDollarScoreCount() > 10)
                {
                    dolarMilestone("10$", "25$");
                }
                break;
            case "25$":
                if (GetDollarScoreCount() > 25)
                {
                    dolarMilestone("25$", "50$");
                }
                break;
            case "50$":
                if (GetDollarScoreCount() > 50)
                {
                    dolarMilestone("50$", "75$");
                }
                break;
            case "75$":
                if (GetDollarScoreCount() > 75)
                {
                    dolarMilestone("75$", "90$");
                }
                break;
            case "90$":
                if (GetDollarScoreCount() > 75)
                {
                    dolarMilestone("90$", "99$");
                }
                break;
            case "99$":
                if (GetDollarScoreCount() > 75)
                {
                    dolarMilestone("99$", "100$");
                }
                break;
            default:
                break;
        }
    }

    void dolarMilestone(string now, string then)
    {
        //spawnMoneyInUI.congratsPopUpActivate(now);
        PlayerPrefs.SetString("CongratsDol", then);

        // FirebaseAnalytics.LogEvent("Currency", new Parameter("Dollars", now));
        // Debug.Log("75$ reached!!");
    }


    //Save
    public void UpdateCoinScore(int coinValue)
    {

        coinsCount += coinValue;

        if (doubleRewardEnabled && coinValue >= 0)
        {
            coinsCount += coinValue;
        }

        CheckCoinDecay();
        SaveCoinScoreCount();
    }


    IEnumerator UpdateCoinScoreCo(int coinCount, float delay)
    {

        yield return new WaitForSeconds(delay);
        UpdateCoinScore(coinCount);
        coinScoreText.text = coinsCount.ToString();
        coinCountAnim.SetTrigger("Pulse");

        calculateCongratCoin();
    }

    public void UpdateDollarScore(float dollarValue)
    {
        dollarsCount += dollarValue;
        if (doubleRewardEnabled && dollarValue >= 0)
        {
            dollarsCount += dollarValue;
        }

        dollarsCount = (float)Math.Round(dollarsCount, 1);
        CheckCoinDecay();
        dollarScoreText.text = dollarsCount.ToString("0.00 $BPL");

        SaveCoinScoreCount();

    }

    IEnumerator UpdateDollarScoreCo(float dollarCount, float delay)
    {

        yield return new WaitForSeconds(delay);
        UpdateDollarScore(dollarCount);
        //dollarScoreText.text = dollarsCount.ToString("$0.00");
        dollarCountAnim.SetTrigger("Pulse");

        //if (PlayerPrefs.HasKey("extra") && PlayerPrefs.GetInt("extra") == 1)
        //{
        //    if (dollarsCount >= 0.01f && !PlayerPrefs.HasKey("FirstCashShown"))
        //    {
        //        dollarsPopUp.SetActive(true);
        //        PlayerPrefs.SetInt("FirstCashShown", 1);
        //    }
        //}

    }

    public void UpdateMoneyForDebug(int coinValue, float dollarValue)
    {
        coinsCount += coinValue;
        dollarsCount += dollarValue;
        coinScoreText.text = coinsCount.ToString();
        dollarScoreText.text = dollarsCount.ToString("0.00 $BPL");
    }

    public void UpdateFruitScore(string fruitName)
    {
        PlayerPrefs.SetInt(fruitName, (PlayerPrefs.GetInt(fruitName) + 1));
        //  Debug.Log(fruitName + " - " + PlayerPrefs.GetInt(fruitName));

    }


    //------------- Saving Part ---------------//
    public void SaveCoinScoreCount()
    {
       
       // Debug.Log("Get Coin Count 1: " + PlayerPrefs.GetInt("CoinScoreCount"));
      //  Debug.Log("Save coin Score");
        //   PlayerPrefs.SetInt("CoinScoreCount", coinsCount);
        //   PlayerPrefs.SetFloat("DollarScoreCount", dollarsCount);

        if (coinsCount != 0)
            PlayerPrefs.SetInt("CoinScoreCount", coinsCount); //debug coins count

        if (dollarsCount != 0)
            PlayerPrefs.SetFloat("DollarScoreCount", dollarsCount); //$200 debug dollars count

        // PlayerPrefs.SetInt("FruitScoreCount", fruitsCount);


      //  Debug.Log("Get Coin Count 2: " + PlayerPrefs.GetInt("CoinScoreCount"));

        
        
        //Debug.Log("Get Coin Count 3: " + PlayerPrefs.GetInt("CoinScoreCount"));
    }

    public int GetCoinScoreCount()
    {
        if (PlayerPrefs.HasKey("CoinScoreCount"))
        {
            return PlayerPrefs.GetInt("CoinScoreCount");
        }
        else
        {
            PlayerPrefs.SetInt("CoinScoreCount", 0);
            return 0;
        }
    }

    public float GetDollarScoreCount()
    {
        if (PlayerPrefs.HasKey("DollarScoreCount"))
        {
            return PlayerPrefs.GetFloat("DollarScoreCount");
        }
        else
        {
            PlayerPrefs.SetFloat("DollarScoreCount", 0);
            return 0;
        }
    }

    public int GetFruitScoreCount()
    {
        if (PlayerPrefs.HasKey("FruitScoreCount"))
        {
            return PlayerPrefs.GetInt("FruitScoreCount");
        }
        else
        {
            PlayerPrefs.SetInt("FruitScoreCount", 0);
            return 0;
        }
    }


    private void CheckCoinDecay()
    {
        if (GM == null)
            GM = GMObject.GetComponent<GameManager>();

        if (!GM.coinDecay)
        {
            if (coinsCount > 50000 || dollarsCount > 5f)
            {
                GM.CoinDecayOn();
                //  decayEligiblePopUp.SetActive(true);
                //  GM.coinDecay = true;
                PlayerPrefs.SetInt("CoinDecay", 1);
            }
        }
    }


    public void DecayPenalty(int coinPenalty, float dollarPenalty)
    {
        Debug.Log("This is it!");
        coinsCount -= coinPenalty;
        dollarsCount -= dollarPenalty;
        if (coinsCount < 0)
            coinsCount = 0;

        if (dollarsCount < 0f)
            dollarsCount = 0f;

        PlayerPrefs.SetInt("CoinScoreCount", coinsCount);
        PlayerPrefs.SetFloat("DollarScoreCount", dollarsCount);
        coinScoreText.text = coinsCount.ToString();
        dollarScoreText.text = dollarsCount.ToString("0.00 $BPL");
    }

    private void OnApplicationPause(bool pause)
    {
        SaveCoinScoreCount();
    }


    private void OnApplicationQuit()
    {
//        Debug.Log("Coins Count: " + coinsCount);
//        Debug.Log("Dollars Count: " + dollarsCount);
        Debug.Log("Saving data...");
        SaveCoinScoreCount();
    }

}
