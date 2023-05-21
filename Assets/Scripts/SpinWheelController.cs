using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpinWheelController : MonoBehaviour
{

    [Header("Spin Parameters")]
    public bool spinStarted;
    public float bonusProbability = 50f;
    public bool specificBonus;
    public float bonusType = 0f;
    public int fullCircles = 5;

    [Header("Angles")]
    public Transform wheel1;
    public Transform wheel2;
    public Transform wheel3;

    [Header("Angles")]
    private int[] sectors = { 0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360 };

    private float startAngle1;
    private float startAngle2;
    private float startAngle3;

    private float finalAngle1;
    private float finalAngle2;
    private float finalAngle3;

    private float angle1;
    private float angle2;
    private float angle3;

    private bool wheel1Finished;
    private bool wheel2Finished;
    private bool wheel3Finished;

    [Header("Time Values")]
    public float currentLerpTime1;
    public float maxLerpTime1;
    public float currentLerpTime2;
    public float maxLerpTime2;
    public float currentLerpTime3;
    public float maxLerpTime3;

    [Header("Spawn Part")]
    public Transform defaultSpawnPosition;
    public Vector3 minSpawnRegion;
    public Vector3 maxSpawnRegion;

    [Header("Spawn Prefabs")]
    public GameObject[] coinTypes;
    public GameObject[] fruits;
    public GameObject dollarCoin;

    [Header("UI Animator")]
    public Animator fruitAnimator;
    public Animator sweetAnimator;

    [Header("777")]
    public PusherScript pusherAnimationScript;
    public GameObject specialCoinTower;
    public CoinsData coinsDataScript;
    public UIManager uiManagerScript;
    public Transform coinStructureSpawnPos;
    public AnimationScript csspAnimationScript;


    private ObjectPooler poolScript;
    private int curentSpawnedDollarCoins;
    private int maxSpawnedDollarCoins;

    private int currentSpawnedSimpleCoins;
    private int maxSpawnedSimpleCoins;

    private GameObject GMObject;
    private DebugManager debugMNG;


    private void Awake()
    {
        GMObject = GameObject.FindGameObjectWithTag("GameManager");
        debugMNG = GMObject.GetComponent<DebugManager>();
    }

    // Start is called before the first frame update
    void Start()
    {
        setWhellsRotation();

        if(debugMNG.debugMode && debugMNG.fastSpin)
        {
             maxLerpTime1 = 1f;
             maxLerpTime2 = 1f;
             maxLerpTime3 = 1f;
        }else if(!debugMNG.debugMode && !debugMNG.fastSpin)
        {
            maxLerpTime1 = 5f;
            maxLerpTime2 = 6f;
            maxLerpTime3 = 7f;
        }

        // defaultSpawnPosition = GetComponentInChildren<Transform>();
        csspAnimationScript = coinStructureSpawnPos.GetComponent<AnimationScript>();
        poolScript = ObjectPooler.Instance;
    }

    public void StartShow()
    {
        StartCoroutine("Special777Show");
    }

    IEnumerator Special777Show()
    {
        if (pusherAnimationScript != null && specialCoinTower != null && coinsDataScript != null)
        {
            AudioManager.instance.Play("Drumroll");
            uiManagerScript.ActivateFastWall();
            pusherAnimationScript.RemoveAllCoins();
            curentSpawnedDollarCoins = 0;
            maxSpawnedDollarCoins = 25;

            /*
            currentSpawnedSimpleCoins = 0;
            maxSpawnedSimpleCoins = 25;
            InvokeRepeating("SpawnSimpleCoins", 0.15f, 0.15f);
            */

            yield return new WaitForSeconds(13f);
            AudioManager.instance.Play("Trumpets");
            GameObject tempObject = Instantiate(specialCoinTower, coinStructureSpawnPos.position, coinStructureSpawnPos.rotation);
            tempObject.SetActive(true);
            csspAnimationScript.enabled = true;
            InvokeRepeating("SpawnDollarCoins", 0.15f, 0.15f);

            yield return new WaitForSeconds(5f);
            coinsDataScript.SpecialCoinTowerActivation();
            csspAnimationScript.enabled = false;
            pusherAnimationScript.removingBegan = false;

            yield return new WaitForSeconds(5f);
            IOSReviewRequest.RequestReview();

        }
        else
        {
            yield return null;
        }
        yield return null;
    }

    public void spawnTower()
    {
        StartCoroutine(towerSpawningEnumerator());
    }

    IEnumerator towerSpawningEnumerator()
    {
        GameObject tempObject = Instantiate(specialCoinTower, coinStructureSpawnPos.position, coinStructureSpawnPos.rotation);
        tempObject.SetActive(true);
        csspAnimationScript.enabled = true;
      

        yield return new WaitForSeconds(3f);
        coinsDataScript.SpecialCoinTowerActivation();
        csspAnimationScript.enabled = false;
        pusherAnimationScript.removingBegan = false;
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            StartShow();
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            TurnWheels();
        }

        if (!spinStarted)
            return;
        currentLerpTime1 += Time.deltaTime;
        currentLerpTime2 += Time.deltaTime;
        currentLerpTime3 += Time.deltaTime;

        float t1 = currentLerpTime1 / maxLerpTime1;
        t1 = t1 * t1 * t1 * (t1 * (6f * t1 - 15f) + 10f);
        if (currentLerpTime1 > maxLerpTime1 || wheel1.transform.eulerAngles.z == finalAngle1)
        {
            if(!wheel1Finished)
                AudioManager.instance.Play("CorrectSlot");

            currentLerpTime1 = maxLerpTime1;
            startAngle1 = finalAngle1 % 360;
            wheel1Finished = true;
            
        }
        if(!wheel1Finished)
        {
            angle1 = Mathf.Lerp(startAngle1, finalAngle1, t1);
            wheel1.eulerAngles = new Vector3(angle1, 0, 0);
        }
        else
        {
            wheel1.eulerAngles = new Vector3(finalAngle1, 0, 0);
        }
        



        float t2 = currentLerpTime2 / maxLerpTime2;
        t2 = t2 * t2 * t2 * (t2 * (6f * t2 - 15f) + 10f);
        if (currentLerpTime2 > maxLerpTime2 || wheel2.transform.eulerAngles.z == finalAngle2)
        {
            if (!wheel2Finished)
                AudioManager.instance.Play("CorrectSlot");

            currentLerpTime2 = maxLerpTime2;
            startAngle2 = finalAngle2 % 360;
            wheel2Finished = true;
        }
        if(!wheel2Finished)
        {
            angle2 = Mathf.Lerp(startAngle2, finalAngle2, t2);
            wheel2.eulerAngles = new Vector3(angle2, 0, 0);
        }
        else
        {
            wheel2.eulerAngles = new Vector3(finalAngle2, 0, 0);
        }
        


        float t3 = currentLerpTime3 / maxLerpTime3;
        t3 = t3 * t3 * t3 * (t3 * (6f * t3 - 15f) + 10f);
        if (currentLerpTime3 > maxLerpTime3 || wheel3.transform.eulerAngles.z == finalAngle3)
        {
            if (!wheel3Finished)
                AudioManager.instance.Play("CorrectSlot");

            currentLerpTime3 = maxLerpTime3;
            startAngle3 = finalAngle3 % 360;
            wheel3Finished = true;
        }
        if(!wheel3Finished)
        {
            angle3 = Mathf.Lerp(startAngle3, finalAngle3, t3);
            wheel3.eulerAngles = new Vector3(angle3, 0, 0);
        }else
        {
            wheel3.eulerAngles = new Vector3(finalAngle3, 0, 0);
        }
        


        if (wheel1Finished)
        {
            wheel1.eulerAngles = new Vector3(finalAngle1, 0, 0);

        }

        if (wheel2Finished)
        {
            wheel2.eulerAngles = new Vector3(finalAngle2, 0, 0);

        }

        if (wheel3Finished)
        {
            wheel3.eulerAngles = new Vector3(finalAngle3, 0, 0);
        }


        if (wheel1Finished && wheel2Finished && wheel3Finished)
        {
            spinStarted = false;
            AudioManager.instance.StopSound("SlotsSpin");
            // Debug.Log("End Spin");
            CheckSpinResult();    

        }
       
    }

    public void CheckSpinResult()
    {
        float result1 = finalAngle1 % 360f;
        float result2 = finalAngle2 % 360f;
        float result3 = finalAngle3 % 360f;

        if (result1 == result2  && result2 == result3)
        {
            AudioManager.instance.Play("WinSound");
        }

        //Debug.Log(result1 + " " + result2 + " " + result3);
        if (result1 == 180f && result2 == 180f && result3 == 180f)
        {
            uiManagerScript.Sweet();
            StartShow();
        }
        else if (result1 == 150f && result2 == 150f && result3 == 150f)
        {
            // 10 green coins
            uiManagerScript.Sweet();

            curentSpawnedDollarCoins = 0;
            maxSpawnedDollarCoins = 10;
            InvokeRepeating("SpawnDollarCoins", 0.2f, 0.2f);
        }
        else if (result1 == 210f && result2 == 210f && result3 == 210f)
        {
            // 20 green coins
            uiManagerScript.Sweet();

            curentSpawnedDollarCoins = 0;
            maxSpawnedDollarCoins = 20;
            InvokeRepeating("SpawnDollarCoins", 0.2f, 0.2f);
        }
        else if (result1 == 270f && result2 == 270f && result3 == 270f)
        {
            // 50 green coins
            uiManagerScript.Sweet();

            curentSpawnedDollarCoins = 0;
            maxSpawnedDollarCoins = 50;
            InvokeRepeating("SpawnDollarCoins", 0.2f, 0.2f);
        }
        else if (result1 == 120f && result2 == 120f && result3 == 120f)
        {
            // BAR
            uiManagerScript.Fruit();
            StartCoroutine("SpawnAllFruits");
        }
        else if (result1 == 0f && result2 == 0f && result3 == 0f)
        {
            // first
            // Random

            SpawnFruit(Random.Range(0, fruits.Length));
            uiManagerScript.Fruit();

        }
        else if (result1 == 60f && result2 == 60f && result3 == 60f)
        {
            // third
            // Lemon

            uiManagerScript.Fruit();
            SpawnFruit(18);
        }
        else if (result1 == 30f && result2 == 30f && result3 == 30f)
        {
            // second
            // Watermelon

            uiManagerScript.Fruit();
            SpawnFruit(34);
        }
        else if (result1 == 300f && result2 == 300f && result3 == 300f)
        {
            // forth
            // Cherry

            uiManagerScript.Fruit();
            SpawnFruit(7);
        }
        else if (result1 == 240f && result2 == 240f && result3 == 240f)
        {
            // Random 50 coins
            uiManagerScript.Sweet();

            currentSpawnedSimpleCoins = 0;
            maxSpawnedSimpleCoins = 50;
            InvokeRepeating("SpawnSimpleCoins", 0.15f, 0.15f);
        }
        else if (result1 == 90f && result2 == 90f && result3 == 90f)
        {
            // Random 100 coins
            uiManagerScript.Sweet();

            currentSpawnedSimpleCoins = 0;
            maxSpawnedSimpleCoins = 100;
            InvokeRepeating("SpawnSimpleCoins", 0.15f, 0.15f);
        }
        else if (result1 == 330f && result2 == 330f && result3 == 330f)
        {
            // Random 500 coins
            uiManagerScript.Sweet();

            currentSpawnedSimpleCoins = 0;
            maxSpawnedSimpleCoins = 500;
            InvokeRepeating("SpawnSimpleCoins", 0.15f, 0.15f);
        } else if (result1 != result2 || result2 != result3) 
        {
            // TODO
            if (secondCeance)
            {
                Debug.Log("thy are different");
                uiManagerScript.AllRolssWrongPOPUPActivate();
            }
        }
        else return;


    }

    public void SpawnSimpleCoins()
    {
        float spawnXPos = Random.Range((defaultSpawnPosition.position.x - 0.4f), (defaultSpawnPosition.position.x + 0.4f));
        float spawnZPos = Random.Range((defaultSpawnPosition.position.z - 0.2f), (defaultSpawnPosition.position.z + 0.2f));
        Vector3 spawnPosition = new Vector3(spawnXPos, defaultSpawnPosition.position.y, spawnZPos);
        //light[0].SetActive(true);
        int randomChance = Random.Range(0, 100);

        if (randomChance >= 0 && randomChance <= 30)
        {
            poolScript.SpawnFromPool("Coin1", spawnPosition, defaultSpawnPosition.rotation);
           // Instantiate(coinTypes[0], spawnPosition, defaultSpawnPosition.rotation);
        }
        else if (randomChance > 30 && randomChance <= 60)
        {
            poolScript.SpawnFromPool("Coin5", spawnPosition, defaultSpawnPosition.rotation);
           // Instantiate(coinTypes[1], spawnPosition, defaultSpawnPosition.rotation);
        }
        else if (randomChance > 60 && randomChance <= 80)
        {
            poolScript.SpawnFromPool("Coin10", spawnPosition, defaultSpawnPosition.rotation);
           // Instantiate(coinTypes[2], spawnPosition, defaultSpawnPosition.rotation);
        }
        else if (randomChance > 80 && randomChance <= 90)
        {
            poolScript.SpawnFromPool("Coin50", spawnPosition, defaultSpawnPosition.rotation);
           // Instantiate(coinTypes[3], spawnPosition, defaultSpawnPosition.rotation);
        }
        else if (randomChance > 90 && randomChance <= 99f)
        {
            poolScript.SpawnFromPool("Coin100", spawnPosition, defaultSpawnPosition.rotation);
           // Instantiate(coinTypes[4], spawnPosition, defaultSpawnPosition.rotation);
        }
        else if (randomChance > 99f && randomChance <= 100)
        {
            poolScript.SpawnFromPool("Coin500", spawnPosition, defaultSpawnPosition.rotation);
            //Instantiate(coinTypes[5], spawnPosition, defaultSpawnPosition.rotation);
        }
        //Instantiate(coinTypes[Random.Range(0, coinTypes.Length)], spawnPosition, defaultSpawnPosition.rotation);
        currentSpawnedSimpleCoins += 1;
        if (currentSpawnedSimpleCoins >= maxSpawnedSimpleCoins)
        {
            CancelInvoke("SpawnSimpleCoins");
        }
    }


    public void SpawnDollarCoins()
    {
        float spawnXPos = Random.Range((defaultSpawnPosition.position.x - 0.4f), (defaultSpawnPosition.position.x + 0.4f));
        float spawnZPos = Random.Range((defaultSpawnPosition.position.z - 0.2f), (defaultSpawnPosition.position.z + 0.2f));
        Vector3 spawnPosition = new Vector3(spawnXPos, defaultSpawnPosition.position.y, spawnZPos);
       // Instantiate(dollarCoin, spawnPosition, defaultSpawnPosition.rotation);
        poolScript.SpawnFromPool("DollarCoin", spawnPosition, defaultSpawnPosition.rotation);

        curentSpawnedDollarCoins += 1;
        if (curentSpawnedDollarCoins >= maxSpawnedDollarCoins)
        {
            CancelInvoke("SpawnDollarCoins");
        }
    }

    public void SpawnCashAmount(int cashCoins)
    {
        curentSpawnedDollarCoins = 0;
        maxSpawnedDollarCoins = cashCoins;
        InvokeRepeating("SpawnDollarCoins", 0.2f, 0.2f);

    }
    IEnumerator SpawnAllFruits()
    {
        for (int i = 0; i < 4; i++)
        {
            SpawnFruit(Random.Range(0, fruits.Length));
            yield return new WaitForSeconds(0.5f);
        }
    }

    public void SpawnFruit(int fruitNumber)
    {
        for (int i = 0; i < fruits.Length; i++)
        {
            if (i== fruitNumber)
            {
                //Write specific position
                //Debug.Log("Spawning " + fruitType);
                Instantiate(fruits[i], defaultSpawnPosition.position, defaultSpawnPosition.rotation);
                break;
            }
        }
    }


    bool secondCeance = false;

    public void TurnWheels()
    {
        if (!secondCeance)
        {
            secondCeance = true;
        }
        else
        {
            secondCeance = false;
        }
        

        AudioManager.instance.Play("SlotsSpin");

        currentLerpTime1 = 0f;
        currentLerpTime2 = 0f;
        currentLerpTime3 = 0f;

        angle1 = 0f;
        angle2 = 0f;
        angle3 = 0f;

        wheel1Finished = false;
        wheel2Finished = false;
        wheel3Finished = false;
        
        if (!PlayerPrefs.HasKey("FirstSpins"))
        {
            PlayerPrefs.SetInt("FirstSpins", 0);

        }

        if (PlayerPrefs.HasKey("FirstSpins") && PlayerPrefs.GetInt("FirstSpins") < 3)
        {
            bonusProbability = 100f;
            if (PlayerPrefs.GetInt("FirstSpins") == 0)
            {
                specificBonus = true;
                bonusType = 30f;
                PlayerPrefs.SetInt("FirstSpins", 1);
            }
            else if (PlayerPrefs.GetInt("FirstSpins") == 1)
            {
                specificBonus = true;
                bonusType = 10f;
                PlayerPrefs.SetInt("FirstSpins", 2);
            }
            else if (PlayerPrefs.GetInt("FirstSpins") == 2)
            {
                specificBonus = true;
                bonusType = 0f;
                PlayerPrefs.SetInt("FirstSpins", 3);
            }
        } else if (PlayerPrefs.GetInt("FirstSpins") >= 3)
        {
            specificBonus = false;
            ProbabilityCheck();
        }
        

        float randomChance = Random.Range(0, 100f);
        if( randomChance <= bonusProbability)
        {
            //give bonus
            float specialFinalAngle = ReturnRandomBonusAngle();
            finalAngle1 = fullCircles * 360f + specialFinalAngle;
            finalAngle2 = fullCircles * 360f + specialFinalAngle;
            finalAngle3 = fullCircles * 360f + specialFinalAngle;
        }
        else
        {
            //do usual spin
            float randomFinalAngle1 = sectors[Random.Range(0, sectors.Length)];
            float randomFinalAngle2 = sectors[Random.Range(0, sectors.Length)];
            float randomFinalAngle3 = sectors[Random.Range(0, sectors.Length)];
            finalAngle1 = fullCircles * 360f + randomFinalAngle1;
            finalAngle2 = fullCircles * 360f + randomFinalAngle2;
            finalAngle3 = fullCircles * 360f + randomFinalAngle3;
            CheckRandomness();
        }

        spinStarted = true;

    }

    private void CheckRandomness()
    {
        if (bonusProbability == 0)
        {
            if (finalAngle1 == finalAngle2 && finalAngle2 == finalAngle3)
            {
                //Debug.Log("Accidental Probability");
                float randomFinalAngle1 = sectors[Random.Range(0, sectors.Length)];
                float randomFinalAngle2 = sectors[Random.Range(0, sectors.Length)];
                float randomFinalAngle3 = sectors[Random.Range(0, sectors.Length)];
                finalAngle1 = fullCircles * 360f + randomFinalAngle1;
                finalAngle2 = fullCircles * 360f + randomFinalAngle2;
                finalAngle3 = fullCircles * 360f + randomFinalAngle3;
                CheckRandomness();

            }
            else
            {
                return;
            }
        }

    }

    float returnDolarBonus()
    {
        timeSpin = 0;
        switch (Random.Range(0, 3))
        {
            case 0:
                return 10f;
                break;
            case 1:
                return 20f;
                break;
            case 2:
                return 30f;
                break;
            default:
                break;
        }
        return 10f;
    }

    public float timeSpin = 0;

    public float ReturnRandomBonusAngle()
    {
        if(!specificBonus)
        {
            timeSpin++;
            float actualDolars = PlayerPrefs.GetFloat("DollarScoreCount");

            if (actualDolars < 15 && timeSpin % 2 == 0)
            {
                Debug.Log("HERE!");
                bonusType = returnDolarBonus();
            }
            else if (actualDolars >= 15 && actualDolars < 25 && timeSpin % 3 == 0)
            {
                Debug.Log("HERE! 2? ");
                bonusType = returnDolarBonus();
            }
            else if (actualDolars >= 25 && actualDolars < 40 && timeSpin % 5 == 0)
            {
                Debug.Log("HERE! 3???? ");
                bonusType = returnDolarBonus();
            }
            else if (actualDolars >= 40 && actualDolars < 50 && timeSpin % 8 == 0)
            {
                bonusType = returnDolarBonus();
            }
            else if (actualDolars >= 50 && actualDolars < 60 && timeSpin % 10 == 0)
            {
                bonusType = returnDolarBonus();
            }
            else
            {
                bonusType = Random.Range(0, 120f);
            }
        }


        if (bonusType >= 0 && bonusType < 10f)
        {
            //777
            StartCoroutine(double777Reward(28));
            return 180f;
        }
        else if (bonusType >= 10f && bonusType < 20f)
        {
            //Debug.Log("Your Bonus is : Green 10  Dollar Coins");
            return 150f;
        }
        else if (bonusType >= 20f && bonusType < 30f)
        {
            //Debug.Log("Your Bonus is : Green 20  Dollar Coins");
            return 210f;
        }
        else if (bonusType >= 30f && bonusType < 40f)
        {
            //Debug.Log("Your Bonus is : Green 50  Dollar Coins");
            return -90f;

        }
        else if (bonusType >= 40f && bonusType < 50f)
        {
            //Debug.Log("Your Bonus is : Bar");
            return 120f;
        }
        else if (bonusType >= 50f && bonusType < 60f)
        {
            //Debug.Log("Your Bonus is : Grape");
            return 0f;
        }
        else if (bonusType >= 60f && bonusType < 70f)
        {
            //Debug.Log("Your Bonus is : Lemon");
            return 60f;
        }
        else if (bonusType >= 70f && bonusType < 80f)
        {
            //Debug.Log("Your Bonus is : Watermelon");
            return 30f;
        }
        else if (bonusType >= 80f && bonusType < 90f)
        {
            //Debug.Log("Your Bonus is : Cherry");
            return -60f;
        }
        else if (bonusType >= 90f && bonusType < 100f)
        {
            //Debug.Log("Your Bonus is : Simple 50 Different Coins");
            return 240f;
        }
        else if (bonusType >= 100f && bonusType < 110f)
        {
            //Debug.Log("Your Bonus is : Simple 100 Different Coins");
            return 90f;
        }
        else if (bonusType >= 110f && bonusType <= 120f)
        {
            //Debug.Log("Your Bonus is : Simple 500 Different Coins");
            return -30f;
        }
        else
        {
            //Debug.Log("Something wrong with code!");
            return 0f;
        }

    }

    private void ProbabilityCheck()
    {
        float maxPercentage = 0f;

        int currentCoins = PlayerPrefs.GetInt("CoinScoreCount");
        int maxCoins = 1000000;
        float coinsGained = currentCoins * 100 / maxCoins;
        if (coinsGained > maxPercentage)
            maxPercentage = coinsGained;

        float currentDollars = PlayerPrefs.GetFloat("DollarScoreCount");
        float maxDollars = 100f;
        float dollarsGained = currentDollars * 100 / maxDollars;
        if (dollarsGained > maxPercentage)
            maxPercentage = dollarsGained;

        int currentFruits = PlayerPrefs.GetInt("FruitScoreCount");
        int maxFruits = 36;
        float fruitsGained = currentFruits * 100 / maxFruits;
        if (fruitsGained > maxPercentage)
            maxPercentage = fruitsGained;

        if (maxPercentage >= 0f && maxPercentage < 20f)
        {
            bonusProbability = 80f;
        }
        else if (maxPercentage >= 20f && maxPercentage < 30f)
        {
            bonusProbability = 50f;
        }
        else if (maxPercentage >= 30f && maxPercentage < 40f)
        {
            bonusProbability = 20f;
        }
        else if (maxPercentage >= 40f && maxPercentage < 90f)
        {
            bonusProbability = 15f;
        }
        else if (maxPercentage >= 90f && maxPercentage < 99f)
        {
            bonusProbability = 0.5f;
        }
        else if(maxPercentage >= 99f)
        {
            bonusProbability = 0;
        }

    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetString("w1", coinsDataScript.GetPositionRotationString(wheel1));
        PlayerPrefs.SetString("w2", coinsDataScript.GetPositionRotationString(wheel2));
        PlayerPrefs.SetString("w3", coinsDataScript.GetPositionRotationString(wheel3));
        
        PlayerPrefs.SetFloat("startAngle1", startAngle1);
        PlayerPrefs.SetFloat("startAngle2", startAngle2);
        PlayerPrefs.SetFloat("startAngle3", startAngle3);
    }

    void setWhellsRotation()
    {
        if(PlayerPrefs.GetString("w1").Length <= 1) {  Debug.Log("DID NOT LOAD"); return; }
        string[] w1 = PlayerPrefs.GetString("w1").Split(" "[0]); ;
        string[] w2 = PlayerPrefs.GetString("w2").Split(" "[0]); ;
        string[] w3 = PlayerPrefs.GetString("w3").Split(" "[0]); ;

        wheel1.transform.eulerAngles = new Vector3(float.Parse(w1[3]), float.Parse(w1[4]), float.Parse(w1[5]));
        wheel2.transform.eulerAngles = new Vector3(float.Parse(w2[3]), float.Parse(w2[4]), float.Parse(w2[5]));
        wheel3.transform.eulerAngles = new Vector3(float.Parse(w3[3]), float.Parse(w3[4]), float.Parse(w3[5]));

        startAngle1 = PlayerPrefs.GetFloat("startAngle1");
        startAngle2 = PlayerPrefs.GetFloat("startAngle2");
        startAngle3 = PlayerPrefs.GetFloat("startAngle3");
    }


    public void startADoubleReward(float timeToWait)
    {
        StartCoroutine(double777Reward(timeToWait));
    }

    float dolarInMinus = 0;

    public void dolarsInMinus(float add)
    {
        dolarInMinus += add;
    }

    int coinInMinus = 0;

    public void coinsInMinus(int add)
    {
        coinInMinus += add;
    }

    IEnumerator double777Reward(float timeToWait)
    {
        uiManagerScript.coinCounterScript.SaveCoinScoreCount();
        yield return new WaitForSeconds(0.2f);
        dolarInMinus = 0;
        coinInMinus = 0;

        int coins = uiManagerScript.coinCounterScript.GetCoinScoreCount();
        float dolars = PlayerPrefs.GetFloat("DollarScoreCount");


        Debug.Log(dolars);

        yield return new WaitForSeconds(timeToWait);

        Debug.Log(dolars);
        uiManagerScript.coinCounterScript.SaveCoinScoreCount();

        coins = (uiManagerScript.coinCounterScript.GetCoinScoreCount() - coins) + coinInMinus;
        dolars = (PlayerPrefs.GetFloat("DollarScoreCount") - dolars) + dolarInMinus;

        Debug.Log(PlayerPrefs.GetFloat("DollarScoreCount"));
        Debug.Log(dolars);
        Debug.Log(dolarInMinus);

        if (coins < 0 )
        {
            coins = 0;
        }
        if(dolars < 0)
        {
            dolars = 0;
        }

        uiManagerScript.ActionActivteDouble777(coins,dolars);
        
    }
}
