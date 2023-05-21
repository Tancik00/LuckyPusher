using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeControler : MonoBehaviour
{

    #region SINGLETON PATTERN
    public static TimeControler _instance;
    public static TimeControler Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<TimeControler>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("Bicycle");
                    _instance = container.AddComponent<TimeControler>();
                }
            }

            return _instance;
        }
    }

    #endregion

    private GameObject GMObject;
    private DebugManager debugMNG;


    private void Awake()
    {

        GMObject = GameObject.FindGameObjectWithTag("GameManager");
        debugMNG = GMObject.GetComponent<DebugManager>();

    }


    public float CEANCE()
    {
        return  Random.Range(0f, 100f);
    }


    #region Bonuses

    public float timerWallUp()
    {
        return 30;
    }

    public float timerDoubleCoins()
    {
        return 30f;
    }

    public float timerDoubleReward()
    {
        return 30f;
    }

    public float timerSpin()
    {
        return 3f;
    }

    public float timerShakeCoin()
    {
        return 10f;
    }

    #endregion Bonuses


    #region offerts

    // time betwen offerts
    public float bonusOffertTimer()
    {
        if(debugMNG.fastPromos)
            return 2;
        else
            return Random.Range(30f, 60f);
    }

    public float bonusDolarToCashTimer()
    {
        return 30;
    }

    // time the autoclik is ON
    public float bonusAutoClickerTimer()
    {
        return 180;
    }

    // time the bonnus offers stay on scren;
    public float bonusOffertsOnScren()
    {
        return 30;
    }

    // offers selection 1-clicker 2-bomb 3-coinToCach
    public int selectOneOfTheOfferts()
    {
        int temp =  UnityEngine.Random.Range(1, 5);
        //Debug.Log(temp);
        return  temp;
    }


    // timer to get the double coins popup on bomb
    public float bonusDoubleOnBomb()
    {
        return 7;
    }

    #endregion offerts




    public float withdrawInterval()
    {
        if(debugMNG.debugMode)
            return 3f;
        return Random.Range(5f, 50f);
    }


    #region probability



    private float ProbabilityGreenCach = 0;

    public float getGreenCachProbability()
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
            ProbabilityGreenCach = 50f;
        }
        else if (maxPercentage >= 20f && maxPercentage < 30f)
        {
            ProbabilityGreenCach = 50f;
        }
        else if (maxPercentage >= 30f && maxPercentage < 40f)
        {
            ProbabilityGreenCach = 20f;
        }
        else if (maxPercentage >= 40f && maxPercentage < 90f)
        {
            ProbabilityGreenCach = 15f;
        }
        else if (maxPercentage >= 90f && maxPercentage < 99f)
        {
            ProbabilityGreenCach = 0.5f;
        }
        else if (maxPercentage >= 99f)
        {
            ProbabilityGreenCach = 0;
        }
        return ProbabilityGreenCach;
    }



    #endregion probability
}
