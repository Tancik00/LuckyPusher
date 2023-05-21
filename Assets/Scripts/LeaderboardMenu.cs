using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;

public class LeaderboardMenu : MonoBehaviour
{
    [Header("Assets")]
    public TextAsset nameTextAsset;
    private string[] playerAssetNames;
    public List<string> nickNamesDatabase = new List<string>();


    [Header("Panel")]
    public LeaderboardScript topScript;
    public GameObject topPanel;
    private CanvasGroup topGroup;
//    public GameObject topButton;
    private Image topButtonImage;
    [Space]
    public LeaderboardScript withdrawLeaderScript;
    public GameObject withdrawPanel;
    private CanvasGroup withdrawGroup;
   // public GameObject withdrawButton;
    private Image withdrawButtonImage;
    [Space]
    public Color selectedColor;
    public Color disabledColor;

    //internet connection panel
    public GameObject internetPanel;

    //initialization values
    private DateTime previousDate;
    private DateTime currentDate;

    public TextMeshProUGUI playerNumberText;
    private int playerPosition;

    public GameObject withdrawPrefab;
    public GameObject withdrawSpawnParent;

    private float spawnTime;
    private float currentTimer;

    private GameManager gm;
    private GameObject gmObject;

    [Header("Internet connection")]
    public GameObject connectWithdowanPart;
    public GameObject connectLoadingPart;

    private CanvasGroup connectWithdowanPartCanvas;
    private CanvasGroup connectLoadingPartCanvas;

    [Header("Extras")]
    public DebugManager DBManager;
    public GameObject[] listToActivate;
    public GameObject[] listToDeactivate;

    public GameObject withdrawButton;
    public GameObject leaderboardButton;


    Color yelow = new Color(1f, 0.772f, 0.152f);
    Color blue = new Color(0.262f, 0.313f, 0.623f);

    Coroutine internetChecker;
   IEnumerator checkInternetConnectivity()
    {
        while (true)
        {
            yield return new WaitForSeconds(1);
            if (gm.Connected)
            {
                connectWithdowanPartCanvas.alpha = 1;
                connectLoadingPartCanvas.alpha = 0;
            }
            else
            {
                connectWithdowanPartCanvas.alpha = 0;
                connectLoadingPartCanvas.alpha = 1;
            }
            Debug.Log("Internet - " + gm.Connected);
        }
    }

    public void Start()
    {
        
        gmObject = GameObject.FindGameObjectWithTag("GameManager");
        gm = gmObject.GetComponent<GameManager>();
        topGroup = topPanel.GetComponent<CanvasGroup>();
        withdrawGroup = withdrawPanel.GetComponent<CanvasGroup>();

        connectWithdowanPartCanvas = connectWithdowanPart.GetComponent<CanvasGroup>();
        connectLoadingPartCanvas = connectLoadingPart.GetComponent<CanvasGroup>();

        if (gm.Extra)
        {
            OpenWithdrawPanel();
            foreach (var item in listToActivate)
            {
                item.SetActive(true);
            }
            foreach (var item in listToDeactivate)
            {
                item.SetActive(false);
            }
        }
        else
        {
            OpenTopPanel();
            foreach (var item in listToActivate)
            {
                item.SetActive(false);
            }
            foreach (var item in listToDeactivate)
            {
                item.SetActive(true);
            }
        }

        Debug.Log("Get Coin Count: " + PlayerPrefs.GetInt("CoinScoreCount"));

        if (playerNumberText == null)
        {
            Debug.LogError("Player Number Text is not assigned!");
        }

        if (!PlayerPrefs.HasKey("PlayerPosition"))
        {
            playerPosition = UnityEngine.Random.Range(9000, 10000);
            PlayerPrefs.SetInt("PlayerPosition", playerPosition);
        }
        else
            playerPosition = PlayerPrefs.GetInt("PlayerPosition");


        playerNumberText.text = "You #" + playerPosition.ToString();



        TextToList();
        currentDate = DateTime.Now;

       // topButtonImage = topButton.GetComponent<Image>();
      //  withdrawButtonImage = withdrawButton.GetComponent<Image>();
        

        // Initialization 
        if (!PlayerPrefs.HasKey("Leaderboard") || PlayerPrefs.GetInt("Leaderboard") == 0)
        {
            topScript.LeaderboardInitialize();
        }
        else
        {
            topScript.RetrieveUserNames();
            topScript.GetLeaderboardScores();
        }


        // Daily update
        if (!PlayerPrefs.HasKey("PreviousDate") || PlayerPrefs.GetInt("PreviousDate") == 0)
        {
            PlayerPrefs.SetInt("PreviousDate", currentDate.Day);
        }
        else
        {
            if (PlayerPrefs.GetInt("PreviousDate") != currentDate.Day)
            {
                topScript.LeaderboardDailyUpdate();
                PlayerPrefs.SetInt("PreviousDate", currentDate.Day);
            }
        }

        //otherScript.OtherPanelInitialize();

        if(!PlayerPrefs.HasKey("WithdrawInitialization"))
        {
            withdrawLeaderScript.WithdrawInitialize();
        }
        else
        {
            Debug.Log(gm.timeOff + " - Time off from exit");
            withdrawLeaderScript.GetWithdrawFromPrefs();
            TimeSpan temp = TimeSpan.Zero - gm.timeOff;
            withdwarDependingOnOffTime(temp);
        }

        spawnTime = UnityEngine.Random.Range(2f, 10f);

        //  ClosePanels();
        //  OpenTopPanel();

        //


        // internet checher start
        internetChecker = StartCoroutine(checkInternetConnectivity());
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.W))
        {
            SpawnWithdrawPanel();
            SpawnWithdrawPanel();
            SpawnWithdrawPanel();
            SpawnWithdrawPanel();
        }

        currentTimer += Time.deltaTime;
        WithdrawTimer();
    }


    public void buttonWithdraw()
    {
        withdrawButton.GetComponent<Image>().color = yelow;
        leaderboardButton.GetComponent<Image>().color = blue;
        OpenWithdrawPanel();
    }

    public void buttonLeaderboard()
    {
        withdrawButton.GetComponent<Image>().color = blue;
        leaderboardButton.GetComponent<Image>().color = yelow;
        OpenTopPanel();
    }


    // Name database
    public void TextToList()
    {
        playerAssetNames = nameTextAsset.text.Split("\n"[0]);
        for (int i = 0; i < playerAssetNames.Length; i++)
        {
            nickNamesDatabase.Add(playerAssetNames[i]);
        }
    }


    private void WithdrawTimer()
    {
        if (currentTimer > spawnTime)
        {
            SpawnWithdrawPanel();
            currentTimer = 0f;
            spawnTime = TimeControler.Instance.withdrawInterval(); ;
        }
    }

    public void SpawnWithdrawPanel()
    {
        //GameObject spawnObject = Instantiate(withdrawPrefab, withdrawSpawnParent.transform);
        //spawnObject.transform.SetSiblingIndex(0);
        //withdrawLeaderScript.UpdateNewWithdrawPanel(spawnObject);

        DateTime timeNow = DateTime.Now;
        withdrawLeaderScript.UpdateNewWithdrawPanel(timeNow);

    }


    // time the panel was off and spawn new withdoaws
    DateTime exit;
    DateTime open;

    private void OnDisable()
    {
        exit = DateTime.Now;
        if(internetChecker != null)
            StopCoroutine(internetChecker);
    }

    private void OnEnable()
    {
        if (internetChecker != null)
            StopCoroutine(internetChecker);
        internetChecker = StartCoroutine(checkInternetConnectivity());

        open = DateTime.Now;
        TimeSpan temp = open - exit;
        Debug.Log(temp + " - Time off from in game");
        withdwarDependingOnOffTime(temp);
    }

    void withdwarDependingOnOffTime(TimeSpan temp)
    {
        if (temp < TimeSpan.FromMinutes(1))
        {
            return;
        }
        if (temp < TimeSpan.FromMinutes(2))
        {
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55));
        }
        else if (temp < TimeSpan.FromMinutes(3))
        {
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 2));
        }
        else if (temp < TimeSpan.FromMinutes(4))
        {
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 2));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 3));
        }
        else if (temp < TimeSpan.FromMinutes(5))
        {
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 2));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 3));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 4));
            withdrawLeaderScript.UpdateNewWithdrawPanel(open - TimeSpan.FromSeconds(55 * 5));
        }
        else if (temp > TimeSpan.FromMinutes(5) && temp < TimeSpan.FromMinutes(50))
        {
            withdrawLeaderScript.WithdrawInitialize();
        }
    }

    //-------------------- Panels -----------------------//

    public void OpenTopPanel()
    {
        ClosePanels();
        topGroup.alpha = 1;
        topGroup.blocksRaycasts = true;
        //topPanel.SetActive(true);

        // topButton.SetActive(false);
//        topButtonImage.color = selectedColor;
    }

    public void OpenWithdrawPanel()
    {
        ClosePanels();
        withdrawGroup.alpha = 1;
        withdrawGroup.blocksRaycasts = true;
        //withdrawPanel.SetActive(true);
        //   withdrawButton.SetActive(false);
     //   withdrawButtonImage.color = selectedColor;
    }

    private void ClosePanels()
    {
        //topPanel.SetActive(false);
        topGroup.alpha = 0;
        topGroup.blocksRaycasts = false;
//        topButtonImage.color = disabledColor;

        //withdrawPanel.SetActive(false);
        withdrawGroup.alpha = 0;
        withdrawGroup.blocksRaycasts = false;
    //    withdrawButtonImage.color = disabledColor;
    }
}
