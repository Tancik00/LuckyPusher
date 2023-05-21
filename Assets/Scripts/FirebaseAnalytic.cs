using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using Firebase.Analytics;

public class FirebaseAnalytic : MonoBehaviour
{
    #region SINGLETON PATTERN
    public static FirebaseAnalytic _instance;
    public static FirebaseAnalytic Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = GameObject.FindObjectOfType<FirebaseAnalytic>();

                if (_instance == null)
                {
                    GameObject container = new GameObject("Bicycle");
                    _instance = container.AddComponent<FirebaseAnalytic>();
                }
            }

            return _instance;
        }
    }

    #endregion

    GameManager gm;

    private void Start()
    {
        gm = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();


        InvokeRepeating("SendDataToServer", 11.11f, 11.11f);

    }

    void SendDataToServer()
    {
        Debug.Log("Data sent to server.");
        sendDataFirebaseServer();
        sendDataOneSingnalServe();
    }

    public void sendDataFirebaseServer()
    {
        int secondLucky = (int)double.Parse(PlayerPrefs.GetString("luckyPusherPlayedTime"));

        int secondSpin = (int)double.Parse(PlayerPrefs.GetString("luckySpinPlayedTime"));

       //  FirebaseAnalytics.SetUserProperty("extra", gm.Extra.ToString());
       //  FirebaseAnalytics.SetUserProperty("score_coins", PlayerPrefs.GetInt("CoinScoreCount").ToString());
       //  FirebaseAnalytics.SetUserProperty("score_dollars", PlayerPrefs.GetInt("DollarScoreCount").ToString());
       //  FirebaseAnalytics.SetUserProperty("fruits_total", PlayerPrefs.GetInt("Fruits").ToString());
       //  FirebaseAnalytics.SetUserProperty("time_played_luckypusher", secondLucky.ToString());
       //  FirebaseAnalytics.SetUserProperty("time_played_luckyprizes", secondSpin.ToString());
       // FirebaseAnalytics.SetUserProperty("dailyreward_streak", PlayerPrefs.GetInt("DailyRewardStreak").ToString());
    }

    public void sendDataOneSingnalServe()
    {
        int secondLucky = (int)double.Parse(PlayerPrefs.GetString("luckyPusherPlayedTime"));

        int secondSpin = (int)double.Parse(PlayerPrefs.GetString("luckySpinPlayedTime"));

        OneSignal.SendTags(new Dictionary<string, string>() {
            { "extra", gm.Extra.ToString()},
            { "score_coins", PlayerPrefs.GetInt("CoinScoreCount").ToString() },
            { "score_dollars",PlayerPrefs.GetInt("DollarScoreCount").ToString()},
            { "fruits_unlocked", PlayerPrefs.GetInt("Fruits").ToString() },
            { "time_played_luckypusher", secondLucky.ToString() },
            { "time_played_luckyprizes", secondSpin.ToString()} ,
            { "dailyreward_streak", PlayerPrefs.GetInt("DailyRewardStreak").ToString()}});
    }


    public void sendEventFirebaseServer(string sentEvent)
    {
        /*Firebase.Analytics.FirebaseAnalytics.LogEvent(
                    Firebase.Analytics.FirebaseAnalytics.EventJoinGroup,
                    Firebase.Analytics.FirebaseAnalytics.ParameterGroupId,
                    sentEvent
                  );*/

    }

}
