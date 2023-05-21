using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;



public class LeaderboardScript : MonoBehaviour
{
    public LeaderScript[] playersList;
    public WithdrawScript[] withdrawList;
    

    public Sprite[] flags;
    public Sprite unknownFlag;
    public Color[] crownLevel;

    // list of names

    
    private int nameID;
    private float maxCoins;
    private float maxDollars;

    public bool topPanelOn;
    public bool withdrawPanelOn;

    // leaderboard user names
    public string userString;
    public string withdrawString;
    public string[] userNames;
    public string[] withdrawNames;
    public List<string> leaderboardUsers = new List<string>();
    public List<string> withdrawUsers = new List<string>();
    private float userCoins;
    private float userDollars;
    private int flagID;
    private string guestName;

    public bool playersMode;
    public bool withdrawMode;

    private float withdrawDollars;


    //player info


    public LeaderboardMenu leaderParentScript;


    // Start is called before the first frame update
    void Awake()
    {
        if (playersMode)
            playersList = GetComponentsInChildren<LeaderScript>();
        if (withdrawMode)
            withdrawList = GetComponentsInChildren<WithdrawScript>();



        leaderParentScript = GetComponentInParent<LeaderboardMenu>();
    }


    // TOP 100 PANEL
    // Initialize leaderboard on first start of game
    public void LeaderboardInitialize()
    {
        maxCoins = UnityEngine.Random.Range(1500000, 2000000);
        maxDollars = UnityEngine.Random.Range(200f, 250f);
        Debug.Log("playersList.Length!" + playersList.Length);

        for (int i = 0; i < playersList.Length; i++)
        {
            /*
            // Crown icon update
            if (i < 3)
                playersList[i].crownImage.color = crownLevel[i];
            else
                playersList[i].crownImage.color = Vector4.zero;
            */

            flagID = UnityEngine.Random.Range(0, flags.Length);
            playersList[i].flagImage.sprite = flags[flagID];

            // Name update
            nameID = UnityEngine.Random.Range(0, leaderParentScript.nickNamesDatabase.Count);
            playersList[i].nameText.text = "" + leaderParentScript.nickNamesDatabase[nameID];//i + 1 + "." + leaderParentScript.nickNamesDatabase[nameID];
            playersList[i].Number.text = (1 + i).ToString();


            // Coins update
            if (maxCoins > 1000 && maxCoins < 1000000)
                playersList[i].coinCountText.text = ((int)(maxCoins / 1000)).ToString() + "K";
            else if (maxCoins > 1000000)
                playersList[i].coinCountText.text = (maxCoins / 1000000).ToString("0.00") + "M";

            playersList[i].cashCountText.text = maxDollars.ToString("0.00$");

            // Player data save
            PlayerPrefs.SetFloat(leaderParentScript.nickNamesDatabase[nameID] + "_Coins", maxCoins);
            PlayerPrefs.SetFloat(leaderParentScript.nickNamesDatabase[nameID] + "_Cash", maxDollars);
            PlayerPrefs.SetInt(leaderParentScript.nickNamesDatabase[nameID] + "_Flag", flagID);

            if (i == 0)
                userString += leaderParentScript.nickNamesDatabase[nameID];
            else
                userString += " " + leaderParentScript.nickNamesDatabase[nameID];


            maxCoins *= UnityEngine.Random.Range(0.985f, 0.999f);
            maxDollars *= UnityEngine.Random.Range(0.98f, 0.999f);
            leaderParentScript.nickNamesDatabase.Remove(leaderParentScript.nickNamesDatabase[nameID]);
        }

        PlayerPrefs.SetString("UserList", userString);
        PlayerPrefs.SetInt("Leaderboard", 1);
        //        Debug.Log("User String Created : " + userString);


    }


    // Get the name list from initialization
    public void RetrieveUserNames()
    {
        if (PlayerPrefs.HasKey("UserList"))
        {
            userString = PlayerPrefs.GetString("UserList");
            //            Debug.Log("User String" + userString);
            userNames = userString.Split(" "[0]);

            for (int i = 0; i < userNames.Length; i++)
            {
                leaderboardUsers.Add(userNames[i]);
            }
        }
    }

    // Get the name list from initialization
    public void RetrieveWithdrawNames()
    {
        if (PlayerPrefs.HasKey("WithdrawList"))
        {
            withdrawString = PlayerPrefs.GetString("WithdrawList");
            //            Debug.Log("User String" + userString);
            withdrawNames = withdrawString.Split(" "[0]);

            for (int i = 0; i < withdrawNames.Length; i++)
            {
                withdrawUsers.Add(withdrawNames[i]);
            }
        }
    }

    // Get TOP 100 PANEL
    public void GetLeaderboardScores()
    {
        for (int i = 0; i < playersList.Length; i++)
        {
            /*
            // Crown icon update
            if (i < 3)
                playersList[i].crownImage.color = crownLevel[i];
            else
                playersList[i].crownImage.color = Vector4.zero;
            */
        }

        for (int i = 0; i < leaderboardUsers.Count; i++)
        {
            userCoins = PlayerPrefs.GetFloat(leaderboardUsers[i] + "_Coins");
            userDollars = PlayerPrefs.GetFloat(leaderboardUsers[i] + "_Cash");
            playersList[i].nameText.text = "" + leaderboardUsers[i];
            playersList[i].Number.text = (1 + i).ToString();

            playersList[i].flagImage.sprite = flags[PlayerPrefs.GetInt(leaderboardUsers[i] + "_Flag")];

            if (userCoins > 1000 && userCoins < 1000000)
                playersList[i].coinCountText.text = ((int)(userCoins / 1000)).ToString() + "K";
            else if (userCoins > 1000000)
                playersList[i].coinCountText.text = (userCoins / 1000000).ToString("0.00") + "M";

            playersList[i].cashCountText.text = userDollars.ToString("0.00$");


        }
    }

    // Update daily and sorting by score
    public void LeaderboardDailyUpdate()
    {
        for (int i = 0; i < playersList.Length; i++)
        {
            /*
            // Crown icon update
            if (i < 3)
                playersList[i].crownImage.color = crownLevel[i];
            else
                playersList[i].crownImage.color = Vector4.zero;
                */
        }

        for (int i = 0; i < userNames.Length; i++)
        {

            playersList[i].nameText.text = "" + userNames[i];
            playersList[i].Number.text = (1 + i).ToString();

            userCoins = PlayerPrefs.GetFloat(userNames[i] + "_Coins") * UnityEngine.Random.Range(1.001f, 1.05f);
            userDollars = PlayerPrefs.GetFloat(userNames[i] + "_Cash") * UnityEngine.Random.Range(1.001f, 1.05f);
            playersList[i].flagImage.sprite = flags[PlayerPrefs.GetInt(userNames[i] + "_Flag")];


            if (userCoins > 1000 && userCoins < 1000000)
                playersList[i].coinCountText.text = ((int)(userCoins / 1000)).ToString() + "K";
            else if (userCoins > 1000000)
                playersList[i].coinCountText.text = (userCoins / 1000000).ToString("0.00") + "M";

            playersList[i].cashCountText.text = userDollars.ToString("0.00$");


        }
    }

    public string GuestUserGenerator()
    {
        return "user" + UnityEngine.Random.Range(100000, 999999);

    }

    //****************************** Withdraw part ******************************

    // set up wen game begin
    public void WithdrawInitialize()
    {
        for (int i = 0; i < withdrawList.Length; i++)
        {
            DateTime calculate = DateTime.Now - TimeSpan.FromMinutes(i);
            setUpTheWithdrawPanel(withdrawList[i], calculate);
        }
        PlayerPrefs.SetString("WithdrawList", withdrawString);
        PlayerPrefs.SetInt("WithdrawInitialization", 1);
    }

    // update last row and put it first
    public void UpdateNewWithdrawPanel(DateTime timeNow)
    {
        WithdrawScript tempScript = withdrawList[withdrawList.Length - 1];

        for (int i = withdrawList.Length-1; i > 0 ; i--)
        {
            withdrawList[i] = withdrawList[i - 1];
        }
        withdrawList[0] = tempScript;

        tempScript.spawnedItem();

        tempScript.transform.SetSiblingIndex(0);
        setUpTheWithdrawPanel(tempScript, timeNow);
    }

    // generate withdraw information
    void setUpTheWithdrawPanel(WithdrawScript tempScript, DateTime timeofWith)
    {
        // flag
        flagID = UnityEngine.Random.Range(0, flags.Length);
        tempScript.flagID = flagID;
        tempScript.flagImage.sprite = flags[flagID];

        // date time wen the with was made
        tempScript.dateTimeOfWithdraw = timeofWith;
        tempScript.timeofWithdraw.text = getrelativeTime(timeofWith);
        

        // Name update
        if (UnityEngine.Random.Range(0f, 100f) > 10f)
        {
            nameID = UnityEngine.Random.Range(0, leaderParentScript.nickNamesDatabase.Count);
            tempScript.nicknameText.text = leaderParentScript.nickNamesDatabase[nameID];
        }
        else
            tempScript.nicknameText.text = GuestUserGenerator();


        // withdawn sum
        int rndNmb = UnityEngine.Random.Range(0, 10);
        if (rndNmb == 0)
        {
            tempScript.moneyText.text = "$10000.00";
        }
        else if (rndNmb == 1 || rndNmb == 2)
        {
            tempScript.moneyText.gameObject.SetActive(false);
            tempScript.giftCard.gameObject.SetActive(true);
        }
        else
        {
            withdrawDollars = UnityEngine.Random.Range(100f, 125f);
            tempScript.moneyText.text = withdrawDollars.ToString("$0.00");
        }
    }


    // load form player prefs
    public void GetWithdrawFromPrefs()
    {
        for (int i = 0; i < withdrawList.Length; i++)
        {
            withdrawList[i].nicknameText.text = PlayerPrefs.GetString(i + "_WithdrawName");

            withdrawList[i].flagID = PlayerPrefs.GetInt(i + "_WithdrawFlag");
            withdrawList[i].flagImage.sprite = flags[withdrawList[i].flagID];

            withdrawList[i].moneyText.text = PlayerPrefs.GetString(i + "_WithdrawAmount");

            bool temp = (PlayerPrefs.GetInt(i + "_WithdrawGiftCard") > 0) ? true : false;

            withdrawList[i].giftCard.gameObject.SetActive(temp);
            withdrawList[i].moneyText.gameObject.SetActive(!temp);

            string previousTime = PlayerPrefs.GetString(i + "_WithdrawDateTime");
            string[] timeValuesArray = previousTime.Split(" "[0]);   // YYYY MM DD HH MM SS
            int deltaYear = int.Parse(timeValuesArray[0]);
            int deltaMonth = int.Parse(timeValuesArray[1]);
            int deltaDay = int.Parse(timeValuesArray[2]);
            int deltaHour = int.Parse(timeValuesArray[3]);
            int deltaMinute = int.Parse(timeValuesArray[4]);
            int deltaSeconds = int.Parse(timeValuesArray[5]);
            withdrawList[i].dateTimeOfWithdraw = new DateTime(deltaYear, deltaMonth, deltaDay, deltaHour, deltaMinute, deltaSeconds);
            withdrawList[i].timeofWithdraw.text = getrelativeTime(withdrawList[i].dateTimeOfWithdraw);
        }
    }


    private void OnDisable()
    {
        saveWitdrew();

        StopCoroutine(recalculateWithraw);
    }

    // save to player prefs
    void saveWitdrew()
    {
        Debug.Log("Saving Withdraws ");
        for (int i = 0; i < withdrawList.Length; i++)
        {
            
            PlayerPrefs.SetString(i + "_WithdrawName", withdrawList[i].nicknameText.text);
            PlayerPrefs.SetString(i + "_WithdrawAmount", withdrawList[i].moneyText.text);
            PlayerPrefs.SetInt(i +"_WithdrawGiftCard", (withdrawList[i].giftCard.gameObject.active) ? 1 : 0);
            PlayerPrefs.SetInt(i + "_WithdrawFlag", withdrawList[i].flagID);

            int seconds = withdrawList[i].dateTimeOfWithdraw.Second;
            int minutes = withdrawList[i].dateTimeOfWithdraw.Minute;
            int hours = withdrawList[i].dateTimeOfWithdraw.Hour;
            int day = withdrawList[i].dateTimeOfWithdraw.Day;
            int month = withdrawList[i].dateTimeOfWithdraw.Month;
            int year = withdrawList[i].dateTimeOfWithdraw.Year;
            PlayerPrefs.SetString(i + "_WithdrawDateTime", year + " " + month + " " + day + " " + hours + " " + minutes + " " + seconds);

        }
    }


    private void OnEnable()
    {
        recalculateWithrewTime();

        recalculateWithraw = StartCoroutine(loopForWithrewTimer());
    }

    public void recalculateWithrewTime()
    {
        foreach (var item in withdrawList)
        {
            item.timeofWithdraw.text = getrelativeTime(item.dateTimeOfWithdraw);
        }
    }

    Coroutine recalculateWithraw;
    IEnumerator loopForWithrewTimer()
    {
        while (true)
        {
            yield return new WaitForSeconds(10);
            recalculateWithrewTime();
        }
    }


    const int SECOND = 1;
    const int MINUTE = 60 * SECOND;
    const int HOUR = 60 * MINUTE;
    const int DAY = 24 * HOUR;
    const int MONTH = 30 * DAY;

    public string getrelativeTime(DateTime yourDate)
    {
        var ts = new TimeSpan(DateTime.Now.Ticks - yourDate.Ticks);
        double delta = Math.Abs(ts.TotalSeconds);


        if (delta < 10 * SECOND)
            return "Just Now";

        if (delta < 1 * MINUTE)
            //return ts.Seconds == 1 ? "one second ago" : ts.Seconds + " seconds ago";
            return "Less than a minute ago";

        if (delta < 2 * MINUTE)
            return "A minute ago";

        if (delta < 45 * MINUTE)
            return ts.Minutes + " minutes ago";

        if (delta < 90 * MINUTE)
            return "an hour ago";

        if (delta < 24 * HOUR)
            return ts.Hours + " hours ago";

        if (delta < 48 * HOUR)
            return "yesterday";

        if (delta < 30 * DAY)
            return ts.Days + " days ago";

        if (delta < 12 * MONTH)
        {
            int months = Convert.ToInt32(Math.Floor((double)ts.Days / 30));
            return months <= 1 ? "one month ago" : months + " months ago";
        }
        else
        {
            int years = Convert.ToInt32(Math.Floor((double)ts.Days / 365));
            return years <= 1 ? "one year ago" : years + " years ago";
        }
    }

}
