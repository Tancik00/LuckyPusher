using UnityEngine.UI;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.SceneManagement;
using Firebase.Analytics;


public class UIManager : MonoBehaviour
{

    [System.Serializable]
    public class Spawner { public GameObject bigMonede; }
    public Spawner[] spawn;

    public Transform parrentCoinsPos;

    [Header("Objects")]
    public GameObject tempObjectaaaa;
    public GameObject BigShakePanel;
    public GameObject ShopPanel;
    public GameObject WallTimer;
    public GameObject SettingsPanel;
    public GameObject MoneyUI;
    public GameObject WallObject;
    

    public GameObject fruitSprite;
    public GameObject sweetSprite;
    public GameObject spawner;

    public GameObject WithdrawPopUpDollars;
    public GameObject WithdrawPopUpCoins;
    public GameObject WithdrawPopUpFruits;

    [Header("StelianObjects - Bonuss")]

    public ParticleSystem confetiBonus;
    public GameObject confettiSpawnPosition;

    public GameObject ButtonBonussOffert;

    public GameObject AutoClickerPopUp;
    public GameObject BigBombPopUp;
    public GameObject CoinToCachPopUp;
    public GameObject DropChestPopUp;

    public GameObject PanelAutoClicker;
    public GameObject PanelBigBomb;
    public GameObject PanelCoinToCach;
    public GameObject PanelChest;

    public GameObject activePanelCliker;
    public GameObject activePanelCoinToCash;
    public GameObject activePanelWalls;
    public GameObject activePanelDoubleCoin;
    public GameObject activePanelDoubleRewad;

    public Image progressCliker;
    public Image progressCash;
    public Image pogressBonus;
    public Image progressWall;
    public Image progressDoublCoin;
    public Image progressDoublRew;

    public Text TimerTextAutoCliker;
    public Text TimerTextCoinToCash;


    [Header("Chest")]
    public GameObject chestForAnim;

    public GameObject openChestPopUp;
    public GameObject claimChestPopUp;
    public GameObject chestConfetyParticle;

    public Text chestTextFeedback;

    [Header("Other things")]
    public GameObject AllRollsWrongPopUp;

    public GameObject congratsPopUp;
    public Text congratsPopUpText1;
    public Text congratsPopUpText2;

    public GameObject prizes;

    [Header("777 double offerts")]
    public GameObject closeDoubleRewardPopup1;
    public GameObject closeDoubleRewardPopup2;
    public GameObject Double777PopUp;

    public GameObject buttonAddWithCoin;
    public GameObject buttonAddWithDolar;

    public GameObject clickPanel;

    //Text XD
    public Text Double777Coin;
    public Text Double777Dolar;
    public Text Double777CoinDubled;
    public Text Double777DolarDubled;

    [Header("Daily Reward")]

    public GameObject dailyReward;
    public Text dailyRewardDolars;
    public Text dailyRewardStreakToday;
    public Text dailyRewardStreakTomorrow;

    [Header("ButtonsPopUps")]
    public GameObject SpinPopUp;
    public bool spinButtonPopUp = false;

    public GameObject doubleRewardPopUp;
    public bool doubleRewardButtonPopUp = false;

    public GameObject doubleCoinsPopUp;
    public bool doubleCoinsButtonPopUp = false;

    public GameObject riseWallsPopUp;
    public bool riseWallsButtonPopUp = false;


    public GameObject bigShakePopUp;
    public bool bigShakeButtonPopUp = false;


    public GameObject AboutPopUp;

    [Header("UI Buttons")]
    //Double Coins Button
    public Image doubleCoinsImage;
    public Image doubleCoinsSliderImage;
    Button doubleCoinsButton;

    //Wall Button
    public Image wallsImage;
    public Image wallSliderImage;
    Button wallButton;

    //Spin Button
    public Image spinImage;
    public RawImage spinSliderImage;
    Button spinButton;

    //Shake Button
    public Image shakeImage;
    public Image shakeSliderImage;
    Button shakeButton;

    //Double Reward Button
    public Image doubleRewardImage;
    public Image doubleRewardSliderImage;
    Button doubleRewardButton;

    [Header("Cells")]
    public GameObject[] cells;

    [Header("Scripts")]
    public AudioManager audioManager;
    public CoinCounter coinCounterScript;
    public SpinWheelController spinWheelScript;
    public SpawnMoney spawnMoneyScript;
    private GameManager GM;
    public FruitUiUpdate fruitUIUpdate;

    public Vector3 startPos;
    public Vector3 endPos;

    [Header("Text")]
    public Text wallTimer;
    public Text shakeTimer;
    public Text moneyPopUpText;
    public Text SpinText;
    public Text DoubleCoinsText;
    public Text DoubleRewardText;
    public Text fruitsCounterText;

    



    [SerializeField] float wallAnimationCountdown = 0;
    [SerializeField] float currentWallAnimationTimer = 0;

    [SerializeField] float shakeTimerCount = 0;
    [SerializeField] float timeCountShake = 0;
    [SerializeField] float timeCountWall = 0;
    float moneyCount;
    public float lerpTimer;
    public float lerpSpeed;

    [SerializeField] int seconds;
    [SerializeField] int fruitsCounter;

    [Header("Bools")]
    [SerializeField] bool wallButtonIsClicked;
    [SerializeField] bool settingsAreOpened;
    [SerializeField] bool soundIsOn;
    [SerializeField] bool vibrationIsOn;
    [SerializeField] bool wallIsActivated;
    [SerializeField] bool fastWallIsActivated;
    [SerializeField] bool shoppingCellisOn;
    [SerializeField] bool isSweet;
    [SerializeField] bool isFruit;
    [SerializeField] bool spinIsTapped;
    [SerializeField] bool tapShake;
    [SerializeField] bool shakeIsTapped;
    [SerializeField] bool wallIsTapped;
    [SerializeField] bool doubleCoinsIsTapped;
    [SerializeField] bool doubleRewardIsTapped;
    [SerializeField] bool wallIsOnTheTop;
    [SerializeField] bool withdrawPopUpDollars;
    [SerializeField] bool withdrawPopUpCoins;
    [SerializeField] bool withdrawPopUpFruits;
    [SerializeField] bool aboutPopUp;


    [Header("Shop")]
    public GameObject dollarButton;
    public Button coinButton;
    public bool ShoopOpen;


    //shop
    [Header("Shop")]
    public Text YouHaveScoreText;
    public Text YouHaveDollarsText;
    public Text YouHaveFruitsText;
    


    [SerializeField] bool ScorePressed;
    [SerializeField] bool DolarsPressed;
    [SerializeField] bool FruitPressed;

    public GameObject notEnoughBuyPanel;
    public GameObject confirmationBuyPanel;
    public GameObject notEnoughPanel;
    public int buyCoinPrice;
    public float buyDollarPrice;
    public string boughtAnimalTag;


    public GameObject[] luckyAnimal;
    public GameObject[] extrasSpecialButtons;


    private bool timerStarted;

    [Header("Audio")]
    public AudioSource[] sources;

    [Header("Sliders")]
    public Slider spinSlider;
    public Slider shakeSlider;
    public Slider wallSlider;
    public Slider doubleCoinsSlider;
    public Slider doubleRewardSlider;

    [Header("Other")]
    public AudioListener audioListener;
    public GameObject SoundOn;
    public GameObject SoundOff;
    public GameObject VibrationOn;
    public GameObject VibrationOff;

    private ads adScript;
    public bool AdsEnabled;
    public bool testMode;

    [Header("Lucky Prizes")]
    public Sprite[] luckyPrizesToShow;
    public Image luckyPrizesButtonImage;
    private int prizesToShowActualIndex = 0;
    public GameObject LuckyPrizesManager;
    public GameObject LuckyPrizesYouWonPanel;
    public GameObject LuckyPrizesYouWonPrizeName;

    private DebugManager debugMNG;

    private void Awake()
    {
        adScript = GetComponent<ads>();
        debugMNG = GetComponent<DebugManager>();
        AdsEnabled = true;
        testMode = false;
        
#if UNITY_EDITOR
        AdsEnabled = false; // comment to test bubble timer and deactivate ads_active in debug mode
#endif
        
        GM = GetComponent<GameManager>();


        setDailyRewardButton();

    }

    public void UpdateShopButtons (bool buttonsState)
    {
        foreach (var item in extrasSpecialButtons)
        {
            item.SetActive(buttonsState);
        }
        extrasSpecialButtons[0].SetActive(false); // hide win prizes button 
        extrasSpecialButtons[1].SetActive(false); // hide paypal in shop
        extrasSpecialButtons[2].SetActive(false); // hide amazon in shop
        extrasSpecialButtons[4].SetActive(false); // hide withdraw rules in the shop
    }

    

    /*-----------------Start-----------------*/
    private void Start()
    {
        //XD
        showABonus = StartCoroutine(ShowABonus());
        fruitUIUpdate.SetUpFruits();


        // chest on board?

        if (PlayerPrefs.HasKey("chestOnBoard"))
        {
            int a = PlayerPrefs.GetInt("chestOnBoard");
            if (a>=1)
                chestOnBoard = true;
            else
                chestOnBoard = false;
        }


        if (PlayerPrefs.HasKey("extra") && PlayerPrefs.GetInt("extra") == 1)
        {
            UpdateShopButtons(true);
        }
        else
        {
            UpdateShopButtons(false);
        }


        GetAndUpdateTimeValues();

        /*-----------Shop----------*/
        FruitPressed = DolarsPressed = ScorePressed = false;

        //--------------------
        aboutPopUp = false;
        withdrawPopUpDollars = withdrawPopUpCoins = withdrawPopUpFruits = false;
        //   wallIsOnTheTop = false;
        //   doubleRewardIsTapped = false;
        //   wallIsTapped = false;
        ///   shakeIsTapped = false;
        //   spinIsTapped = false;
        //   isFruit = false;
        //   isSweet = false;
       // soundIsOn = true;
        //vibrationIsOn = true;
        shoppingCellisOn = false;
        tapShake = false;


        shakeTimerCount = 0f;
        seconds = 0;
        moneyCount = 0;

        //Cooldown Values
        wallAnimationCountdown = TimeControler.Instance.timerWallUp() ;
        wallCooldown = 30f;
        DoubleCoinsCooldown = TimeControler.Instance.timerDoubleCoins();
        spinCooldown = TimeControler.Instance.timerSpin();
        ShakeMachineCooldown = TimeControler.Instance.timerShakeCoin();
        DoubleRewardCooldown = TimeControler.Instance.timerDoubleReward();

        timeCountShake = 3;

        spinButton = spinImage.GetComponent<Button>();
        wallButton = wallsImage.GetComponent<Button>();
        doubleCoinsButton = doubleCoinsImage.GetComponent<Button>();
        doubleRewardButton = doubleRewardImage.GetComponent<Button>();
        shakeButton = shakeImage.GetComponent<Button>();

        sources = FindObjectsOfType<AudioSource>();

        InvokeRepeating("Timer", 0, 1);

        if (PlayerPrefs.GetInt("DoubleCoinsEnabled") == 0)
        {
            spawnMoneyScript.doubleCoinsEnabled = false;
            doubleCoinsIsTapped = false;
        }
        else if (PlayerPrefs.GetInt("DoubleCoinsEnabled") == 1)
        {
            spawnMoneyScript.doubleCoinsEnabled = true;
            doubleCoinsIsTapped = true;
        }

        if (PlayerPrefs.GetInt("DoubleRewardEnabled") == 0)
        {
            coinCounterScript.doubleRewardEnabled = false;
            doubleRewardIsTapped = false;
        }
        else if (PlayerPrefs.GetInt("DoubleRewardEnabled") == 1)
        {
            coinCounterScript.doubleRewardEnabled = true;
            doubleRewardIsTapped = true;
        }


        for (int i = 0; i < luckyAnimal.Length; i++)
        {
            if (PlayerPrefs.HasKey("LuckyAnimal") && i == PlayerPrefs.GetInt("LuckyAnimal"))
            {
                luckyAnimal[i].SetActive(true);
            }
            else
            {
                luckyAnimal[i].SetActive(false);
            }
        }
        
        if (audioListener != null)
        {
            if (PlayerPrefs.HasKey("SoundState"))
            {
                if (PlayerPrefs.GetInt("SoundState") == 1)
                {
                    SoundOff.SetActive(false);
                    SoundOn.SetActive(true);
                    soundIsOn = true;
                    AudioManager.instance.SoundState(soundIsOn);
                }
                else
                {
                    SoundOn.SetActive(false);
                    SoundOff.SetActive(true);
                    soundIsOn = false;
                    AudioManager.instance.SoundState(soundIsOn);
                }
            }
            else
            {
                soundIsOn = true;
                PlayerPrefs.SetInt("SoundState", 1);
                AudioManager.instance.SoundState(soundIsOn);
            }
        }else
        {
            Debug.Log("AudioListener is not referenced!");
        }


        if(PlayerPrefs.HasKey("VibrationState"))
        {
            if (PlayerPrefs.GetInt("VibrationState") == 1)
                vibrationIsOn = true;
            else
                vibrationIsOn = false;
        }else
        {
            PlayerPrefs.SetInt("VibrationState",1);
            vibrationIsOn = true;
        }

        CheckVibrationState(vibrationIsOn);

        InvokeRepeating("ChangeLuckyBuutonIcon", 3, 20);

       

        timersSetUp();

    }

    void ChangeLuckyBuutonIcon()
    {
        if (GM.Extra)
        {
            var prizesdb = LuckyPrizesManager.GetComponent<LuckyPrizesManager>().prizeDatabase;
            prizesToShowActualIndex++;

            // reseting 
            if (prizesToShowActualIndex == prizesdb.Length-1)
            {
                prizesToShowActualIndex = 0;
            }
            StartCoroutine(changeSprite());
        }
    }
    
    IEnumerator changeSprite()
    {
        LuckyPrizesYouWonPanel.SetActive(false);
        var prizesdb = LuckyPrizesManager.GetComponent<LuckyPrizesManager>().prizeDatabase;
        luckyPrizesButtonImage.GetComponent<Animation>().Play();
        yield return new WaitForSeconds(0.25f);
        luckyPrizesButtonImage.sprite = prizesdb[prizesToShowActualIndex].sprite;
        LuckyPrizesYouWonPrizeName.GetComponent<Text>().text = prizesdb[prizesToShowActualIndex].name;
        yield return new WaitForSeconds(0.40f);
        LuckyPrizesYouWonPanel.SetActive(true);
    }

    /*-----------------Update-----------------*/
    private void Update()
    {
        if (wallIsActivated)
        {
            WallAnimation();
        }

        if (fastWallIsActivated)
        {
            FastWallAnimation();
        }

        SpinButtonTimer();
        ShakeButtonTimer();
        WallButtonTimer();
        DoubleCoinsButtonTimer();
        DoubleRewardButtonTimer();


        //shop



    }

    #region Fruit or Sweet
    public void Fruit()
    {
        fruitSprite.gameObject.GetComponent<Animator>().SetTrigger("pop");
        //StartCoroutine(showSprite(fruitSprite));
    }
    public void Sweet()
    {
        sweetSprite.SetActive(true);
        sweetSprite.gameObject.GetComponent<Animator>().SetTrigger("pop");
        //StartCoroutine(showSprite(sweetSprite));
    }

    IEnumerator showSprite(GameObject sprite)
    {
        
        Vector3 normalScale = new Vector3(1, 1, 1);
        for (int i = 0; i < 30; i++)
        {
            sprite.transform.localScale = Vector3.Lerp(sprite.transform.localScale, normalScale, 0.8f);

            sprite.GetComponent<Image>().color = Color.Lerp(sprite.GetComponent<Image>().color, new Color(1, 1, 1, 1), 0.1f);
            yield return new WaitForSeconds(0.01f);
        }
        StartCoroutine(desctivateObjectInTime(sprite));
    }

    IEnumerator desctivateObjectInTime(GameObject sprite)
    {
        yield return new WaitForSeconds(2f);
        for (int i = 0; i < 30; i++)
        {
            sprite.transform.localScale = Vector3.Lerp(sprite.transform.localScale, Vector3.zero, 0.05f);
            sprite.GetComponent<Image>().color = Color.Lerp(sprite.GetComponent<Image>().color, new Color(1, 1, 1, 0), 0.1f);
            yield return new WaitForSeconds(0.02f);
        }
        sprite.SetActive(false);
    }

    #endregion

    
    


    #region Shop
    public void OnShopButtonClicked()
    {
        ShopPanel.SetActive(true);
        CoinsYouHave();
        
        AudioManager.instance.Play("PopUp");
        ShoopOpen = true;

        fruitUIUpdate.SetUpFruits();
        //if (ShopPanel.activeInHierarchy)
        setDailyRewardButton();
    }

    public void CloseShopPanel()
    {
        ShopPanel.SetActive(false);
        ShoopOpen = false;
    }

    //Withdraw popup-------------------------------------

    public void WithDrawPopUpDollars()
    {
        if (!withdrawPopUpDollars)
        {
            AudioManager.instance.Play("PopUp");
            WithdrawPopUpDollars.SetActive(true);
            withdrawPopUpDollars = true;
        }
        else
        {
            WithdrawPopUpDollars.SetActive(false);
            withdrawPopUpDollars = false;
        }
    }

    //Withdraw popup-------------------------------------

    public void WithDrawPopUpCoins()
    {
        if (!withdrawPopUpCoins)
        {
            AudioManager.instance.Play("PopUp");
            WithdrawPopUpCoins.SetActive(true);
            withdrawPopUpCoins = true;
        }
        else
        {
            WithdrawPopUpCoins.SetActive(false);
            withdrawPopUpCoins = false;
        }
    }

    //Withdraw popup-------------------------------------

    public void WithDrawPopUpFruits()
    {
        if (!withdrawPopUpFruits)
        {
            AudioManager.instance.Play("PopUp");
            WithdrawPopUpFruits.SetActive(true);
            withdrawPopUpFruits = true;
        }
        else
        {
            WithdrawPopUpFruits.SetActive(false);
            withdrawPopUpFruits = false;
        }
    }

    //About popup-------------------------------------

    public void AboutPopUpButton()
    {
        if (!aboutPopUp)
        {
            AudioManager.instance.Play("PopUp");
            AboutPopUp.SetActive(true);
            aboutPopUp = true;
        }
        else
        {
            AboutPopUp.SetActive(false);
            aboutPopUp = false;
        }
    }

    //Links

    public void TermsConditions()
    {
        Application.OpenURL("http://alexander-ltd.club/terms");
    }

    public void ContactUs()
    {
        Application.OpenURL("http://alexander-ltd.club/");
    }

    //You have count
    void CoinsYouHave()
    {
        YouHaveScoreText.text = coinCounterScript.GetCoinScoreCount().ToString();
        YouHaveDollarsText.text = "$" + coinCounterScript.GetDollarScoreCount().ToString("F2");
        //YouHaveFruitsText.text = coinCounterScript.GetFruitScoreCount().ToString();
    }
    #endregion


    #region Settings
    public void OnSettingsClicked()
    {
        if (!settingsAreOpened)
        {
            AudioManager.instance.Play("PopUp");
            SettingsPanel.SetActive(true);
            settingsAreOpened = true;
        }
        else
        {
            SettingsPanel.SetActive(false);
            settingsAreOpened = false;
        }
    }

    public void SoundOnOff()
    {
        if (soundIsOn)
        {
            SoundOn.SetActive(false);
            SoundOff.SetActive(true);
         //   audioListener.enabled = false;
            PlayerPrefs.SetInt("SoundState",0);
            soundIsOn = false;
            AudioManager.instance.SoundState(soundIsOn);
        }
        else
        {
            SoundOff.SetActive(false);
            SoundOn.SetActive(true);
            //   audioListener.enabled = true;
            PlayerPrefs.SetInt("SoundState", 1);
            soundIsOn = true;
            AudioManager.instance.SoundState(soundIsOn);
        }
    }

    public void VibrationOnOff()
    {
        if (vibrationIsOn)
        {
            VibrationOn.SetActive(false);
            VibrationOff.SetActive(true);

            vibrationIsOn = false;
            Taptic.tapticOn = vibrationIsOn;
            PlayerPrefs.SetInt("VibrationState", 0);
        }
        else
        {
            VibrationOff.SetActive(false);
            VibrationOn.SetActive(true);

            vibrationIsOn = true;
            Taptic.tapticOn = vibrationIsOn;
            PlayerPrefs.SetInt("VibrationState", 1);
        }
    }

    private void CheckVibrationState(bool vibrationState)
    {
        if (vibrationState)
        {
            VibrationOn.SetActive(true);
            VibrationOff.SetActive(false);
            Taptic.tapticOn = vibrationState;
        }
        else
        {
            VibrationOn.SetActive(false);
            VibrationOff.SetActive(true);
            Taptic.tapticOn = vibrationState;
        }
    }
    #endregion

    #region MoneyUI
    public float MoneyUISpawn(float money)
    {
        moneyCount = money;

        moneyPopUpText.text = "+" + money.ToString();
        seconds = 2;
        return money;
    }
    #endregion



    #region Timer
    public void Timer()
    {

        if (seconds > 0)
        {
            seconds -= 1;
        }
        else
        {
            seconds = 0;
        }
    }



    #endregion

    //-------------------- Shake Machine Part ---------------------//

    #region Big shake
  

    //double shake values
    private float ShakeMachineCooldown;
    private float currentTimeShake;

    void ShakeButtonTimer()
    {

        if (shakeIsTapped)
        {

            currentTimeShake += Time.deltaTime;
            shakeSlider.value = currentTimeShake / ShakeMachineCooldown;


            if ((int)((ShakeMachineCooldown - currentTimeShake) % 60) > (int)((ShakeMachineCooldown - currentTimeShake) % 10))
            {
                shakeTimer.text = "0" + (int)((ShakeMachineCooldown - currentTimeShake) / 60) + ":" + (int)((ShakeMachineCooldown - currentTimeShake) % 60);
                shakeImage.color = new Color(shakeImage.color.r, shakeImage.color.g, shakeImage.color.b, 0.5f);
                shakeButton.interactable = false;
                //shakeSlider.interactable = false;
                shakeSliderImage.raycastTarget = false;
            }
            else
            {
                shakeTimer.text = "0" + (int)((ShakeMachineCooldown - currentTimeShake) / 60) + ":0" + (int)((ShakeMachineCooldown - currentTimeShake) % 60);
                shakeImage.color = new Color(shakeImage.color.r, shakeImage.color.g, shakeImage.color.b, 0.5f);
                shakeButton.interactable = false;
                //shakeSlider.interactable = false;
                shakeSliderImage.raycastTarget = false;
            }

            if (currentTimeShake >= ShakeMachineCooldown)
            {
                currentTimeShake = ShakeMachineCooldown;
                shakeSlider.value = currentTimeShake / ShakeMachineCooldown;
                shakeSliderImage.raycastTarget = true;
                //shakeSlider.interactable = true;
                shakeButton.interactable = true;
                shakeIsTapped = false;
                PlayerPrefs.SetInt("ShakeMachineTimerActive", 0);
                shakeTimer.text = "START";

                shakeImage.color = new Color(shakeImage.color.r, shakeImage.color.g, shakeImage.color.b, 1f);


            }
        }
    }

    public void BigShakeButtonPopUp()
    {
        if (!bigShakeButtonPopUp)
        {
            AudioManager.instance.Play("PopUp");
            bigShakeButtonPopUp = true;
            bigShakePopUp.SetActive(true);
        }
        else
        {
            bigShakeButtonPopUp = false;
            bigShakePopUp.SetActive(false);
        }
    }

    public void OnShakeMachineButtonClicked()
    {
        if (GM.NoAds)
        {
            ShakeAdReward();
        }
        else if (AdsEnabled)
        {
            adScript.shakeMachineIsShowing = true;
            adScript.ShowRewardVideo("Shake_REWARD");
            adScript.wasRequested = true;
           // Time.timeScale = 0f;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                ShakeAdReward();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }

    }

    public void ShakeAdReward()
    {

        foreach (var item in spawn)
        {
            spawner = Instantiate(item.bigMonede);
        }

        spawner.transform.position = new Vector3(0.158f, -2.893f, 10.93f);
        shakeButton.interactable = false;
        BigShakeButtonPopUp();
        ShakeTimer();
        //FirebaseAnalytics.LogEvent("Interactables", "Shake", 1);

    }

    public void ShakeTimer()
    {
        shakeIsTapped = true;
        PlayerPrefs.SetInt("ShakeMachineTimerActive", 1);
        currentTimeShake = 0f;
    }

    #endregion

    //-------------------- Rise Walls Part ---------------------//
    #region Wall
    //wall timer values
    private float wallCooldown;
    private float currentTimeWall;

    void WallButtonTimer()
    {
        if (wallIsTapped)
        {
            currentTimeWall += Time.deltaTime;
            wallSlider.value = currentTimeWall / wallCooldown;
            if ((int)((wallCooldown - currentTimeWall) % 60) > (int)((wallCooldown - currentTimeWall) % 10))
            {
                wallTimer.text = "0" + (int)((wallCooldown - currentTimeWall) / 60) + ":" + (int)((wallCooldown - currentTimeWall) % 60);
                wallsImage.color = new Color(wallsImage.color.r, wallsImage.color.g, wallsImage.color.b, 0.5f);
                wallSliderImage.raycastTarget = false;
                wallButton.interactable = false;
                //wallSlider.interactable = false;
            }
            else
            {
                wallTimer.text = "0" + (int)((wallCooldown - currentTimeWall) / 60) + ":0" + (int)((wallCooldown - currentTimeWall) % 60);
                wallsImage.color = new Color(wallsImage.color.r, wallsImage.color.g, wallsImage.color.b, 0.5f);
                wallSliderImage.raycastTarget = false;
                wallButton.interactable = false;
                //wallSlider.interactable = false;
            }

            if (currentTimeWall >= wallCooldown)
            {
                currentTimeWall = wallCooldown;
                wallSlider.value = currentTimeWall / wallCooldown;
                wallSliderImage.raycastTarget = true;
                //wallSlider.interactable = true;
                wallIsTapped = false;
                PlayerPrefs.SetInt("RiseWallsTimerActive", 0);
                // wallIsOnTheTop = false;
                AudioManager.instance.Play("WallSound");

                wallTimer.text = "START";
                wallsImage.color = new Color(wallsImage.color.r, wallsImage.color.g, wallsImage.color.b, 1f);
                wallButton.interactable = true;
            }
        }
    }

    public void RiseWallsButtonPopUp()
    {
        if (!riseWallsButtonPopUp)
        {
            AudioManager.instance.Play("PopUp");
            riseWallsButtonPopUp = true;
            riseWallsPopUp.SetActive(true);
        }
        else
        {
            riseWallsButtonPopUp = false;
            riseWallsPopUp.SetActive(false);
        }
    }
    //Button
    public void OnWallButtonClicked()
    {
        if (GM.NoAds)
        {
            WallAdReward();
        }
        else if (AdsEnabled)
        {
            adScript.riseWallsIsShowing = true;
            adScript.ShowRewardVideo("Walls_REWARD");
            adScript.wasRequested = true;
            // Time.timeScale = 0f;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                WallAdReward();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }

    }

    public void WallAdReward()
    {
        wallIsTapped = true;
        currentWallAnimationTimer = 0;
        currentTimeWall = 0;
        PlayerPrefs.SetInt("RiseWallsTimerActive", 1);
        wallsImage.color = new Color(wallsImage.color.r, wallsImage.color.g, wallsImage.color.b, 0.5f);
        // StartCoroutine("WallUpCoroutine");
        wallIsActivated = true;
        PlayerPrefs.SetInt("WallAnimationTimerActive", 1);

        ButtonCloseTab(riseWallsPopUp);
        //RiseWallsButtonPopUp();

        AudioManager.instance.Play("WallSound");
        //FirebaseAnalytics.LogEvent("Interactables", "Wall", 1);

        activateActiveEffect(3);
    }

    /*
    IEnumerator WallUpCoroutine()
    {
        wallIsActivated = true; // Animation starts and rises the walls

        yield return new WaitForSeconds(wallAnimationCountdown);
        wallIsActivated = true; // Animation starts and lowers the walls
        yield return null;
    }*/

    void WallAnimation()
    {
        currentWallAnimationTimer += Time.deltaTime;

        if (!wallIsOnTheTop)    //The wall is down
        {
            lerpTimer += lerpSpeed * Time.deltaTime;
            WallObject.transform.position = Vector3.Lerp(startPos, endPos, lerpTimer);
            if (lerpTimer >= 1f && !wallIsOnTheTop)
            {
                wallIsOnTheTop = true;
                PlayerPrefs.SetInt("WallIsTop", 1);
                lerpTimer = 0f;
            }

        }
        if (currentWallAnimationTimer >= wallAnimationCountdown)
        {
            lerpTimer += lerpSpeed * Time.deltaTime;
            WallObject.transform.position = Vector3.Lerp(endPos, startPos, lerpTimer);
            if (lerpTimer >= 1f && wallIsOnTheTop)
            {
                wallIsOnTheTop = false;
                PlayerPrefs.SetInt("WallIsTop", 0);
                lerpTimer = 0f;
                wallIsActivated = false;
                PlayerPrefs.SetInt("WallAnimationTimerActive", 0);
                currentWallAnimationTimer = 0;
            }
        }
    }

    public void ActivateFastWall()
    {
        currentWallAnimationTimer = 0;
        lerpTimer = 0;
        fastWallIsActivated = true;
    }

    void FastWallAnimation()
    {
        currentWallAnimationTimer += Time.deltaTime;

        if (!wallIsOnTheTop)    //The wall is down
        {
            lerpTimer += lerpSpeed * Time.deltaTime;
            WallObject.transform.position = Vector3.Lerp(startPos, endPos, lerpTimer);
            if (lerpTimer >= 1f && !wallIsOnTheTop)
            {
                wallIsOnTheTop = true;
                lerpTimer = 0f;
            }

        }
        if (currentWallAnimationTimer >= 20f)
        {
            lerpTimer += lerpSpeed * Time.deltaTime;
            WallObject.transform.position = Vector3.Lerp(endPos, startPos, lerpTimer);
            if (lerpTimer >= 1f && wallIsOnTheTop)
            {
                wallIsOnTheTop = false;
                lerpTimer = 0f;
                fastWallIsActivated = false;
                currentWallAnimationTimer = 0;
            }
        }
    }

    #endregion

    //-------------------- Double Coins Part ---------------------//
    #region DoubleCoins
    //double coins values
    private float DoubleCoinsCooldown;
    private float currentTimeDoubleCoins;

    void DoubleCoinsButtonTimer()
    {
        if (doubleCoinsIsTapped)
        {
            currentTimeDoubleCoins += Time.deltaTime;
            doubleCoinsSlider.value = currentTimeDoubleCoins / DoubleCoinsCooldown;


            if ((int)((DoubleCoinsCooldown - currentTimeDoubleCoins) % 60) > (int)((DoubleCoinsCooldown - currentTimeDoubleCoins) % 10))
            {
                DoubleCoinsText.text = "0" + (int)((DoubleCoinsCooldown - currentTimeDoubleCoins) / 60) + ":" + (int)((DoubleCoinsCooldown - currentTimeDoubleCoins) % 60);
                doubleCoinsImage.color = new Color(doubleCoinsImage.color.r, doubleCoinsImage.color.g, doubleCoinsImage.color.b, 0.5f);
                doubleCoinsSliderImage.raycastTarget = false;
                doubleCoinsButton.interactable = false;
                //doubleCoinsSlider.interactable = false;
            }
            else
            {
                DoubleCoinsText.text = "0" + (int)((DoubleCoinsCooldown - currentTimeDoubleCoins) / 60) + ":0" + (int)((DoubleCoinsCooldown - currentTimeDoubleCoins) % 60);
                doubleCoinsImage.color = new Color(doubleCoinsImage.color.r, doubleCoinsImage.color.g, doubleCoinsImage.color.b, 0.5f);
                doubleCoinsSliderImage.raycastTarget = false;
                doubleCoinsButton.interactable = false;
                //doubleCoinsSlider.interactable = false;
            }

            if (currentTimeDoubleCoins >= DoubleCoinsCooldown)
            {
                spawnMoneyScript.doubleCoinsEnabled = false;
                PlayerPrefs.SetInt("DoubleCoinsEnabled", 0);
                currentTimeDoubleCoins = DoubleCoinsCooldown;
                doubleCoinsSlider.value = currentTimeDoubleCoins / DoubleCoinsCooldown;
                doubleCoinsSliderImage.raycastTarget = true;
                doubleCoinsButton.interactable = true;
                // doubleCoinsSlider.interactable = true;
                doubleCoinsIsTapped = false;
                PlayerPrefs.SetInt("DoubleCoinsTimerActive", 0);
                DoubleCoinsText.text = "START";
                doubleCoinsImage.color = new Color(doubleCoinsImage.color.r, doubleCoinsImage.color.g, doubleCoinsImage.color.b, 1f);

            }
        }
    }

    public void DoubleCoinsButtonPopUp()
    {
        if (!doubleCoinsButtonPopUp)
        {
            AudioManager.instance.Play("PopUp");
            doubleCoinsButtonPopUp = true;
            doubleCoinsPopUp.SetActive(true);
        }
        else
        {
            doubleCoinsButtonPopUp = false;
            doubleCoinsPopUp.SetActive(false);
        }
    }

    public void OnDoubleCoinsClicked()
    {
        if (GM.NoAds)
        {
            DoubleCoinsAdReward();
        }
        else if (AdsEnabled)
        {
            adScript.doubleCoinsIsShowing = true;
            adScript.ShowRewardVideo("DoubleCoins_REWARD");
            adScript.wasRequested = true;
            // Time.timeScale = 0f;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                DoubleCoinsAdReward();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }
    }

    public void DoubleCoinsAdReward()
    {
        doubleCoinsIsTapped = true;
        spawnMoneyScript.doubleCoinsEnabled = true;
        PlayerPrefs.SetInt("DoubleCoinsEnabled", 1);
        PlayerPrefs.SetInt("DoubleCoinsTimerActive", 1);
        currentTimeDoubleCoins = 0;

        ButtonCloseTab(doubleCoinsPopUp);
        //FirebaseAnalytics.LogEvent("Interactables", "DoubleCoins", 1);
        //DoubleCoinsButtonPopUp();

        activateActiveEffect(4);
    }

    #endregion


    //-------------------- Double Reward Part ---------------------//
    #region DoubleReward
    //double reward values
    private float DoubleRewardCooldown;
    private float currentTimeDoubleReward;

    void DoubleRewardButtonTimer()
    {
        if (doubleRewardIsTapped)
        {
            currentTimeDoubleReward += Time.deltaTime;
            doubleRewardSlider.value = currentTimeDoubleReward / DoubleRewardCooldown;

            if ((int)((DoubleRewardCooldown - currentTimeDoubleReward) % 60) > (int)((DoubleRewardCooldown - currentTimeDoubleReward) % 10))
            {
                DoubleRewardText.text = "0" + (int)((DoubleRewardCooldown - currentTimeDoubleReward) / 60) + ":" + (int)((DoubleRewardCooldown - currentTimeDoubleReward) % 60);
                doubleRewardImage.color = new Color(doubleRewardImage.color.r, doubleRewardImage.color.g, doubleRewardImage.color.b, 0.5f);
                doubleRewardSliderImage.raycastTarget = false;
                doubleRewardButton.interactable = false;
                //doubleRewardSlider.interactable = false;
            }
            else
            {
                DoubleRewardText.text = "0" + (int)((DoubleRewardCooldown - currentTimeDoubleReward) / 60) + ":0" + (int)((DoubleRewardCooldown - currentTimeDoubleReward) % 60);
                doubleRewardImage.color = new Color(doubleRewardImage.color.r, doubleRewardImage.color.g, doubleRewardImage.color.b, 0.5f);
                doubleRewardSliderImage.raycastTarget = false;
                doubleRewardButton.interactable = false;
                //doubleRewardSlider.interactable = false;
            }

            if (currentTimeDoubleReward >= DoubleRewardCooldown)
            {
                currentTimeDoubleReward = DoubleRewardCooldown;
                doubleRewardSlider.value = currentTimeDoubleReward / DoubleRewardCooldown;
                doubleRewardSliderImage.raycastTarget = true;
                doubleRewardButton.interactable = true;
                //doubleRewardSlider.interactable = true;
                doubleRewardIsTapped = false;
                coinCounterScript.doubleRewardEnabled = false;
                PlayerPrefs.SetInt("DoubleRewardEnabled", 0);
                PlayerPrefs.SetInt("DoubleRewardTimerActive", 0);
                DoubleRewardText.text = "START";
                doubleRewardImage.color = new Color(doubleRewardImage.color.r, doubleRewardImage.color.g, doubleRewardImage.color.b, 1f);

            }
        }
    }

    public void DoubleRewardButtonPopUp()
    {
        if (!doubleRewardButtonPopUp)
        {
            AudioManager.instance.Play("PopUp");
            doubleRewardButtonPopUp = true;
            doubleRewardPopUp.SetActive(true);
        }
        else
        {
            doubleRewardButtonPopUp = false;
            doubleRewardPopUp.SetActive(false);
        }
    }

    public void OnDoubleRewardClicked()
    {
        if (GM.NoAds)
        {
            DoubleRewardAdReward();
        }
        else if (AdsEnabled)
        {
            adScript.doubleRewardIsShowing = true;
            adScript.ShowRewardVideo("DoubleReward_REWARD");
            adScript.wasRequested = true;
        }
        else
        {

            if (debugMNG.debugMode && debugMNG.adsActive)
                DoubleRewardAdReward();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;

            
        }
    }

    public void DoubleRewardAdReward()
    {
        doubleRewardIsTapped = true;
        coinCounterScript.doubleRewardEnabled = true;
        PlayerPrefs.SetInt("DoubleRewardEnabled", 1);
        currentTimeDoubleReward = 0;
        PlayerPrefs.SetInt("DoubleRewardTimerActive", 1);

        ButtonCloseTab(doubleRewardPopUp);
        //FirebaseAnalytics.LogEvent("Interactables", "DoubleReward", 1);
        //DoubleRewardButtonPopUp();

        activateActiveEffect(5);
    }

    #endregion


    //-------------------- Spin Part ---------------------//
    #region Spin
    //spin timer values
    private float spinCooldown;
    private float currentTimeSpin;

    void SpinButtonTimer()
    {
        if (spinIsTapped)
        {
            currentTimeSpin += Time.deltaTime;
            spinSlider.value = currentTimeSpin / spinCooldown;

            if ((int)((spinCooldown - currentTimeSpin) % 60) > (int)((spinCooldown - currentTimeSpin) % 10))
            {
                SpinText.text = "0" + (int)((spinCooldown - currentTimeSpin) / 60) + ":" + (int)((spinCooldown - currentTimeSpin) % 60);
                spinSliderImage.raycastTarget = false;
                spinButton.interactable = false;
                // spinSlider.interactable = false;
            }
            else
            {
                SpinText.text = "0" + (int)((spinCooldown - currentTimeSpin) / 60) + ":0" + (int)((spinCooldown - currentTimeSpin) % 60);
                spinSliderImage.raycastTarget = false;
                spinButton.interactable = false;
                //spinSlider.interactable = false;
            }

            if (currentTimeSpin >= spinCooldown)
            {
                currentTimeSpin = spinCooldown;
                spinSlider.value = currentTimeSpin / spinCooldown;
                spinSliderImage.raycastTarget = true;
                spinButton.interactable = true;
                //spinSlider.interactable = true;
                spinIsTapped = false;
                PlayerPrefs.SetInt("SpinTimerActive", 0);
                SpinText.text = "SPIN";
                spinImage.color = new Color(spinImage.color.r, spinImage.color.g, spinImage.color.b, 1f);

            }
        }
    }
    public void SpinButtonOpenPopUp()
    {
        if (!spinButtonPopUp)
        {
            AudioManager.instance.Play("PopUp");
            spinButtonPopUp = true;
            SpinPopUp.SetActive(true);
        }
        else
        {
            spinButtonPopUp = false;
            SpinPopUp.SetActive(false);
        }

    }

    public void OnSpinButtonClicked()
    {
        if (!PlayerPrefs.HasKey("FirstSpins"))
        {
            PlayerPrefs.SetInt("FirstSpins", 0);
        }

        if(PlayerPrefs.GetInt("FirstSpins") == 0)
        {
            SpinAdReward();
        }else if(GM.NoAds)
        {
            SpinAdReward();
            Debug.Log("Spin withoud ads!");
        }
        /*else if (AdsEnabled)
        {
            Debug.Log("Spin with ads :(((");
            adScript.spinIsShowing = true;
            adScript.ShowRewardVideo("Spin_REWARD");
            adScript.wasRequested = true;
            
        }*/
        else
        {
            if (coinCounterScript.GetDollarScoreCount() >= 1f)
            {
                if (debugMNG.debugMode && debugMNG.adsActive)
                {
                    ReceiveTokens(1f);
                    SpinAdReward();
                }
                else if (!debugMNG.debugMode || !debugMNG.adsActive)
                    return;
            }
            else
            {
                notEnoughPanel.SetActive(true);
            }
        }
    }

    private void ReceiveTokens(float price)
    {
        float dollarsGained = coinCounterScript.GetDollarScoreCount();
        dollarsGained -= price;
        coinCounterScript.Dollars = dollarsGained;
        Debug.Log("Dollars " + dollarsGained + "Price " + buyDollarPrice);
        PlayerPrefs.SetFloat("DollarScoreCount", dollarsGained);
        coinCounterScript.dollarScoreText.text = dollarsGained.ToString("F2") + " $BPL";
    }

    public void SpinAdReward()
    {
        //slotMachineScript.StartCoroutine("PulledHandle");
        spinWheelScript.TurnWheels();
        spinImage.color = new Color(spinImage.color.r, spinImage.color.g, spinImage.color.b, 0.5f);
        spinButton.interactable = false;

        // the same but different
        //SpinButtonOpenPopUp();
        ButtonCloseTab(SpinPopUp);

        SpinTimer();
        //FirebaseAnalytics.LogEvent("Interactables", "Spin", 1);
    }

    public void SpinTimer()
    {
        spinIsTapped = true;
        PlayerPrefs.SetInt("SpinTimerActive", 1);
        currentTimeSpin = 0f;
    }
    #endregion





    //------------- Buying Part ---------------//

    /*
    public void CheckCoinShopBalance(int price, string animalTag)
    {
        int coinsGained = coinCounterScript.GetCoinScoreCount();
        boughtAnimalTag = animalTag;
      

    }
    */


    public void CheckShopBalance(string animalTag)
    {
        boughtAnimalTag = animalTag;
        int coinsGained = coinCounterScript.GetCoinScoreCount();
        float dollarsGained = coinCounterScript.GetDollarScoreCount();
     
        switch (boughtAnimalTag)
        {
            case "Chick":
                buyCoinPrice = 50000;
                if (coinsGained >= buyCoinPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            case "Duck":
                buyCoinPrice = 70000;
                if (coinsGained >= buyCoinPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            case "Hen":
                buyCoinPrice = 150000;
                if (coinsGained >= buyCoinPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            case "Sheep":
                buyDollarPrice = 2000f;
                if (dollarsGained >= buyDollarPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            case "Donkey":
                buyDollarPrice = 3500f;
                if (dollarsGained >= buyDollarPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            case "Cow":
                buyDollarPrice = 6000f;
                if (dollarsGained >= buyDollarPrice)
                    confirmationBuyPanel.SetActive(true);
                else
                    notEnoughBuyPanel.SetActive(true);
                break;
            default:
                break;
        }
        AudioManager.instance.Play("PopUp");

    }

    public void ConfirmBuy()
    {
        switch (boughtAnimalTag)
        {
            case "Chick":
                BuyLuckyAnimalWithCoins();
                PlayerPrefs.SetInt("LuckyAnimal", 0);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckychicken");
                break;
            case "Duck":
                BuyLuckyAnimalWithCoins();
                PlayerPrefs.SetInt("LuckyAnimal", 1);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckyduck");
                break;
            case "Hen":
                BuyLuckyAnimalWithCoins();
                PlayerPrefs.SetInt("LuckyAnimal", 2);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckyhen");
                break;
            case "Sheep":
                BuyLuckyAnimalWithDollars();
                PlayerPrefs.SetInt("LuckyAnimal", 3);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckysheep");
                break;
            case "Donkey":
                BuyLuckyAnimalWithDollars();
                PlayerPrefs.SetInt("LuckyAnimal", 4);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckydonkey");
                break;
            case "Cow":
                BuyLuckyAnimalWithDollars();
                PlayerPrefs.SetInt("LuckyAnimal", 5);
                FirebaseAnalytic.Instance.sendEventFirebaseServer("shop_purchased_luckycow");
                break;
            default:
                break;
        }
    }

    // Buy the animal directly from the pop up
    public void BuyAnimalFast(string animalTag)
    {
        boughtAnimalTag = animalTag;
      //  int coinsGained = coinCounterScript.GetCoinScoreCount();
      //  float dollarsGained = coinCounterScript.GetDollarScoreCount();

        switch (boughtAnimalTag)
        {
            case "Chick":
                buyCoinPrice = 50000;
                BuyLuckyAnimalWithCoins();
                break;
            case "Duck":
                buyCoinPrice = 70000;
                BuyLuckyAnimalWithCoins();
                break;
            case "Hen":
                buyCoinPrice = 150000;
                BuyLuckyAnimalWithCoins();
                break;
            case "Sheep":
                buyDollarPrice = 2000f;
                BuyLuckyAnimalWithDollars();
                break;
            case "Donkey":
                buyDollarPrice = 3500f;
                BuyLuckyAnimalWithDollars();
                break;
            case "Cow":
                buyDollarPrice = 6000f;
                BuyLuckyAnimalWithDollars();
                break;
            default:
                break;
        }
        AudioManager.instance.Play("PopUp");
    }




    private void BuyLuckyAnimalWithCoins()
    {
        int coinsGained = coinCounterScript.GetCoinScoreCount();
        coinsGained -= buyCoinPrice;
        coinCounterScript.Coins = coinsGained;
        PlayerPrefs.SetInt("CoinScoreCount", coinsGained);
        // coinCounterScript.UpdateCoinScore(coinsGained);
        coinCounterScript.coinScoreText.text = coinsGained.ToString();
        // Debug.Log(coinsGained);

        for (int i = 0; i < luckyAnimal.Length; i++)
        {
            if (luckyAnimal[i].tag != boughtAnimalTag)
            {
                luckyAnimal[i].SetActive(false);
            }
            else
            {
                luckyAnimal[i].SetActive(true);
            }
        }

        if (confirmationBuyPanel.activeInHierarchy)
            CloseConfirmationPanel();
    }


    private void BuyLuckyAnimalWithDollars()
    {
        float dollarsGained = coinCounterScript.GetDollarScoreCount();
        dollarsGained -= buyDollarPrice;
        coinCounterScript.Dollars = dollarsGained;
        Debug.Log("Dollars " + dollarsGained + "Price " + buyDollarPrice);
        PlayerPrefs.SetFloat("DollarScoreCount", dollarsGained);
        coinCounterScript.dollarScoreText.text = dollarsGained.ToString("F2") + " $BPL";
       // coinCounterScript.UpdateDollarScore(dollarsGained);
        // Debug.Log(dollarsGained);

        for (int i = 0; i < luckyAnimal.Length; i++)
        {
            if (luckyAnimal[i].tag != boughtAnimalTag)
            {
                luckyAnimal[i].SetActive(false);
            }
            else
            {
                luckyAnimal[i].SetActive(true);
            }
        }
        if(confirmationBuyPanel.activeInHierarchy)
            CloseConfirmationPanel();
    }







    public void CloseConfirmationPanel()
    {
        confirmationBuyPanel.SetActive(false);
    }

    public void CloseNotEnoughPanel()
    {
        notEnoughBuyPanel.SetActive(false);
    }



    //------------- Saving Part ---------------//
    public void SaveTimeValues()
    {

        PlayerPrefs.SetFloat("DoubleCoinsTimer", currentTimeDoubleCoins);
        PlayerPrefs.SetFloat("RiseWallsTimer", currentTimeWall);
        PlayerPrefs.SetFloat("SpinTimer", currentTimeSpin);
        PlayerPrefs.SetFloat("ShakeMachineTimer", currentTimeShake);
        PlayerPrefs.SetFloat("DoubleRewardTimer", currentTimeDoubleReward);
        PlayerPrefs.SetFloat("WallAnimationTimer", currentWallAnimationTimer);
        PlayerPrefs.SetInt("chestOnBoard", (chestOnBoard) ? 1 : 0);

    }
    public void GetAndUpdateTimeValues()
    {
        // Double Coins get and update values
        if (PlayerPrefs.HasKey("DoubleCoinsTimer"))
        {
            currentTimeDoubleCoins = PlayerPrefs.GetFloat("DoubleCoinsTimer");
            if (PlayerPrefs.HasKey("DoubleCoinsTimerActive"))
            {
                if (PlayerPrefs.GetInt("DoubleCoinsTimerActive") == 1)
                    doubleCoinsIsTapped = true;
                else
                    doubleCoinsIsTapped = false;
            }
            else
            {
                PlayerPrefs.SetInt("DoubleCoinsTimerActive", 0);
                doubleCoinsIsTapped = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("DoubleCoinsTimer", 0);
            currentTimeDoubleCoins = 0;
        }

        // Rise Walls get and update values
        if (PlayerPrefs.HasKey("RiseWallsTimer"))
        {
            currentTimeWall = PlayerPrefs.GetFloat("RiseWallsTimer");
            if (PlayerPrefs.HasKey("RiseWallsTimerActive"))
            {
                if (PlayerPrefs.GetInt("RiseWallsTimerActive") == 1)
                    wallIsTapped = true;
                else
                    wallIsTapped = false;
            }
            else
            {
                PlayerPrefs.SetInt("RiseWallsTimerActive", 0);
                doubleCoinsIsTapped = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("RiseWallsTimer", 0);
            currentTimeWall = 0;
        }

        // Spin get and update values
        if (PlayerPrefs.HasKey("SpinTimer"))
        {
            currentTimeSpin = PlayerPrefs.GetFloat("SpinTimer");
            if (PlayerPrefs.HasKey("SpinTimerActive"))
            {
                if (PlayerPrefs.GetInt("SpinTimerActive") == 1)
                    spinIsTapped = true;
                else
                    spinIsTapped = false;
            }
            else
            {
                PlayerPrefs.SetInt("SpinTimerActive", 0);
                spinIsTapped = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("SpinTimer", 0);
            currentTimeSpin = 0;
        }

        // Shake Machine get and update values
        if (PlayerPrefs.HasKey("ShakeMachineTimer"))
        {
            currentTimeShake = PlayerPrefs.GetFloat("ShakeMachineTimer");
            if (PlayerPrefs.HasKey("ShakeMachineTimerActive"))
            {
                if (PlayerPrefs.GetInt("ShakeMachineTimerActive") == 1)
                    shakeIsTapped = true;
                else
                    shakeIsTapped = false;
            }
            else
            {
                PlayerPrefs.SetInt("ShakeMachineTimerActive", 0);
                shakeIsTapped = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("ShakeMachineTimer", 0);
            currentTimeShake = 0;
        }

        // Double Rewards get and update values
        if (PlayerPrefs.HasKey("DoubleRewardTimer"))
        {
            currentTimeDoubleReward = PlayerPrefs.GetFloat("DoubleRewardTimer");
            if (PlayerPrefs.HasKey("DoubleRewardTimerActive"))
            {
                if (PlayerPrefs.GetInt("DoubleRewardTimerActive") == 1)
                    doubleRewardIsTapped = true;
                else
                    doubleRewardIsTapped = false;
            }
            else
            {
                PlayerPrefs.SetInt("DoubleRewardTimerActive", 0);
                doubleRewardIsTapped = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("DoubleRewardTimer", 0);
            currentTimeDoubleReward = 0;
        }

        //Wall animation timer
        if (PlayerPrefs.HasKey("WallAnimationTimer"))
        {
            currentWallAnimationTimer = PlayerPrefs.GetFloat("WallAnimationTimer");
            if (PlayerPrefs.HasKey("WallAnimationTimerActive"))
            {
                if (PlayerPrefs.GetInt("WallAnimationTimerActive") == 1)
                {
                    wallIsActivated = true;
                    if (PlayerPrefs.HasKey("WallIsTop"))
                    {
                        if (PlayerPrefs.GetInt("WallIsTop") == 1)
                        {
                            wallIsOnTheTop = true;
                            WallObject.transform.position = endPos;
                        }
                        else
                        {
                            wallIsOnTheTop = false;
                            WallObject.transform.position = startPos;
                        }
                    }
                    else
                    {
                        PlayerPrefs.SetInt("WallIsTop", 0);
                        wallIsOnTheTop = false;
                        WallObject.transform.position = startPos;
                    }
                }
                else
                {
                    wallIsActivated = false;
                }

            }
            else
            {
                PlayerPrefs.SetInt("WallAnimationTimerActive", 0);
                wallIsActivated = false;
            }
        }
        else
        {
            PlayerPrefs.SetFloat("WallAnimationTimer", 0);
            currentWallAnimationTimer = 0;
        }

    }




    private void OnApplicationQuit()
    {
        // Debug.Log("Saving data...");
        SaveTimeValues();
    }

    public void ButtonOpenTab(GameObject tab)
    {
        tab.SetActive(true);
        //clickPanel.SetActive(true);
        AudioManager.instance.Play("PopUp");
    }

    public void ButtonCloseTab(GameObject tab)
    {
        tab.SetActive(false);
        //clickPanel.SetActive(false);
    }

    public void ButtonTriggerTab(GameObject tab)
    {
        tab.SetActive(!tab.activeSelf);
    }

    #region Sping Got One Wrong



    public void AllRolssWrongPOPUPActivate()
    {
        StartCoroutine(wait2SecondForallWorongPopUp());

    }

    IEnumerator wait2SecondForallWorongPopUp()
    {
        yield return new WaitForSeconds(2);
        AudioManager.instance.Play("PopUp");
        AllRollsWrongPopUp.SetActive(true);
    }

    public void watchAddToSpinAnotherTime()
    {
        if (AdsEnabled)
        {
            adScript.unsuccesfulSpin = true;
            adScript.ShowRewardVideo("UnsuccesfulSpin_REWARD");
            adScript.wasRequested = true;
            //FirebaseAnalytics.LogEvent("Interactables", "UnsuccesfulSpin", 1);
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
            {
                spinWheelScript.TurnWheels();
                closeAllRollWrongPopUp();
            }
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
        }
        
    }

    public void closeAllRollWrongPopUp()
    {
        AllRollsWrongPopUp.SetActive(false);
    }

    #endregion Sping Got One Wrong

    #region bonus
    // variable declared up
    //public GameObject AutoClickerButton;
    //public GameObject BombBigButton;
    //public GameObject CoinToCachButton;

    private int bonusOffert;
    private Vector3 positionOnScren = new Vector3(-100, -500,0);
    private Vector3 positionOusideScren = new Vector3(500, -500, 0);
    private RectTransform slidingRectTransofrm;

    Coroutine deactivateBonusSlider;

    Coroutine showABonus;

    IEnumerator ShowABonus()
    {
        float time = TimeControler.Instance.bonusOffertTimer();

        yield return new WaitForSeconds(time);

        int offertID = TimeControler.Instance.selectOneOfTheOfferts();

        selectAndActivateBonusOffert(offertID);
    }

    public void selectAndActivateBonusOffert(int offertID)
    {
        //Debug.Log(offertID);
         bonusOffert = offertID;

        if (!debugMNG.debugMode){
            // cheange the bonus to fit our needs
            if (bonusOffert == 3)
            {
                if (TimeControler.Instance.CEANCE() > TimeControler.Instance.getGreenCachProbability())
                {
                    bonusOffert = 2;
                }
            }
            else if (spawnMoneyScript.autoclicker)
            {
                bonusOffert = 2;
            }
            if (bonusOffert == 4 && chestOnBoard)
            {
                bonusOffert = 2;
            }
        }
        //Debug.Log(chestOnBoard);

        if(deactivateBonusSlider != null)
        {
            StopCoroutine(deactivateBonusSlider);
            PanelAutoClicker.SetActive(false);
            PanelBigBomb.SetActive(false);
            PanelCoinToCach.SetActive(false);
            PanelChest.SetActive(false);

        }


        // Sliding properties
        slidingRectTransofrm = ButtonBonussOffert.GetComponent<RectTransform>();
        slidingRectTransofrm.anchoredPosition = positionOusideScren;
        StartCoroutine(SlideAnimationCourutine());

        ButtonBonussOffert.SetActive(true);


//        Debug.Log(offertID);
        switch (bonusOffert)
        {
            case 1:
                PanelAutoClicker.SetActive(true);
                break;
            case 2:
                PanelBigBomb.SetActive(true);
                break;
            case 3:
                PanelCoinToCach.SetActive(true);
                break;
            case 4:
                PanelChest.SetActive(true);
                break;
            default:
                break;
        }

        deactivateBonusSlider = StartCoroutine(deactivateBonusUi());

    }

    IEnumerator deactivateBonusUi()
    {
        pogressBonus.fillAmount = 1;
        float time;
        if (!debugMNG.debugMode)
            time = TimeControler.Instance.bonusOffertsOnScren();
        else
            time = 5;

        float startVar = time;

        while (time >= 0.01f)
        {
            float dTime = Time.deltaTime;
            yield return new WaitForSeconds(dTime);
            time = time - dTime;
            pogressBonus.fillAmount = (time / startVar);

        }


        StartCoroutine(SlideAnimationBackCourutine());

        if (showABonus != null)
        {
            stopCorutine(showABonus);
        }
        showABonus = StartCoroutine(ShowABonus());
    }

    IEnumerator SlideAnimationBackCourutine()
    {
        for (int i = 0; i < 30; i++)
        {
            yield return new WaitForSeconds(0.01f);
            slidingRectTransofrm.anchoredPosition = Vector3.Lerp(slidingRectTransofrm.anchoredPosition, positionOusideScren, 0.10f);

        }
        PanelAutoClicker.SetActive(false);
        PanelBigBomb.SetActive(false);
        PanelCoinToCach.SetActive(false);
        PanelChest.SetActive(false);
    }

    IEnumerator SlideAnimationCourutine()
    {
        for (int i = 0; i < 30; i++)
        {
            yield return new WaitForSeconds(0.01f);
            slidingRectTransofrm.anchoredPosition = Vector3.Lerp(slidingRectTransofrm.anchoredPosition, positionOnScren, 0.20f);

        }
        confetiBonus.gameObject.transform.position = confettiSpawnPosition.transform.position;
        confetiBonus.Play();
        AudioManager.instance.Play("PopSound");

        yield return new WaitForSeconds(0.1f);
        Taptic.Success();
    }


    public void ButtonOnClickOffert()
    {
        switch (bonusOffert)
        {
            case 1:
                AutoClickerPopUp.SetActive(true);
                break;
            case 2:
                BigBombPopUp.SetActive(true);
                break;
            case 3:
                CoinToCachPopUp.SetActive(true);
                break;
            case 4:
                DropChestPopUp.SetActive(true);
                break;
            default:
                break;
        }
    }

    public void ResetBonusButtons()
    {

        switch (bonusOffert)
        {
            case 1:
                PanelAutoClicker.SetActive(false);
                break;
            case 2:
                PanelBigBomb.SetActive(false);
                break;
            case 3:
                PanelCoinToCach.SetActive(false);
                break;
            case 4:
                PanelChest.SetActive(false);
                break;
            default:
                break;
        }

        if (deactivateBonusSlider != null)
        {
            stopCorutine(deactivateBonusSlider);
        }
            
        StartCoroutine(SlideAnimationBackCourutine());

        if (showABonus != null)
        {
            stopCorutine(showABonus);
        }
        showABonus = StartCoroutine(ShowABonus());
    }

    
    // autoclicker

    public void watchAddAutoClicker()
    {
        if (AdsEnabled)
        {
            adScript.autoClicker = true;
            adScript.ShowRewardVideo("AutoClicker_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            //ResetBonusButtons();
            if (debugMNG.debugMode && debugMNG.adsActive)
                spawnMoneyScript.autoclickerActivating();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
        }

        ResetBonusButtons();
    }

    public void closeAutoClickerPopUp()
    {
        AutoClickerPopUp.SetActive(false);
    }

    // BigBomb

    public void watchAddBigBomb()
    {
        
        if (AdsEnabled)
        {
            adScript.bigBomb = true;
            adScript.ShowRewardVideo("BigBomb_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                GM.coinDataScript.coinBurn();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            //ResetBonusButtons();
        }
        ResetBonusButtons();
    }

    public void closeBigBombPopUp()
    {
        BigBombPopUp.SetActive(false);
    }

    // Coin To Cach

    public void watchAddCoinToCach()
    {
        if (AdsEnabled)
        {
            adScript.coinToCach = true;
            adScript.ShowRewardVideo("CoinToCach_REWARD");
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                spawnMoneyScript.CoinToCachBonus();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
        }
        ResetBonusButtons();
    }

    

    public void closeCoinToCachPopUp()
    {
        CoinToCachPopUp.SetActive(false);
    }

    // Chest

    public void watchAddChest()
    {
        if (AdsEnabled)
        {
            adScript.spawnChest = true;
            adScript.ShowRewardVideo("SpawnChest_REWARD");
            adScript.wasRequested = true;
        }
    
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                spawnMoneyScript.spawnChest();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }
        ResetBonusButtons();
    }

    public void closeDropChestPopUp()
    {
        chestOnBoard = true;
        DropChestPopUp.SetActive(false);
    }

    // Active effect


    public void activateActiveEffect(int numberOfBonus)
    {
        switch (numberOfBonus)
        {
            case 0:
                // do nothing
                break;
            case 1: // autoclik

                //bonusText.text = "Autocliker ON!";
                StartCoroutine(fillTimerCourutine(TimeControler.Instance.bonusAutoClickerTimer(),progressCliker,activePanelCliker));
                activePanelCliker.SetActive(true);

                break;
            case 2: // cash Rain

                //bonusText.text = "DOLAR RAIN!";
                activePanelCoinToCash.SetActive(true);
                StartCoroutine(fillTimerCourutine(TimeControler.Instance.bonusDolarToCashTimer(),progressCash, activePanelCoinToCash));
                
                break;
            case 3: // walls

                activePanelWalls.SetActive(true);
                StartCoroutine(fillTimerCourutine(TimeControler.Instance.timerWallUp(), progressWall, activePanelWalls));

                break;
            case 4: // double coin

                activePanelDoubleCoin.SetActive(true);
                StartCoroutine(fillTimerCourutine(TimeControler.Instance.timerDoubleCoins(), progressDoublCoin, activePanelDoubleCoin));

                break;
            case 5: // doub reward

                activePanelDoubleRewad.SetActive(true);
                StartCoroutine(fillTimerCourutine(TimeControler.Instance.timerDoubleReward(), progressDoublRew, activePanelDoubleRewad));

                break;
            default:
                Debug.Log("Error?");
                break;
        }
    }

    IEnumerator autoClikerTimer(float time)
    {
        progressCliker.fillAmount = 1;
        float startVar = time;
        while (time>=0)
        {
            float dTime = Time.deltaTime;
            yield return new WaitForSeconds(dTime);
            time = time - dTime;
            progressCliker.fillAmount = (time / startVar);

        }
        activePanelCliker.SetActive(false);
    }

    IEnumerator fillTimerCourutine(float time, Image imgTemp,GameObject panel)
    {
        imgTemp.fillAmount = 1;
        float startVar = time;
        while (time >= 0f)
        {
            yield return null ;
            time -= Time.deltaTime;
            imgTemp.fillAmount = (time / startVar);

        }
        panel.SetActive(false);
    }





    #endregion bonus


    #region chest


    bool chestOnBoard = false;

    public void OpenChestPopUpActivate()
    {
        StartCoroutine(startChestPopUpLoop());
    }

    IEnumerator startChestPopUpLoop()
    {
        spawnChestAnimation();
        chestTrigger();
        yield return new WaitForSeconds(2);
        openChestPopUp.SetActive(true);
    }

    public void OpenChestPopUpDeactivate()
    {
        openChestPopUp.SetActive(false);
    }

    public void watchAddChestOpening()
    {
        if (AdsEnabled)
        {
            adScript.openChest = true;
            adScript.ShowRewardVideo("OpenChest_REWARD");
            adScript.wasRequested = true;
        }

        else
        {
            // effect script
            if (debugMNG.debugMode && debugMNG.adsActive)
            {
                chestClaimRewardPopUpActivate();
                OpenChestPopUpDeactivate();
            }
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }
    }

    public void chestClaimRewardPopUpActivate()
    {
        StartCoroutine(chestClaimRewardAnimationDelay());
    }

    private bool[] chestReward = { false, false, false };
    

    IEnumerator chestClaimRewardAnimationDelay()
    {
        chestTrigger();
        yield return new WaitForSeconds(2);

        chestTextFeedback.text = "";
        chestReward[0] = (UnityEngine.Random.Range(0, 2) == 1);
        chestReward[1] = (UnityEngine.Random.Range(0, 2) == 1);
        chestReward[2] = (UnityEngine.Random.Range(0, 2) == 1);
        // start particle

        for (int i = 0; i < 5; i++)
        {
            spawnConfetyForChest();
            yield return new WaitForSeconds(0.1f);
        }
        chestOnBoard = false;
        // close
        chestOppeningReward();
        chestTrigger();
        //if (chestReward[0])
        //{
        //    chestTextFeedback.text += "- Spin\n";
        //}
        //else
        //{
        //    chestTextFeedback.text += "- 777\n";
        //}
        //if (chestReward[1])
        //{
        //    chestTextFeedback.text += "- Double Coins\n";
        //}
        //else
        //{
        //    chestTextFeedback.text += "- Double Reward\n";
        //}
        //if (chestReward[2])
        //{
        //    chestTextFeedback.text += "- Rise Walls";
        //}
        //else
        //{
        //    chestTextFeedback.text += "- Auto Cliker";
        //}

        //claimChestPopUp.SetActive(true);
    }
    private Vector3 tr1 = new Vector3(0.33f, -2.9f, 12f);
    private Vector3 tr2 = new Vector3(0, -2.6f, 12.3f);
    void spawnConfetyForChest()
    {
        float x = UnityEngine.Random.Range(tr1.x,tr2.x);
        float y = UnityEngine.Random.Range(tr1.y, tr2.y);
        float z = UnityEngine.Random.Range(tr1.z, tr2.z);
        Vector3 temp = new Vector3(x,y,z);
        Instantiate(chestConfetyParticle, temp, Quaternion.identity);
    }

    public void chestClaimRewardPopUpDeactivate()
    {

        claimChestPopUp.SetActive(false);
        chestTrigger();
        
    }

    public void chestOppeningReward()
    {
        if (chestReward[0])
        {
            SpinAdReward();
        }
        else
        {
            spinWheelScript.StartShow();
        }

        if (chestReward[1])
        {
            DoubleCoinsAdReward();
        }
        else
        {
            DoubleRewardAdReward();
        }

        if (chestReward[2])
        {
            WallAdReward();
        }
        else
        {
            spawnMoneyScript.autoclickerActivating();
        }

        chestClaimRewardPopUpDeactivate();

        StartCoroutine(vibrationCourutine());
    }

    Animator chestAnimator;
    int a = 0;

    void spawnChestAnimation()
    {
        if(chestAnimator != null)
        {
            Destroy(chestAnimator.gameObject);
        }
        GameObject temp =  Instantiate(chestForAnim,new Vector3(0.16f, -3.74f, 12.08f), Quaternion.identity);
        chestAnimator = temp.GetComponent<Animator>();
        a = 0;
    }

    void chestTrigger()
    {
        chestAnimator.SetTrigger("Trigger");
        a++;
        if (a >= 3) Destroy(chestAnimator.gameObject,2f); Debug.Log("Chest destroyed");

    }

    IEnumerator vibrationCourutine()
    {
        yield return new WaitForSeconds(0.1f);
        Taptic.Medium();
        yield return new WaitForSeconds(0.1f);
        Taptic.Medium();
        yield return new WaitForSeconds(0.2f);
        Taptic.Medium();
        yield return new WaitForSeconds(0.2f);
        Taptic.Heavy();
        yield return new WaitForSeconds(0.2f);
        Taptic.Medium();
    }

    public void chestTriggerEnd()
    {
        chestAnimator.SetTrigger("Trigger2");
        Destroy(chestAnimator.gameObject, 2f);
    }


    #endregion chest



    #region double777

    private int coinToDouble = 0;
    private float dolarToDouble = 0;
    Coroutine openCloseButton; 

    public void ActionActivteDouble777(int coin,float dolar)
    {
        closeDoubleRewardPopup2.SetActive(false);
        closeDoubleRewardPopup1.SetActive(false);

        resetDisableButton(buttonAddWithCoin);
        resetDisableButton(buttonAddWithDolar);

        Double777PopUp.SetActive(true);

        AudioManager.instance.Play("PopUp");

        coinToDouble = coin;
        dolarToDouble = dolar;

        openCloseButton = StartCoroutine(waitAndActivateCancel());
        Double777Coin.text = coin + "";
        Double777Dolar.text = "$"+dolar.ToString("0.00");
        Double777CoinDubled.text = (coin * 2).ToString() + "\nDOUBLE";
        Double777DolarDubled.text = "$" + (dolar * 2).ToString("0.00") + "\nDOUBLE";

    }

    public void close777DoublePopUp()
    {
        Double777PopUp.SetActive(false);
        

    }

    IEnumerator waitAndActivateCancel()
    {
        
        yield return new WaitForSeconds(3);
        closeDoubleRewardPopup1.SetActive(true);
    }

    void stopCorutine(Coroutine temp)
    {
        if (temp != null)
        {
            StopCoroutine(temp);
        }
    }

    public void watchAddDouble777Coin()
    {
        

        if (AdsEnabled)
        {
            adScript.double777Coin = true;
            adScript.ShowRewardVideo("Double777Coin_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                Double777AddAddedAmountCoin();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }
    }

    public void Double777AddAddedAmountCoin()
    {
        stopCorutine(openCloseButton);

        disableButton(buttonAddWithCoin);

        coinCounterScript.coinScoreText.text = (coinCounterScript.GetCoinScoreCount() + coinToDouble).ToString();
        coinCounterScript.coinCountAnim.SetTrigger("Pulse");


        coinCounterScript.UpdateCoinScore(coinToDouble);

        Double777Coin.text = (coinToDouble * 2) + "";
        coinToDouble = 0;

        closeDoubleRewardPopup1.SetActive(false);
        closeDoubleRewardPopup2.SetActive(true);
    }

    public void watchAddDouble777Dolar()
    {
        

        if (AdsEnabled)
        {
            adScript.double777Dolar = true;
            adScript.ShowRewardVideo("Double777Dolar_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                Double777AddAddedAmountDolar();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
            
        }
    }

    public void Double777AddAddedAmountDolar()
    {
        stopCorutine(openCloseButton);

        disableButton(buttonAddWithDolar);
        
        coinCounterScript.dollarScoreText.text = (coinCounterScript.GetDollarScoreCount() + dolarToDouble).ToString("0.00 $BPL");
        coinCounterScript.dollarCountAnim.SetTrigger("Pulse");

        coinCounterScript.UpdateDollarScore(dolarToDouble);

        Double777Dolar.text = "$" + (dolarToDouble*2).ToString("0.00");
        dolarToDouble = 0;
        closeDoubleRewardPopup1.SetActive(false);
        closeDoubleRewardPopup2.SetActive(true);

        coinCounterScript.SaveCoinScoreCount();
    }

    public void disableButton(GameObject btn)
    {
        if (btn.active)
        {
            btn.GetComponent<Button>().interactable = false;
            Color buttonColor = btn.GetComponentInChildren<Text>().color;
            btn.GetComponentInChildren<Text>().color = new Color(buttonColor.r, buttonColor.g, buttonColor.b, 0.2f);
        }
    }

    public void resetDisableButton(GameObject btn)
    {
        btn.GetComponent<Button>().interactable = true;
        Text txtBtn = btn.GetComponentInChildren<Text>();
        Color buttonColor = txtBtn.color;
        btn.GetComponentInChildren<Text>().color = new Color(buttonColor.r, buttonColor.g, buttonColor.b, 1f);
    }

    public void close777popUP()
    {
        dolarToDouble = 0;
        coinToDouble = 0;
    }


    #endregion double777


    #region congrats

    

    public void congratsPopUpActivate(string curency)
    {
        //congratsPopUpText1.text = curency + " REACHED!";
        congratsPopUpText2.text = "You just reached the " + curency + " milestone!";
        congratsPopUp.SetActive(true);

    }


    #endregion congrats

    [Header ("shop panels")]
    public GameObject DolarWithPanel;
    public GameObject CoinsWithPanel;
    public GameObject FruitsWithPanel;

    public void ButtonDolarWithPanel()
    {
        if (AdsEnabled)
        {
            adScript.paypal100Panel = true;
            adScript.ShowRewardVideo("PayPal100Dolars_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                ActivateDolarWithPanel();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;

        }
    }

    public void ActivateDolarWithPanel()
    {

        Debug.Log("ShowPanel function called");
        DolarWithPanel.SetActive(true);
    }

    public void ButtonCoinsWithPanel()
    {
        if (AdsEnabled)
        {
            adScript.amazon100Panel = true;
            adScript.ShowRewardVideo("Amazon100Dolars_REWARD");
            adScript.wasRequested = true;
        }
        else
        {
            if (debugMNG.debugMode && debugMNG.adsActive)
                ActivateCoinsWithPanel();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;

        }
    }

    public void ActivateCoinsWithPanel()
    {
        CoinsWithPanel.SetActive(true);
    }

    public void ButtonFruitsWithPanel()
    {
        /*if (AdsEnabled)
        {
            adScript.card100000Panel = true;
            adScript.ShowRewardVideo("Card10000Dolars_REWARD");
            adScript.wasRequested = true;
        }
        else
        {*/
            if (debugMNG.debugMode && debugMNG.adsActive)
                ActivateFruitsWithPanel();
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;

        //}
    }

    public void ActivateFruitsWithPanel()
    {
        FruitsWithPanel.SetActive(true);
    }


    #region calculate TimeSpent in game

    DateTime luckyPushStart;

    DateTime luckySpinStart;

    void timersSetUp()
    {
        luckyPushStart = System.DateTime.Now;

        if (!PlayerPrefs.HasKey("luckyPusherPlayedTime"))
        {
            PlayerPrefs.SetString("luckyPusherPlayedTime", "0");
            PlayerPrefs.SetString("luckySpinPlayedTime", "0");
        }

        InvokeRepeating("sendDateToServer", 7.11f, 7.11f);

    }

    void sendDateToServer()
    {
        if (prizePanelOpen)
        {
            saveLuckySpinTimer();
        }
        else
        {
            saveLuckyPusherTime();
        }

        //int secondLucky = (int)double.Parse(PlayerPrefs.GetString("luckyPusherPlayedTime"));

        //int secondSpin = (int)double.Parse(PlayerPrefs.GetString("luckySpinPlayedTime"));

        //FirebaseAnalytics.SetUserProperty("time_played_luckypusher", secondLucky.ToString());
        //FirebaseAnalytics.SetUserProperty("time_played_luckyprizes", secondSpin.ToString());

        //OneSignal.SendTags(new Dictionary<string, string>() {
        //    { "time_played_luckypusher", secondLucky.ToString() },
        //    { "time_played_luckyprizes", secondSpin.ToString()} });

    }


    public GameObject prizePanel;
    bool prizePanelOpen = false;



    public void PrizesWindowOpen()
    {
        prizePanelOpen = true;
        prizePanel.SetActive(prizePanelOpen);

        luckySpinStart = DateTime.Now;

        TimeSpan luckyPusherPlayed = DateTime.Now - luckyPushStart;

        TimeSpan timePlayed = TimeSpan.FromSeconds(double.Parse(PlayerPrefs.GetString("luckyPusherPlayedTime")));

        TimeSpan totalTime = luckyPusherPlayed + timePlayed;

        PlayerPrefs.SetString("luckyPusherPlayedTime", totalTime.TotalSeconds.ToString());

        //Debug.Log(" Push Time : " + PlayerPrefs.GetString("luckyPusherPlayedTime"));
    }

    public void PrizesWindowClose()
    {
        prizePanelOpen = false;
        prizePanel.SetActive(prizePanelOpen);

        luckyPushStart = DateTime.Now;

        TimeSpan luckySpinPlayed = DateTime.Now - luckySpinStart;

        TimeSpan timePlayed = TimeSpan.FromSeconds(double.Parse(PlayerPrefs.GetString("luckySpinPlayedTime")));

        TimeSpan totalTime = luckySpinPlayed + timePlayed;

        PlayerPrefs.SetString("luckySpinPlayedTime", totalTime.TotalSeconds.ToString());

        //Debug.Log(" Spin Time : " + PlayerPrefs.GetString("luckySpinPlayedTime"));

    }

    void saveLuckyPusherTime()
    {
        TimeSpan luckyPusherPlayed = DateTime.Now - luckyPushStart;

        TimeSpan timePlayed = TimeSpan.FromSeconds(double.Parse(PlayerPrefs.GetString("luckyPusherPlayedTime")));

        TimeSpan totalTime = luckyPusherPlayed + timePlayed;

        PlayerPrefs.SetString("luckyPusherPlayedTime", totalTime.TotalSeconds.ToString());

        //Debug.Log(" Push Time : " + PlayerPrefs.GetString("luckyPusherPlayedTime"));

        luckyPushStart = DateTime.Now;
    }

    void saveLuckySpinTimer()
    {
        TimeSpan luckySpinPlayed = DateTime.Now - luckySpinStart;

        TimeSpan timePlayed = TimeSpan.FromSeconds(double.Parse(PlayerPrefs.GetString("luckySpinPlayedTime")));

        TimeSpan totalTime = luckySpinPlayed + timePlayed;

        PlayerPrefs.SetString("luckySpinPlayedTime", totalTime.TotalSeconds.ToString());

        //Debug.Log(" Spin Time : " + PlayerPrefs.GetString("luckySpinPlayedTime"));

        luckySpinStart = DateTime.Now;
    }

    #endregion

    [Header("DailyReward")]
    public Text dailyAmount;
    public Text dayStreak;
    public Text tomorowText;
    public Button buttonDailyReward;

    public void setDailyRewardButton()
    {
        

        if (!PlayerPrefs.HasKey("DailyRewardDay"))
        {
            PlayerPrefs.SetString("DailyRewardDay",DateTime.Today.ToString());
            PlayerPrefs.SetInt("DailyRewardStreak", 1);
            dailyAmount.text = "1 $BPL";
            dayStreak.text = "1 day";
            tomorowText.text = "Tomorow you will get 2 $BPL";
            return;
        }

        DateTime yesterday = DateTime.Today - TimeSpan.FromDays(1);
        string savedDay = PlayerPrefs.GetString("DailyRewardDay");

        if (savedDay != DateTime.Today.ToString() && savedDay != yesterday.ToString())
        {
            PlayerPrefs.SetString("DailyRewardDay", DateTime.Today.ToString());
            PlayerPrefs.SetInt("DailyRewardStreak", 1);
            dailyAmount.text = "1 $BPL";
            dayStreak.text = "1 day";
            tomorowText.text = "Tomorow you will get 2 $BPL";
            return;
        }
        
        if (savedDay == yesterday.ToString())
        {
            PlayerPrefs.SetString("DailyRewardDay", DateTime.Today.ToString());
            PlayerPrefs.SetInt("DailyRewardStreak", PlayerPrefs.GetInt("DailyRewardStreak") + 1);
            DailyRewardButtonSetUp();
        }

        if(savedDay == DateTime.Today.ToString())
        {
            DailyRewardButtonSetUp();
        }

        if (PlayerPrefs.HasKey(DateTime.Today.ToString() + "RewardClaimed"))
        {
            if(PlayerPrefs.GetInt(DateTime.Today.ToString() + "RewardClaimed") == 1)
            {
                buttonDailyReward.interactable = false;
            }
        }
    }

    public void DailyRewardButtonSetUp()
    {
        int streak = PlayerPrefs.GetInt("DailyRewardStreak");

        if(streak >= 10)
        {
            dailyAmount.text = "10 $BPL";
            tomorowText.text = "Tomorow you will get 10 $BPL";
        }
        else
        {
            dailyAmount.text = streak + " $BPL";
            tomorowText.text = "Tomorow you will get " + (streak+1) + " $BPL";
        }
        dayStreak.text = streak + " days";
    }

    public void buttonClickClaimDailyReward()
    {
        /*if (AdsEnabled)
        {
            
            adScript.dailyReward = true;
            adScript.ShowRewardVideo("DayliReward_REWARD");
            adScript.wasRequested = true;
        }
        else
        {*/
            if (debugMNG.debugMode && debugMNG.adsActive)
            {
                rewardDailyReward();
            }
            else if (!debugMNG.debugMode || !debugMNG.adsActive)
                return;
        //}
    }

    public void rewardDailyReward()
    {
        if (!PlayerPrefs.HasKey(DateTime.Today.ToString() + "RewardClaimed"))
        {
            int streak = PlayerPrefs.GetInt("DailyRewardStreak");
            if (streak >= 10)
                streak = 10;

            PlayerPrefs.SetInt(DateTime.Today.ToString() + "RewardClaimed", 1);

            coinCounterScript.UpdateDollarScore(streak);

            CoinsYouHave();

            OnShopButtonClicked();

        }
    }
}
