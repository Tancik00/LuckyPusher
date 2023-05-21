using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using Firebase.Analytics;
using System;
using NiobiumStudios;

public class ads : MonoBehaviour
{
    public UIManager uiManager;
    public SpawnMoney spawnMoneyScript;
    public LuckyPrizesManager luckyPrize;
    public DailyRewardsInterface dailyRewardsInterface;
    public FlyingPuzzle flyingPuzzle;
    private TimerManager timerMNG;

    public bool doubleCoinsIsShowing;
    public bool riseWallsIsShowing;
    public bool spinIsShowing;
    public bool shakeMachineIsShowing;
    public bool doubleRewardIsShowing;
    public bool pocketCoinsIsShowing;
    public bool unsuccesfulSpin;
    public bool autoClicker;
    public bool coinToCach;
    public bool double777Coin;
    public bool double777Dolar;
    public bool bigBomb;
    public bool spawnChest;
    public bool openChest;
    public bool bublePrize;
    public bool paypal100Panel;
    public bool amazon100Panel;
    public bool card100000Panel;
    public bool spinPrize;
    public bool ticket;
    public bool spawnTickets;
    public bool dailyReward;
    public bool dailyLuckyPuzzle;
    public bool bubblePuzzle;

    [Header("Ad Values")]
    private string tempPlacement;
    public bool wasRequested;
    public LoaderScript[] loaders;

    public bool rewardedAvailable;

    private bool interstitialOnStart;

    private void Awake()
    {
        string YOUR_APP_KEY = "";
        

        //if (Application.platform == RuntimePlatform.Android)
        //{
        //    YOUR_APP_KEY = "d9075811";
        //}
        //if (Application.platform == RuntimePlatform.IPhonePlayer)
        //{
        //    YOUR_APP_KEY = "cb726955";
        //}

        //IronSource.Agent.init(YOUR_APP_KEY, IronSourceAdUnits.REWARDED_VIDEO, IronSourceAdUnits.INTERSTITIAL, IronSourceAdUnits.OFFERWALL, IronSourceAdUnits.BANNER);
        //IronSource.Agent.validateIntegration();

        setupCallbacks();


        if (!PlayerPrefs.HasKey("FirstTimeIn") || PlayerPrefs.GetInt("FirstTimeIn") == 0)
            PlayerPrefs.SetInt("FirstTimeIn", 1);
        else
            IronSource.Agent.loadInterstitial();

        IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM, "WinPrizes_banner");
        IronSource.Agent.displayBanner();

        timerMNG = GetComponent<TimerManager>();


    }
    // Start is called before the first frame update
    void Start()
    {

        IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM, "WinPrizes_banner");
        IronSource.Agent.displayBanner();

        GameObject tempObject = GameObject.FindGameObjectWithTag("GameManager");
        uiManager = tempObject.GetComponent<UIManager>();
        GameObject casinoSystemObject = GameObject.FindGameObjectWithTag("CasinoSystem");
        spawnMoneyScript = casinoSystemObject.GetComponent<SpawnMoney>();


        // spawnMoneyScript.AdsEnabled = true;
        //ShowRewardVideo("DoubleCoins");
        //ShowRewardVideo("DoubleReward");
        //ShowRewardVideo("Wall");
        //ShowRewardVideo("Spin");
        //ShowRewardVideo("Shake");

    }

    public void ShowRewardVideo(string placement)
    {
        tempPlacement = placement;
        Debug.Log("Show a rewarded Ad!");

        IronSource.Agent.showRewardedVideo(placement);

        //if (IronSource.Agent.isRewardedVideoAvailable())
        //{
        //    IronSource.Agent.showRewardedVideo(placement);
        //}
        //else
        //{
        //    timerMNG.StartVerificationTimer();
        //}
    }

    public void ShowInterestial(string placement)
    {
        if (IronSource.Agent.isInterstitialReady())
        {
            IronSource.Agent.showInterstitial(placement);
        }
    }


 

    void setupCallbacks()
    {
        IronSourceEvents.onInterstitialAdReadyEvent += InterstitialAdReadyEvent;
        IronSourceEvents.onInterstitialAdLoadFailedEvent += InterstitialAdLoadFailedEvent;
        IronSourceEvents.onInterstitialAdShowSucceededEvent += InterstitialAdShowSucceededEvent;
        IronSourceEvents.onInterstitialAdShowFailedEvent += InterstitialAdShowFailedEvent;
        IronSourceEvents.onInterstitialAdClickedEvent += InterstitialAdClickedEvent;
        IronSourceEvents.onInterstitialAdOpenedEvent += InterstitialAdOpenedEvent;
        IronSourceEvents.onInterstitialAdClosedEvent += InterstitialAdClosedEvent;

        IronSourceEvents.onRewardedVideoAdOpenedEvent += RewardedVideoAdOpenedEvent;
        IronSourceEvents.onRewardedVideoAdClosedEvent += RewardedVideoAdClosedEvent;
        IronSourceEvents.onRewardedVideoAvailabilityChangedEvent += RewardedVideoAvailabilityChangedEvent;
        IronSourceEvents.onRewardedVideoAdStartedEvent += RewardedVideoAdStartedEvent;
        IronSourceEvents.onRewardedVideoAdEndedEvent += RewardedVideoAdEndedEvent;
        IronSourceEvents.onRewardedVideoAdRewardedEvent += RewardedVideoAdRewardedEvent;
        IronSourceEvents.onRewardedVideoAdShowFailedEvent += RewardedVideoAdShowFailedEvent;

        IronSourceEvents.onBannerAdLoadedEvent += BannerAdLoadedEvent;
        IronSourceEvents.onBannerAdLoadFailedEvent += BannerAdLoadFailedEvent;
        IronSourceEvents.onBannerAdClickedEvent += BannerAdClickedEvent;
        IronSourceEvents.onBannerAdScreenPresentedEvent += BannerAdScreenPresentedEvent;
        IronSourceEvents.onBannerAdScreenDismissedEvent += BannerAdScreenDismissedEvent;
        IronSourceEvents.onBannerAdLeftApplicationEvent += BannerAdLeftApplicationEvent;
    }

    //REWARD VIDEO IRON SOURCE

    //Invoked when the RewardedVideo ad view has opened.
    //Your Activity will lose focus. Please avoid performing heavy
    //tasks till the video ad will be closed.
    void RewardedVideoAdOpenedEvent()
    {
        AudioManager.instance.PauseSound("Theme");
        AudioManager.instance.SoundState(false);
        Time.timeScale = 0f;    // pause
        print("IronSource - RewardedVideoAdOpenedEvent");
    }
    //Invoked when the RewardedVideo ad view is about to be closed.
    //Your activity will now regain its focus.
    void RewardedVideoAdClosedEvent()
    {
        Time.timeScale = 1f;
        AudioManager.instance.PlayTheme();
        AudioManager.instance.SoundState(true);
        print("IronSource - RewardedVideoAdClosedEvent");
    }
    //Invoked when there is a change in the ad availability status.
    //@param - available - value will change to true when rewarded videos are available.
    //You can then show the video by calling showRewardedVideo().
    //Value will change to false when no videos are available.

    
    void RewardedVideoAvailabilityChangedEvent(bool available)
    {
        print("IronSource - RewardedVideoAvailabilityChangedEvent ->" + available);
        //Change the in-app 'Traffic Driver' state according to availability.
        //bool rewardedVideoAvailability = available;

        rewardedAvailable = available;

        for (int i = 0; i < loaders.Length; i++)
        {
            loaders[i].adLoaded = available;
        }

        if (wasRequested && available)
        {
            //if (tempPlacement != null)
                ShowRewardVideo(tempPlacement);
            //------------------//------------------//------------------//------------------//------------------//------------------
            //timerMNG.StopVerificationTimer();
        }
    }

    void RewardedVideoAdStartedEvent()
    {
        AudioManager.instance.PauseSound("Theme");
        AudioManager.instance.SoundState(false);
        Time.timeScale = 0f;    // pause
        print("IronSource - RewardedVideoAdStartedEvent");
    }
    //Invoked when the video ad finishes playing.
    void RewardedVideoAdEndedEvent()
    {
       // Time.timeScale = 1f;
        print("IronSource - RewardedVideoAdEndedEvent");
    }
    //Invoked when the user completed the video and should be rewarded.
    //If using server-to-server callbacks you may ignore this events and wait for the callback from the  ironSource server.
    //
    //@param - placement - placement object which contains the reward data
    //
    void RewardedVideoAdRewardedEvent(IronSourcePlacement ssp)
    {
        print("ironSource Reward Video Finished");

        //SUCESFULL REWARD VIDEO WATCHED FULL

        wasRequested = false;

        if (ssp.getPlacementName() == "DoubleCoins_REWARD" || doubleCoinsIsShowing)
        {
            doubleCoinsIsShowing = false;
            uiManager.DoubleCoinsAdReward();
           // FirebaseAnalytics.LogEvent("Interactables", "DoubleCoins", 1);
        }
        else if (ssp.getPlacementName() == "DoubleReward_REWARD" || doubleRewardIsShowing)
        {
            doubleRewardIsShowing = false;
            uiManager.DoubleRewardAdReward();
           // FirebaseAnalytics.LogEvent("Interactables", "DoubleReward", 1);
        }
        else if(ssp.getPlacementName() == "Spin_REWARD" || spinIsShowing)
        {
            spinIsShowing = false;
            uiManager.SpinAdReward();
           // FirebaseAnalytics.LogEvent("Interactables", "Spin", 1);
        }
        else if(ssp.getPlacementName() == "Walls_REWARD" || riseWallsIsShowing)
        {
            riseWallsIsShowing = false;
            uiManager.WallAdReward();
           // FirebaseAnalytics.LogEvent("Interactables", "Walls", 1);
        }
        else if(ssp.getPlacementName() == "Shake_REWARD" || shakeMachineIsShowing)
        {
            shakeMachineIsShowing = false;
            uiManager.ShakeAdReward();
           // FirebaseAnalytics.LogEvent("Interactables", "Shake", 1);
        }
        else if (ssp.getPlacementName() == "AddCoins_REWARD" || pocketCoinsIsShowing) // +
        {
            pocketCoinsIsShowing = false;
            spawnMoneyScript.AddRewardedCoins();
           // FirebaseAnalytics.LogEvent("Interactables", "AddCoins", 1);
        }
        else if (ssp.getPlacementName() == "UnsuccesfulSpin_REWARD" || unsuccesfulSpin)
        {
            unsuccesfulSpin = false;
            uiManager.spinWheelScript.TurnWheels();
            uiManager.closeAllRollWrongPopUp();
           // FirebaseAnalytics.LogEvent("Interactables", "UnsuccesfulSpin", 1);
        }
        else if (ssp.getPlacementName() == "AutoClicker_REWARD" || autoClicker)
        {
            autoClicker = false;
            spawnMoneyScript.autoclickerActivating();
            Taptic.Success(); ;
           // FirebaseAnalytics.LogEvent("Interactables", "Autoclicker", 1);
        }
        else if (ssp.getPlacementName() == "CoinToCach_REWARD" || coinToCach)
        {
            coinToCach = false;
            spawnMoneyScript.CoinToCachBonus();
            Taptic.Success();
          //  FirebaseAnalytics.LogEvent("Interactables", "CoinToCash", 1);
        }
        else if (ssp.getPlacementName() == "Double777Coin_REWARD" || double777Coin)
        {
            double777Coin = false;
            uiManager.Double777AddAddedAmountCoin();
        }
        else if (ssp.getPlacementName() == "Double777Dolar_REWARD" || double777Dolar)
        {
            double777Dolar = false;
            uiManager.Double777AddAddedAmountDolar();
           // FirebaseAnalytics.LogEvent("Interactables", "Double777", 1);
        }
        else if (ssp.getPlacementName() == "BigBomb_REWARD" || bigBomb)
        {
            bigBomb = false;
            uiManager.GetComponent<GameManager>().coinDataScript.coinBurn();
            Taptic.Success();
           // FirebaseAnalytics.LogEvent("Interactables", "BigBomb", 1);
        }
        else if (ssp.getPlacementName() == "SpawnChest_REWARD" || spawnChest)
        {
            spawnChest = false;
            spawnMoneyScript.spawnChest();
            Taptic.Success();
           // FirebaseAnalytics.LogEvent("Interactables", "ChestSpawn", 1);
        }
        else if (ssp.getPlacementName() == "OpenChest_REWARD" || openChest)
        {
            openChest = false;
            // effect function
            uiManager.chestClaimRewardPopUpActivate();
            uiManager.OpenChestPopUpDeactivate();
           // FirebaseAnalytics.LogEvent("Interactables", "ChestOpen", 1);
        }
        else if (ssp.getPlacementName() == "BubblePrize_REWARD" || bublePrize)
        {
            bublePrize = false;
            luckyPrize.BubleAdReward();
            //timerMNG.OneAdWatched();
            ///
        }
        else if (ssp.getPlacementName() == "PayPal100Dolars_REWARD" || paypal100Panel)
        {
            paypal100Panel = false;
            uiManager.ActivateDolarWithPanel();
            ///
        }
        else if (ssp.getPlacementName() == "Amazon100Dolars_REWARD" || amazon100Panel)
        {
            amazon100Panel = false;
            uiManager.ActivateCoinsWithPanel();

            ///
        }
        else if (ssp.getPlacementName() == "Card10000Dolars_REWARD" || card100000Panel)
        {
            card100000Panel = false;
            uiManager.ActivateFruitsWithPanel();
            ///
        }
        else if (ssp.getPlacementName() == "SpinPrize_REWARD" || spinPrize)
        {
            spinPrize = false;
            luckyPrize.StartSpin();
        }
        else if (ssp.getPlacementName() == "Ticket_REWARD" || ticket)
        {
            ticket = false;
            luckyPrize.ActivateTicketReward();
        }
        else if (ssp.getPlacementName() == "SpawnTicket_REWARD" || spawnTickets)
        {
            spawnTickets = false;
            luckyPrize.ActivateUnlockTicketReward();
        }
        else if (ssp.getPlacementName() == "DayliReward_REWARD" || dailyReward)
        {
            dailyReward = false;
            uiManager.rewardDailyReward();
        }
        else if (ssp.getPlacementName() == "DailyLuckyPuzzle_REWARD" || dailyLuckyPuzzle)
        {
            dailyLuckyPuzzle = false;
            dailyRewardsInterface.Claim();
        }
        else if (ssp.getPlacementName() == "BubblePuzzle_REWARDED" || bubblePuzzle)
        {
            bubblePuzzle = false;
            flyingPuzzle.AddBubblePuzzle();
        }

        //   if (ssp.getPlacementName() == "PLACMENT_NAME") to check what to give
    }
    //Invoked when the Rewarded Video failed to show
    //@param description - string - contains information about the failure.
    void RewardedVideoAdShowFailedEvent(IronSourceError error)
    {
        Time.timeScale = 1f;
       /// AudioManager.instance.PlayTheme();
        print("IronSource -RewardedVideoAdShowFailedEvent");
        print(error.getDescription());
    }


    //INTERESTIAL
    //Invoked when the initialization process has failed.
    //@param description - string - contains information about the failure.
    void InterstitialAdLoadFailedEvent(IronSourceError error)
    {
        print("IronSource -InterstitialAdLoadFailedEvent");
        print(error.getDescription());
    }

    //Invoked right before the Interstitial screen is about to open.
    void InterstitialAdShowSucceededEvent()
    {
        print("IronSource -InterstitialAdShowSucceededEvent");
    }

    //Invoked when the ad fails to show.
    //@param description - string - contains information about the failure.
    void InterstitialAdShowFailedEvent(IronSourceError error)
    {
        print("IronSource -InterstitialAdShowFailedEvent");
        print(error.getDescription());
    }

    // Invoked when end user clicked on the interstitial ad
    void InterstitialAdClickedEvent()
    {
        print("IronSource - InterstitialAdClickedEvent");
        IronSource.Agent.loadInterstitial();
    }

    //Invoked when the interstitial ad closed and the user goes back to the application screen.
    void InterstitialAdClosedEvent()
    {
        interstitialOnStart = true;
        print("IronSource -InterstitialAdClosedEvent");
    }

    //Invoked when the Interstitial is Ready to shown after load function is called
    void InterstitialAdReadyEvent()
    {
        print("IronSource - InterstitialAdReadyEvent");
        InterstitialOnStartCall();
    }

    //Invoked when the Interstitial Ad Unit has opened
    void InterstitialAdOpenedEvent()
    {
        print("IronSource - InterstitialAdOpenedEvent");
    }

    void OnApplicationPause(bool isPaused)
    {
        IronSource.Agent.onApplicationPause(isPaused);
    }



    private void InterstitialOnStartCall()
    {
        if (!interstitialOnStart)
            ShowInterestial("GameStart_INTER");
    }


    private bool bannerLoaded;


    public void ShowBanner()
    {
       // if(bannerLoaded)
            //IronSource.Agent.displayBanner();
    }

    public void HideBanner()
    {
        //bannerLoaded = false;
        //IronSource.Agent.hideBanner();
    }

    //Invoked once the banner has loaded
    void BannerAdLoadedEvent()
    {
        //bannerLoaded = true;
        //HideBanner();
    }

    //Invoked when the banner loading process has failed.
    //@param description - string - contains information about the failure.
    void BannerAdLoadFailedEvent(IronSourceError error)
    {
        IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM, "WinPrizes_banner");
    }
    // Invoked when end user clicks on the banner ad
    void BannerAdClickedEvent()
    {
    }
    //Notifies the presentation of a full screen content following user click
    void BannerAdScreenPresentedEvent()
    {
    }
    //Notifies the presented screen has been dismissed
    void BannerAdScreenDismissedEvent()
    {
        IronSource.Agent.loadBanner(IronSourceBannerSize.SMART, IronSourceBannerPosition.BOTTOM, "WinPrizes_banner");
    }
    //Invoked when the user leaves the app
    void BannerAdLeftApplicationEvent()
    {
    }


}
