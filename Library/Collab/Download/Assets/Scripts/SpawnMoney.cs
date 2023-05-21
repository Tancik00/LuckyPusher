using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.EventSystems;

public class SpawnMoney : MonoBehaviour
{
    public bool spawnUsingPooling;

    public List<GameObject> totalCoinsObjects = new List<GameObject>();
    public List<GameObject> totalCoinObjectPositions = new List<GameObject>();

    public GameObject[] light;
    public GameObject button;

    [System.Serializable]
    public class MoneyClass
    {
        public GameObject coinObject;
        public int MinVariation = 0;
        public int MaxVariation = 0;
    }

    public float timerLight1, timerLight2, timerLight3;

    public int secondsCanvasIsActive;
    public GameObject notEnoughMonede;
    public Button ExceangeDolarForCoinsButton;
    public GameObject getMoreCoinsPanel;

    public MoneyClass[] coinsArray;
    GameObject spawner;

    public Text monedeSpawnCount;
    public Text timer;

    int addCoinTime;
    [Header("Pocket Coins")]
    public int pocketCoins = 0;
   
    bool disable;
    bool isTapped;
    public bool lightIsActive1;
    public bool lightIsActive2;
    public bool lightIsActive3;

    public Transform spawnPos1, spawnPos2, spawnPos3;
    public bool canSpawnCoins;

    public bool doubleCoinsEnabled;
    private float currentSpawnTime;
    private float delaySpawnTime;

    public bool AdsEnabled;
    private ads adScript;
    private GameManager GM;
    private GameObject managersObject;
    private DebugManager debugMng;

    //XD
    public CoinCounter coinCounter;
    public Button autoclikerForceAddButton;
    public bool autoclicker = false;
    private bool dolarCoin = false;


    // Chest spawn
    public GameObject chest;


    //Other values
    int randomChance;
    Vector3 fixedSpawnPosition;
    public LayerMask ignoreMask;
    private ObjectPooler poolScript;

    private bool isEditor;

    Ray ray;
    RaycastHit hit;
    Camera cam;


    private void Awake()
    {
    
        managersObject = GameObject.FindGameObjectWithTag("GameManager");
        adScript = managersObject.GetComponent<ads>();
        GM = managersObject.GetComponent<GameManager>();
        debugMng = managersObject.GetComponent<DebugManager>();

        AdsEnabled = true;

#if UNITY_EDITOR
        AdsEnabled = false;
#endif
    }

    private void Start()
    {
        canSpawnCoins = false;
        lightIsActive1 = false;
        lightIsActive2 = false;
        lightIsActive3 = false;

        isTapped = false;
        disable = false;
        addCoinTime = 4;
        secondsCanvasIsActive = 0;

        timerLight1 = timerLight2 = timerLight3 = 0;

        InvokeRepeating("CanSetMonede", 0, 1);
        InvokeRepeating("LightTimer", 0, 1);


        pocketCoins = GetPocketCoinsCount();
        monedeSpawnCount.text = pocketCoins.ToString();

        isEditor = false;

#if UNITY_EDITOR
        isEditor = true;
#endif

        cam = Camera.main;
        poolScript = ObjectPooler.Instance;
    }

    // Update is called once per frame
    void Update()
    {

        if (pocketCoins > 0)
        {
            // MonedeSpawn();
            canSpawnCoins = true;
            //monedeSpawnCount.text = pocketCoins.ToString();
        }
        else
            canSpawnCoins = false;


        if (Input.GetButtonDown("Fire1"))
            rayEvent();

        if (Input.GetKeyDown(KeyCode.K))
            spawnChest();

    }

    void rayEvent()
    {
        

        if (isEditor)
        {
            if (EventSystem.current.IsPointerOverGameObject())
                return;
        }
        else
        {

            if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
                return;
        }
        


        ray = cam.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out hit, 100.0f, ignoreMask))
        {
            if (hit.collider.CompareTag("ClickPlane"))
                SpawnButtonGeneralized(hit.point);
        }
    }

    public IEnumerator LightTime1()
    {
        light[0].SetActive(true);
        yield return new WaitForSeconds(0.1f);
        lightIsActive1 = false;
        yield return null;
    }

    public IEnumerator LightTime2()
    {
        light[1].SetActive(true);
        yield return new WaitForSeconds(0.1f);
        lightIsActive2 = false;
        yield return null;
    }

    public IEnumerator LightTime3()
    {
        light[2].SetActive(true);
        yield return new WaitForSeconds(0.1f);
        lightIsActive3 = false;
        yield return null;
    }


    public void flashRandomLight()
    {
        
        switch (Random.Range(0, 3))
        {
            case 0:
                StartCoroutine("LightTime1");
                break;
            case 1:
                StartCoroutine("LightTime2");
                break;
            case 2:
                StartCoroutine("LightTime3");
                break;
            default:
                break;
        }
    }

    public void FlashSpecificLight(Vector3 coinPosition)
    {
        if (coinPosition.x < 0)
        {
            StartCoroutine("LightTime3");
        }
        else if (coinPosition.x >= 0 && coinPosition.x < 0.2f)
        {
            StartCoroutine("LightTime2");
        }
        else if (coinPosition.x >= 0.2f)
        {
            StartCoroutine("LightTime1");
        }

    }


    public void SpawnButtonGeneralized(Vector3 spawnPosition)
    {
        if (GM.gameObject.GetComponent<UIManager>().ShoopOpen)
        {
            return;
        }
        LightTimer();
        FlashSpecificLight(spawnPosition);

        if (pocketCoins == 0)
        {
            notEnoughMonedePanel();
        }
        if (canSpawnCoins)
        {

            //timerLight1 = 0.5f;
            pocketCoins -= 1;
            if (pocketCoins >= 0)
            {
                monedeSpawnCount.text = pocketCoins.ToString();
            }
            //light[0].SetActive(true);
            int randomChance = Random.Range(0, 100);

            //Vector3 positionToSpawn = Vector3.Lerp(spawnPos1.position, spawnPos3.position, Input.mousePosition.x/Screen.width);
            fixedSpawnPosition.x = Mathf.Clamp(spawnPosition.x, -0.18f, 0.485f);
          //  fixedSpawnPosition.x = spawnPosition.x;
            fixedSpawnPosition.y = -2.9f;
            fixedSpawnPosition.z = spawnPosition.z;

            if (dolarCoin)
            {
                //poolScript.SpawnFromPool("");
                if(!spawnUsingPooling)
                {
                    Instantiate(coinsArray[6].coinObject, fixedSpawnPosition, spawnPos1.rotation); // dollar coin
                    if (doubleCoinsEnabled)
                    {
                        //Vector3 abovePosition = fixedSpawnPosition + Vector3.up / 2f;
                        Instantiate(coinsArray[6].coinObject, fixedSpawnPosition, spawnPos1.rotation); // dollar coin
                    }
                }
                else
                {
                    //poolScript.SpawnFromPool("DollarCoin", fixedSpawnPosition, spawnPos1.rotation);
                    poolScript.SpawnFromPool("BPL_1", fixedSpawnPosition, spawnPos1.rotation);
                    if (doubleCoinsEnabled)
                    {
                        //poolScript.SpawnFromPool("DollarCoin", fixedSpawnPosition, spawnPos1.rotation);
                        poolScript.SpawnFromPool("BPL_1", fixedSpawnPosition, spawnPos1.rotation);
                    }
                }
              
            }
            else
            {
                spawnCoinEvent(randomChance, fixedSpawnPosition);
               
            }
        }
    }


    private void spawnCoinEvent(float randomChance,Vector3 positionToSpawn)
    {

        if (randomChance >= 0 && randomChance < 10)
        {
            if (!spawnUsingPooling)
            {
                GameObject coinInstance = Instantiate(coinsArray[0].coinObject, positionToSpawn, spawnPos1.rotation);
               // totalCoinsObjects.Add(coinInstance);
                if (doubleCoinsEnabled)
                {
                    //Vector3 abovePosition = positionToSpawn + Vector3.up / 2f;
                    Instantiate(coinsArray[0].coinObject, positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }

            }
            else
            {
                GameObject coinInstance = poolScript.SpawnFromPool("Coin5", positionToSpawn, spawnPos1.rotation);
               // totalCoinsObjects.Add(coinInstance);
                if (doubleCoinsEnabled)
                {
                    // Vector3 abovePosition = positionToSpawn + Vector3.up / 2f;
                    poolScript.SpawnFromPool("Coin5", positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }
            }
        }
        else if (randomChance >= 10 && randomChance < 90)
        {

            if (!spawnUsingPooling)
            {
                GameObject coinInstance = Instantiate(coinsArray[1].coinObject, positionToSpawn, spawnPos1.rotation);
                if (doubleCoinsEnabled)
                {
                    //  Vector3 abovePosition = positionToSpawn + Vector3.up / 2f;
                    Instantiate(coinsArray[1].coinObject, positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }
              //  totalCoinsObjects.Add(coinInstance);
            }
            else
            {
                GameObject coinInstance = poolScript.SpawnFromPool("Coin1", positionToSpawn, spawnPos1.rotation);
                if (doubleCoinsEnabled)
                    poolScript.SpawnFromPool("Coin1", positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
               // totalCoinsObjects.Add(coinInstance);
            }


        }
        else if (randomChance >= 90 && randomChance <= 100)
        {
            if (!spawnUsingPooling)
            {
                GameObject coinInstance = Instantiate(coinsArray[2].coinObject, positionToSpawn, spawnPos1.rotation);
                if (doubleCoinsEnabled)
                {
                    Vector3 abovePosition = positionToSpawn + Vector3.up / 2f;
                    Instantiate(coinsArray[2].coinObject, abovePosition, spawnPos1.rotation);
                }
              //  totalCoinsObjects.Add(coinInstance);
            }else
            {
                GameObject coinInstance = poolScript.SpawnFromPool("Coin10", positionToSpawn, spawnPos1.rotation);
                if (doubleCoinsEnabled)
                {
                    poolScript.SpawnFromPool("Coin10", positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }
               // totalCoinsObjects.Add(coinInstance);
            }
        
        }
    }


    public void SpawnButtonGeneralizedRandom()
    {
        LightTimer();
        flashRandomLight();
        if (pocketCoins == 0)// && !autoclikerPopUpIsOn)
        {
            //notEnoughMonedePanel();
            //autoclikerPopUpIsOn = true;
        }
        if (canSpawnCoins)
        {
            pocketCoins -= 1;
            if (pocketCoins >= 0)
            {
                monedeSpawnCount.text = pocketCoins.ToString();
            }

            int randomChance = Random.Range(0, 100);
            Vector3 positionToSpawn = Vector3.Lerp(spawnPos1.position, spawnPos3.position, Random.Range(0, 1f));

            if (dolarCoin)
            {
                if (!spawnUsingPooling)
                {
                    Instantiate(coinsArray[6].coinObject, positionToSpawn, spawnPos1.rotation);
                    if (doubleCoinsEnabled)
                        Instantiate(coinsArray[6].coinObject, positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }
                else
                {
                    //poolScript.SpawnFromPool("DollarCoin", positionToSpawn, spawnPos1.rotation);
                    poolScript.SpawnFromPool("BPL_1", positionToSpawn, spawnPos1.rotation);
                    if (doubleCoinsEnabled)
                        Instantiate(coinsArray[6].coinObject, positionToSpawn + Vector3.up / 2f, spawnPos1.rotation);
                }
            }
            else
            {
                spawnCoinEvent(randomChance, positionToSpawn);
            }
        }
    }

    

    public void notEnoughMonedePanel()
    {
        notEnoughMonede.SetActive(true);
        float dolars = PlayerPrefs.GetFloat("DollarScoreCount");
        if (dolars < 0.5f)
        {
            ExceangeDolarForCoinsButton.interactable = false;
        }
        else
        {
            ExceangeDolarForCoinsButton.interactable = true;
        }

    }


    public void AddSpawnedMonede()
    {
        Debug.Log("Add Spawned Monede is used! If it doesn't appear, then delete!");
        if (!spawnUsingPooling)
        {
            GameObject coinInstance = Instantiate(coinsArray[0].coinObject, spawnPos1.position, spawnPos1.rotation);
            coinInstance = Instantiate(coinsArray[1].coinObject, spawnPos2.position, spawnPos2.rotation);
            coinInstance = Instantiate(coinsArray[2].coinObject, spawnPos3.position, spawnPos3.rotation);
            totalCoinObjectPositions.Add(coinInstance);
            SaveMonedePositions();
        }else
        {
            GameObject coinInstance = poolScript.SpawnFromPool("Coin5", spawnPos1.position, spawnPos1.rotation);
            coinInstance = poolScript.SpawnFromPool("Coin1", spawnPos1.position, spawnPos1.rotation);
            coinInstance = poolScript.SpawnFromPool("Coin10", spawnPos1.position, spawnPos1.rotation);
            totalCoinObjectPositions.Add(coinInstance);
            SaveMonedePositions();
        }
  
    }

    void SaveMonedePositions()
    {
        for (int i = 0; i < totalCoinObjectPositions.Count; i++)
        {
            PlayerPrefs.SetFloat("MonedeX", totalCoinObjectPositions[i].transform.position.x);
            PlayerPrefs.SetFloat("MonedeY", totalCoinObjectPositions[i].transform.position.y);
            PlayerPrefs.SetFloat("MonedeZ", totalCoinObjectPositions[i].transform.position.z);

            totalCoinObjectPositions[i].transform.position = new Vector3(PlayerPrefs.GetFloat("MonedeX"),
                PlayerPrefs.GetFloat("MonedeY"), PlayerPrefs.GetFloat("MonedeZ"));
        }
    }

    void LightTimer()
    {
        if (timerLight1 >= 0)
        {
            lightIsActive1 = true;
            timerLight1 -= 0.1f;
        }
        else
        {
            light[0].SetActive(false);
            lightIsActive1 = false;
        }
        if (timerLight2 >= 0)
        {
            lightIsActive2 = true;
            timerLight2 -= 0.1f;
        }
        else
        {
            light[1].SetActive(false);
            lightIsActive2 = false;
        }
        if (timerLight3 >= 0)
        {
            lightIsActive3 = true;
            timerLight3 -= 0.1f;
        }
        else
        {
            light[2].SetActive(false);
            lightIsActive3 = false;
        }
    }

    void CanSetMonede()
    {
        if (addCoinTime > 0 && !disable)
        {
            addCoinTime -= 1;
            timer.text = addCoinTime.ToString("00:00");
        }

        if (pocketCoins >= 40 && disable)
        {
            timer.color = new Color(timer.color.r, timer.color.g, timer.color.b, 0f);
        }
        else {
            disable = false;
            timer.color = new Color(timer.color.r, timer.color.g, timer.color.b, 1f);
        }

        if (addCoinTime == 0 && !disable)
        {
            pocketCoins += 1;
           // currentPocketCoins = pocketCoins + 1;
            monedeSpawnCount.text = pocketCoins.ToString();
            addCoinTime = 4;
        }

        //Disable top script when is 40
        if (pocketCoins >= 40)
        {
            disable = true;
        }
    }



    public void CancelButton()
    {
        notEnoughMonede.SetActive(false);
    }

    public void CancelGetMorePanel()
    {
        getMoreCoinsPanel.SetActive(false);
    }

    public void ActivateGetMorePanel()
    {
        getMoreCoinsPanel.SetActive(true);
    }

    public void WatchAdForMoreCoins()
    {
        
        if(AdsEnabled)
        {
            adScript.pocketCoinsIsShowing = true;
            adScript.ShowRewardVideo("AddCoins_REWARD");
            adScript.wasRequested = true;
            // Time.timeScale = 0f;
        }
        else
        {
            if (debugMng.debugMode && debugMng.adsActive)
                AddRewardedCoins();
            else if (!debugMng.debugMode || !debugMng.adsActive)
                return;
        }
    }

    public void AddRewardedCoins()
    {
        pocketCoins += 40;
        monedeSpawnCount.text = pocketCoins.ToString();
        CancelButton();
        CancelGetMorePanel();
    }


    public void SavePocketCoinsCount()
    {
        // coinScoreCount = coinCounterScript.coinsCount;
        PlayerPrefs.SetInt("PocketCoinScoreCount", pocketCoins);
    }

    public int GetPocketCoinsCount()
    {

        if (!PlayerPrefs.HasKey("StartGame"))
        {
            PlayerPrefs.SetInt("StartGame", 1);
             return 40;
        }

        if (PlayerPrefs.HasKey("PocketCoinScoreCount"))
        {
            return PlayerPrefs.GetInt("PocketCoinScoreCount");
        }
        else
        {
            PlayerPrefs.SetInt("PocketCoinScoreCount", 0);
            return 0;
        }
    }

    private void OnApplicationQuit()
    {
        
        Debug.Log("Saving data...");
        SavePocketCoinsCount();
    }

    public void ExceangeDolarsForCoin()
    {
        CancelButton();

        float amount = -0.5f;
        pocketCoins += 40;

        monedeSpawnCount.text = pocketCoins.ToString();

        float dolars = coinCounter.GetDollarScoreCount();
        float newAmount = dolars + amount;

        coinCounter.dollarScoreText.text = newAmount.ToString("0.00 $BPL");
        coinCounter.UpdateDollarScore(-0.5f);
        coinCounter.SaveCoinScoreCount();
        PlayerPrefs.SetFloat("DollarScoreCount", newAmount);
        //coinCounter.dollarScoreText.text = coinCounter.GetDollarScoreCount().ToString("$0.00");

        GM.gameObject.GetComponent<UIManager>().spinWheelScript.dolarsInMinus(amount);
    }



    // AUTO CLICKER BONUS

    bool startAddToGetCoins = false;

    private Coroutine autoStartAddCorutine;

    public void autoclickerActivating()
    {
        GM.gameObject.GetComponent<UIManager>().closeAutoClickerPopUp();

        StartCoroutine(autoclickerTimer());
        StartCoroutine(autoclickerSpawner());
    }
    IEnumerator autoclickerTimer()
    {
        autoclicker = true;
        GM.gameObject.GetComponent<UIManager>().activateActiveEffect(1);
        yield return new WaitForSeconds(TimeControler.Instance.bonusAutoClickerTimer());
        autoclicker = false;
    }

    
   IEnumerator autoclickerSpawner()
    {
        while (autoclicker)
        {
            yield return new WaitForSeconds(0.5f);

            
            SpawnButtonGeneralizedRandom();
            // pop up to get more coins
            // Debug.Log(startAddToGetCoins);
            if (pocketCoins == 0 && !startAddToGetCoins )
            {
                Debug.Log("Autocliker auto ads ");

                notEnoughMonedePanel();

                autoStartAddCorutine = StartCoroutine(autoClickerAutoWachAddForCoins());

                startAddToGetCoins = true;
            }
        }
    }

    IEnumerator autoClickerAutoWachAddForCoins()
    {
        ColorBlock btncolor = autoclikerForceAddButton.colors;
        yield return new WaitForSeconds(2f);

        btncolor.normalColor = autoclikerForceAddButton.colors.pressedColor;
        autoclikerForceAddButton.colors = btncolor;

        yield return new WaitForSeconds(0.25f);
        autoclikerForceAddButton.onClick.Invoke();
        resetButtonColor();
    }

    public void cancelAutoclickerCourutine()
    {
        if (autoStartAddCorutine != null)
        {
            StopCoroutine(autoStartAddCorutine);
        }
        resetButtonColor();
        
    }

    public void resetButtonColor()
    {
        ColorBlock btncolor = autoclikerForceAddButton.colors;
        btncolor.normalColor = Color.white;
        autoclikerForceAddButton.colors = btncolor;
        StartCoroutine(arandomienumerator());
    }

    IEnumerator arandomienumerator()
    {
        yield return new WaitForSeconds(3);
        startAddToGetCoins = false;
    }


    // COIN TO CACH BONUS
    public void CoinToCachBonus()
    {
        StartCoroutine(coinToCachTimer());
        GM.gameObject.GetComponent<UIManager>().closeCoinToCachPopUp();
    }

    IEnumerator coinToCachTimer()
    {
        dolarCoin = true;
        GM.gameObject.GetComponent<UIManager>().activateActiveEffect(2);
        yield return new WaitForSeconds(30);
        dolarCoin = false;
        
    }


    // spawn chest
    public void spawnChest()
    {
        GM.gameObject.GetComponent<UIManager>().closeDropChestPopUp();
        Instantiate(chest, new Vector3(0.158f, -2.893f, 10.93f),Quaternion.identity);
    }
    


}
