using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour
{
    TimeSpan timeCounter;
    DateTime lastChecked;

    public Text txtTime;
    public float updateFrequency = 0.1f;

    // Use this for initialization
    void Start()
    {
        string strVal = PlayerPrefs.GetString("TimeRun", "");
        long ticks = 0;

        long.TryParse(strVal, out ticks);

        timeCounter = new TimeSpan(ticks);

        lastChecked = DateTime.Now;

        StartCoroutine(CalcAndDisplay());
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetString("TimeRun", timeCounter.Ticks.ToString());
        PlayerPrefs.Save();
    }

    IEnumerator CalcAndDisplay()
    {
        bool bRun = true;

        while (bRun)
        {
            DateTime now = DateTime.Now;

            timeCounter += now - lastChecked;

            lastChecked = now;

            txtTime.text = "timePassed " +
                string.Format("{0:D2}:{1:D2}:{2:D2}", timeCounter.Hours, timeCounter.Minutes, timeCounter.Seconds);

            yield return new WaitForSeconds(updateFrequency);
        }
    }

}
