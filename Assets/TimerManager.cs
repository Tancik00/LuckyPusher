using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class TimerManager : MonoBehaviour
{
    public LuckyPrizesManager luckyPrizesMNG;
    private ads adScript;

    [Header("Timer")]
    public Text timerText;

    public int timeCountdown;
    public int hours;
    public int minutes;
    public int seconds;
    public float verificationTime;
    
    private bool verificationStarted;
    private bool counterStarted;
    private float verTime;

    [Header("Ad Counter")]
    public int maxAds = 8;
    public int currentAds;
    public Image sliderImage; // Fill
    public Text textBubblesLeft;


    private void Awake()
    {
        adScript = GetComponent<ads>();
        //RetrieveTimerData();
        if(timeCountdown > 0)
        {
            for (int i = 0; i < luckyPrizesMNG.bubbles.Length; i++)
            {
                luckyPrizesMNG.bubbles[i].SetActive(false);
            }

            ContinueCountDown();
            sliderImage.fillAmount = 0f;
            sliderImage.enabled = false;
        }
        else
        {
            currentAds = 0;
            sliderImage.enabled = true;
            sliderImage.fillAmount = 1f;
            textBubblesLeft.text = "Bubbles left:";
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.H))
        {
            OneAdWatched();
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            CountDownOn();
        }

    }

    //Slider part
    public void OneAdWatched()
    {
        currentAds += 1;
        if (currentAds < maxAds)
            sliderImage.fillAmount = 1 - (float)(currentAds / (float)(maxAds + 1));
        else
        {
            if (sliderImage.fillAmount <= 0.02f)
                return; // de setat pe CountDownOn() pentru test
            else
                sliderImage.fillAmount -= 0.01f;
        }
        

    }



    // Verification part
    public void StartVerificationTimer()
    {
        // Din caz ca userul nu a privit nr de ad-uri necesare, timpul de asteptare se mareste
        if (currentAds < maxAds)
            verTime = verificationTime * 3f;
        else
            verTime = verificationTime;


        if (!verificationStarted)
        {
            StartCoroutine(AdWaitTimer());
            verificationStarted = true;
        }
    }

    public void StopVerificationTimer() => StopCoroutine(AdWaitTimer());


    IEnumerator AdWaitTimer()
    {
        Debug.Log("Time Count Started");

        yield return new WaitForSeconds(verTime); // verification time
        verificationStarted = false;

        if (adScript.rewardedAvailable)
            yield return null;
        else if (currentAds == 0)
            StartVerificationTimer();
        else
            CountDownOn();

        yield return null;
    }


    private void CountDownOn()
    {
        Debug.Log("Counter On");
        textBubblesLeft.text = "No more bubbles, come back in:";
        timeCountdown = (hours * 3600) + (minutes * 60) + seconds; // calculate countdown time into seconds
        InvokeRepeating("TimerCounter", 0f, 1f);
        counterStarted = true;
        timerText.enabled = true;
        sliderImage.fillAmount = 0f;
        sliderImage.enabled = false;
        currentAds = 0;
        PopBubbles();
    }

    private void ContinueCountDown()
    {
        textBubblesLeft.text = "No more bubbles, come back in:";
        InvokeRepeating("TimerCounter", 0f, 1f);
        counterStarted = true;
        timerText.enabled = true;
        sliderImage.fillAmount = 0f;
        sliderImage.enabled = false;
        currentAds = 0;
    }
    

    private void TimerCounter()
    {
        if (counterStarted)
        {
            timeCountdown -= 1;
            DisplayTimer();

            if (timeCountdown <= 0f)
            {
                counterStarted = false;
                timerText.enabled = false;
                sliderImage.enabled = true;
                sliderImage.fillAmount = 1f;
                textBubblesLeft.text = "Bubbles left:";


                CancelInvoke("TimerCounter");
                CreateNewBubbles();
            }
        }
    }


    int hrs;
    int min;
    int sec;
    private void DisplayTimer()
    {
        hrs = Mathf.FloorToInt(timeCountdown / 3600);
        min = Mathf.FloorToInt(timeCountdown / 60) % 60;
        sec = timeCountdown % 60;

        timerText.text = string.Format("{0:D2}:{1:D2}:{2:D2}", hrs, min, sec);
        
    }


    private void RetrieveTimerData()
    {
        Debug.Log("Retrieve Timer Data!");

        if (PlayerPrefs.HasKey("BubbleTimer") && PlayerPrefs.GetInt("BubbleTimer") > 0)
        {
            timeCountdown = PlayerPrefs.GetInt("BubbleTimer");
        }

        if (PlayerPrefs.HasKey("PlayerLeftTime"))
        {
            long temp = Convert.ToInt64(PlayerPrefs.GetString("PlayerLeftTime"));
            DateTime oldDate = DateTime.FromBinary(temp);
            TimeSpan absentSpan = DateTime.Now - oldDate;
            Debug.Log(absentSpan);
            timeCountdown -= (absentSpan.Hours * 3600) + (absentSpan.Minutes * 60) + absentSpan.Seconds;
        }
    }


    //Bubbles part
    private void CreateNewBubbles()
    {//comment
        //luckyPrizesMNG.RenewBubbles();
        Debug.Log("New Bubbles!");
    }

    private void PopBubbles()
    {//comment
        //luckyPrizesMNG.PopAllBubbles();
        Debug.Log("Pop Bubbles!");
    }


    private void OnApplicationPause(bool pause)
    {
        //PlayerPrefs.SetInt("BubbleTimer", timeCountdown);
        //PlayerPrefs.SetString("PlayerLeftTime", DateTime.Now.ToBinary().ToString());
        //Debug.Log("Saved TimerCountdown: " + timeCountdown);
        //Debug.Log("Saved LeftTime: " + DateTime.Now.ToBinary().ToString());
    }

    // Game states
    void OnApplicationQuit()
    {
        //PlayerPrefs.SetInt("BubbleTimer", timeCountdown);
        //PlayerPrefs.SetString("PlayerLeftTime", DateTime.Now.ToBinary().ToString());
        //Debug.Log("Saved TimerCountdown: " + timeCountdown);
        //Debug.Log("Saved LeftTime: " + DateTime.Now.ToBinary().ToString());

    }
}
