using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameData : MonoBehaviour
{

    public CoinCounter coinCounterScript;

    public int coinScoreCount;
    public int moneyScoreCount;
    public int pocketCoinCount;

    /*

    public void SaveCoinScoreCount()
    {
       // coinScoreCount = coinCounterScript.coinsCount;
        PlayerPrefs.SetInt("CoinScoreCount", coinScoreCount);
       // PlayerPrefs.SetInt("MoneyScoreCount")
    }

    public int GetCoinScoreCount()
    {
        if(PlayerPrefs.HasKey("CoinScoreCount"))
        {
            return PlayerPrefs.GetInt("CoinScoreCount");
        }
        else
        {
            PlayerPrefs.SetInt("CoinScoreCount", 0);
            return 0;
        }
    }

    private void OnApplicationQuit()
    {
        Debug.Log("Saving data...");
        SaveCoinScoreCount();
    }
    */
}
