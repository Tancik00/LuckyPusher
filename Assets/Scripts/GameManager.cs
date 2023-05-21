using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Collections;
//using Firebase.Analytics;
using UnityEngine.UI;
using AppsFlyerSDK;
using UnityEngine;
using System;
using System.Net;

public class GameManager : MonoBehaviour
{
    [SerializeField] private bool gameStarted;
    public SpawnMoney spawnerOnStart;
    [Header("Coin Structures")]
    public GameObject coinSpawnStructure;
    public GameObject specialSpawnStructure;
    public Transform spawnPosition;
    public GameObject startTutorialObject;
    public GameObject spinTutorialObject;
    public CoinsData coinDataScript;
    public MobileNotifications mobileNotifications;
    public CoinCounter coinCounterScript;
    public LeaderboardMenu leaderboardMenuScript;
    private DebugManager debugScript;
    
    public Transform coinReferencePosition;
    public Transform dolarReferencePosition;
    public Text youMissedText;
    public GameObject luckyPrizePanel;
    
    private bool connected = false;

    public bool Connected
    {
        get { return connected; }
    }
    
    private bool extra;

    public bool Extra
    {
        get { return extra; }
        set { extra = value; }
    }
    
    [Header("Coin Decay")]
    public bool coinDecay;
    private string previousTime;
    private string[] timeValuesArray;
    private DateTime previousDate;
    public TimeSpan timeOff;

    // coin decay pop ups
    public GameObject decayEligiblePopUp;
    public GameObject decayTimePopUp;

    public GameObject frontBlock;

    private float spawnTime;
    private float currentTimer;
    
    private void Awake()
    {
        // FORCED EXTRA TRUE
        Extra = true;
        PlayerPrefs.SetInt("extra", 1);

        //GameAnalyticsSDK.GameAnalytics.Initialize();
        //Debug.Log("GAME ANALYTICS SDK INITIALIZATION!");

        debugScript = GetComponent<DebugManager>();
        
#if UNITY_EDITOR
        if (debugScript.ExtraOn)
        {
            PlayerPrefs.SetInt("extra", 1); // debug black and white
            Extra = true;
        }
        else
        {
            PlayerPrefs.SetInt("extra", 0); // debug black and white
            Extra = false;
        }
#endif
    }

    public void StartTutorial()
    {
        Time.timeScale = 1f;

        if (PlayerPrefs.HasKey("extra") && PlayerPrefs.GetInt("extra") == 1)
        {
            //Debug.Log("Extrac True");
            Extra = true;
        }
        //if (Extra)
            //OpenLuckyPrizesPanel();

        //if (Extra && !PlayerPrefs.HasKey("TutorialOff"))
        //{
        //    startTutorialObject.SetActive(true);
        //    PlayerPrefs.SetInt("TutorialOff", 1);
        //    Time.timeScale = 0f;
        //}
        //else if (!Extra || PlayerPrefs.HasKey("TutorialOff"))
        //{
        //    startTutorialObject.SetActive(false);
        //}

    }
    
    // Start is called before the first frame update
    void Start()
    {
        if (frontBlock == null)
        {
//            Debug.Log("Front block is missing!");
        }
        else
        {
            frontBlock.SetActive(!extra);
        }

        if (PlayerPrefs.HasKey("extra") && PlayerPrefs.GetInt("extra") == 1)
        {
            //OpenLuckyPrizesPanel();
        }
        
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        gameStarted = true;
        mobileNotifications = GetComponent<MobileNotifications>();
        
        if (!PlayerPrefs.HasKey("CoinDecay") || PlayerPrefs.GetInt("CoinDecay") == 0)
            coinDecay = false;
        else
            coinDecay = true;

        calculateTimeOff();

        if (coinDecay)
        {
#if UNITY_IOS
            mobileNotifications.RemoveDecayNotification();
#endif
            TimeOffGame();
        }

        //FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelStart);

        spawnTime = UnityEngine.Random.Range(60f, 120f);

        StartCoroutine(checkInternetConnection());
        noAdsSetUp();
    }

    public void OpenLuckyPrizesPanel() => luckyPrizePanel.SetActive(true);
    
    #region NO ADS REGION

    private bool noAds = false;
    public bool NoAds
    {
        get { return noAds; }
    }

    private void noAdsSetUp()
    {
        if (PlayerPrefs.HasKey("NO_ADS") && PlayerPrefs.GetInt("NO_ADS") == 1)
        {
            noAds = true;
        }

#if UNITY_EDITOR
        if(debugScript.debugMode)
            noAds = debugScript.NoAds_Bought;
#endif
    }

    public void bouthNoAds()
    {
        PlayerPrefs.SetInt("NO_ADS", 1);
        noAds = true;
    }

    #endregion NO ADS REGION

    private void WithdrawTimer()
    {
        if (currentTimer > spawnTime)
        {
            leaderboardMenuScript.SpawnWithdrawPanel();
            currentTimer = 0f;
            spawnTime = UnityEngine.Random.Range(60f, 120f);
        }
    }

    private void Update()
    {
        // for editor
        /*if (Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene(0);
        }
        if (Input.GetKeyDown(KeyCode.C))
        {
            PlayerPrefs.DeleteAll();
            SceneManager.LoadScene(0);
        }*/
        //Debug.Log( PlayerPrefs.GetInt("extra") );
    }

    // check internet connection
    IEnumerator checkInternetConnection()
    {
        while (true)
        {
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                connected = false;
            }
            else
            {
                connected = true;
            }

            //WWW www = new WWW("http://google.com");
            //if (www.error != null)
            //{
            //    connected = false;
            //}
            //else
            //{
            //    connected = true;
            //}

#if UNITY_EDITOR
            connected = debugScript.internetConnecion;
#endif
            yield return new WaitForSeconds(1);
        }
    }
    
    public void SpinTutorial()
    {
        if (Extra && !PlayerPrefs.HasKey("SpinTutorialOff"))
        {
            StartCoroutine("QuickTutorial");
           
        }
        else if(!Extra || PlayerPrefs.HasKey("SpinTutorialOff"))
            return;
    }

    IEnumerator QuickTutorial()
    {
        yield return new WaitForSeconds(2f);
        spinTutorialObject.SetActive(true);
        //Time.timeScale = 0;
        yield return null;

    }

    public void TurnOffSpinTutorialPanel(GameObject spinPanel)
    {
        if(spinPanel.activeInHierarchy && !PlayerPrefs.HasKey("SpinTutorialOff"))
        {
            spinPanel.SetActive(false);
            PlayerPrefs.SetInt("SpinTutorialOff", 1);
        }
    }
    
    public void InstantiateSimpleCoinStructure()
    {
        GameObject spawnPosObject = GameObject.FindGameObjectWithTag("StructureSpawn");
        spawnPosition = spawnPosObject.transform;
        Instantiate(coinSpawnStructure, spawnPosition.position, spawnPosition.rotation);
    }

    public void InstantiateSpecialCoinStructure()
    { 
        GameObject spawnPosObject = GameObject.FindGameObjectWithTag("StructureSpawn");
        spawnPosition = spawnPosObject.transform;
        Instantiate(specialSpawnStructure, spawnPosition.position, spawnPosition.rotation);
    }
    
    // Coin Decay part
    public void CoinDecayOn()
    {
        if (!PlayerPrefs.HasKey("CoinDecay") || PlayerPrefs.GetInt("CoinDecay") == 0)
        {
            decayEligiblePopUp.SetActive(true);
            coinDecay = true;
            PlayerPrefs.SetInt("CoinDecay", 1);
        }
    }

    //Time when player is away from game
    private void TimeOffGame()
    {
        if (Mathf.Abs(timeOff.Days) >= 1)
        {
            int coinsPenalty = Mathf.Abs(timeOff.Days) * 1000;
            float dollarsPenalty = (float)Mathf.Abs(timeOff.Days);
           //Debug.Log("Time Span : " + timeOff + " Coins Penalty: " + coinsPenalty + " Dollars Penalty : " + dollarsPenalty);
            coinCounterScript.DecayPenalty(coinsPenalty, dollarsPenalty);
            decayTimePopUp.SetActive(true);
            youMissedText.text = "You missed " + Mathf.Abs(timeOff.Days) + " days";
        }
    }
    
   private void calculateTimeOff()
    {
        if (PlayerPrefs.HasKey("PreviousTime"))
        {
            previousTime = PlayerPrefs.GetString("PreviousTime");
            timeValuesArray = previousTime.Split(" "[0]);   // YYYY MM DD HH MM SS
            int deltaYear = int.Parse(timeValuesArray[0]);
            int deltaMonth = int.Parse(timeValuesArray[1]);
            int deltaDay = int.Parse(timeValuesArray[2]);
            int deltaHour = int.Parse(timeValuesArray[3]);
            int deltaMinute = int.Parse(timeValuesArray[4]);
            int deltaSeconds = int.Parse(timeValuesArray[5]);
            previousDate = new DateTime(deltaYear, deltaMonth, deltaDay, deltaHour, deltaMinute, deltaSeconds);
            timeOff = previousDate - DateTime.Now;


            // Debug.Log("Days Off : " + Mathf.Abs(timeOff.Days));
            // Debug.Log("Hours Off : " + Mathf.Abs(timeOff.Hours));
            // Debug.Log("Minutes Off : " + Mathf.Abs(timeOff.Minutes));

            //Debug.Log(timeOff);
        }
    }
   
    private void OnApplicationPause(bool pause)
    {
//        mobileNotifications.SetDecay();
    }

    private void OnApplicationQuit()
    {
        int seconds = DateTime.Now.Second;
        int minutes = DateTime.Now.Minute;
        int hours = DateTime.Now.Hour;
        int day = DateTime.Now.Day;
        int month = DateTime.Now.Month;
        int year = DateTime.Now.Year;
        PlayerPrefs.SetString("PreviousTime", year + " " + month + " " + day + " " + hours + " " + minutes + " " + seconds);

#if UNITY_IOS
        if (coinDecay)
            mobileNotifications.SetDecay();
#endif

        //Firebase log event: Start of game
        //FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelEnd);
    }
}
