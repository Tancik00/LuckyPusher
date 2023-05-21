using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DebugManager : MonoBehaviour
{

    [Header("Scripts")]
    public CoinCounter coinCounterScript;
    public SpinWheelController spinWheelScript;
    public UIManager uiMNG;

    [Header("Other")]
    public GameObject[] fruitList;
    public string[] fruitNames;

    private CoinScript fruitCoinScript;

    [Header("Parameters")]
    public bool debugMode;
    public bool ExtraOn;
    public bool adsActive;
    public bool fastSpin;
    public bool fastPromos;
    public bool internetConnecion;
    public bool NoAds_Bought;


    //[Header("Values")]
    //public int coins;
    //public float dollars;


    private void Awake()
    {
        fruitNames = new string[fruitList.Length];
        for (int i = 0; i < fruitList.Length; i++)
        {
            fruitCoinScript = fruitList[i].GetComponent<CoinScript>();
            fruitNames[i] = fruitCoinScript.nameKey;
        }
        uiMNG = GetComponent<UIManager>();
    }

    // Start is called before the first frame update
    void Start()
    {
        //if (debugMode)
        //{
        //   // debugCanvas.gameObject.SetActive(true);
        //  //  coinCounterScript.Coins = coins;
        //  //  coinCounterScript.Dollars = dollars;
        //    coinCounterScript.coinScoreText.text = coins.ToString();
        //    coinCounterScript.dollarScoreText.text = dollars.ToString("$0.00");
        //    coinCounterScript.SaveCoinScoreCount();
        //}

    }

    public void UpdateMoneyText(int coinAmount, float dollarAmount)
    {

        coinCounterScript.UpdateMoneyForDebug(coinAmount, dollarAmount);
        coinCounterScript.SaveCoinScoreCount();
    }

    public void SpawnFruitByID(int fruitID)
    {
        spinWheelScript.SpawnFruit(fruitID);
    }

    public void AddCashCoins(int coinsNumber)
    {
        spinWheelScript.SpawnCashAmount(coinsNumber);
    }

    public void GetSpecificOffer(int offerID)
    {
        uiMNG.selectAndActivateBonusOffert(offerID);
    }

}
