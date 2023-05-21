using System;
using System.Collections;
//using MergeFactory;
//using Mindravel.UI;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class WithdrawController : MonoBehaviour
{
   private static WithdrawController _instance;
   public static WithdrawController Instance
   {
      get
      {
         if (_instance == null)
         {
            _instance = FindObjectOfType<WithdrawController>();
         }

         return _instance;
      }
   }

   public PrizeWallController prizeWallController;
   public CoinCounter coinCounter;
   public Text cashTxt;
   //public Text cashTxtOnMainScreen;
   public Text BTCText;
   //public Transform winnerNotificationParent;
   //public GameObject winnerNotification;
   [HideInInspector] public float _timeInSec;
   
   private void Start()
   {
      //cashTxtOnMainScreen.text = coinCounter.GetDollarScoreCount().ToString("F2");
      //GetRandomTime();
   }

   /*private void Update()
   {
      if (_timeInSec > 0f)
      {
         _timeInSec -= Time.deltaTime;
         if (_timeInSec < 0)
         {
            Instantiate(winnerNotification, winnerNotificationParent);
         }
      }
   }*/

   public void UpdateCashText()
   {
      cashTxt.text = "<size=10>$</size>" + coinCounter.GetDollarScoreCount().ToString("F2");
      //BTCText.text = DataProvider.instance.gameData.BTC.ToString();
      
      //******prizeWallController.SetCashRewardListValues(10, prizeWallController.cashRewardListItemParent);
   }

   public void UpdateCashTextOnMainScreen()
   {
      //cashTxtOnMainScreen.text = coinCounter.GetDollarScoreCount().ToString("F2");
   }

   /*public void GetRandomTime()
   {
      _timeInSec = Random.Range(30, 120);
   }*/

   public void Transfer()
   {
      /*comment GUIManager.Instance.OpenScreenExplicitly(ScreenName.MessagePanel);
      GUIManager.Instance.CURRENTPANEL.GetComponent<MessagePanel>().ShowMessage("", "YOU NEED TO COLLECT THE MINIMUM AMOUNT", String.Empty, null, null, false);*/
   }
}
