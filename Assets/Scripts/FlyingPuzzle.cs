using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class FlyingPuzzle : MonoBehaviour
{
   private static FlyingPuzzle _instance;

   public static FlyingPuzzle Instance
   {
      get
      {
         if (_instance == null)
         {
            _instance = FindObjectOfType<FlyingPuzzle>();
         }

         return _instance;
      }
   }

   public Transform wayPoints;
   public GameObject bubblePref;
   public List<Transform> points;
   [HideInInspector] public Sprite prizeSprite;
   [HideInInspector] public int prizeID;
   [HideInInspector] public float timeInSec = 5f;
   [HideInInspector] public float timeInSecForGridBubble = 180f;

   public LuckyPrizesManager luckyPrizesManager;
   public ads ads;
   public Prizes[] prizeData;

   private GameObject _bubblePuzzle;
   private GameObject _gridBubblePuzzle;
   private bool AdsEnabled;

   private void Awake()
   {
      AdsEnabled = true;

#if UNITY_EDITOR
      AdsEnabled = false;
#endif
   }

   private void Start()
   {
      prizeData = luckyPrizesManager.prizeDatabase;
      for (int i = 0; i < wayPoints.childCount; i++)
      {
         points.Add(wayPoints.GetChild(i));
      }

      timeInSec = 5f;
      timeInSecForGridBubble = 180f;
   }

   private void Update()
   {
      if (timeInSec > 0f)
      {
         timeInSec -= Time.deltaTime;
         if (timeInSec < 0)
         {
            _bubblePuzzle = Instantiate(bubblePref, wayPoints.GetChild(0));
         }
      }
   }

   public void SetBubblePuzzleValues()
   {
      var prizeIndex = Random.Range(0, prizeData.Length);
      for (int i = 0; i < prizeData.Length; i++)
      {
         prizeSprite = prizeData[prizeIndex].sprite;
         prizeID = prizeData[prizeIndex].ID;
      }
   }

   public void AddPrizePoints(int prizeID)
   {
      luckyPrizesManager.AddPoints(prizeID);
   }

   public void AddBubblePuzzle()
   {
      _bubblePuzzle.GetComponent<FlyingBubbleController>().AddPuzzle();
   }
   
   public void BubbleClick()
   {
      if (AdsEnabled)
      {
         if (ads.rewardedAvailable)
         {
            ads.ShowRewardVideo("BubblePuzzle_REWARDED");
            ads.wasRequested = true;
            ads.bubblePuzzle = true;
         }
      }
      else
      {
         AddBubblePuzzle();
      }
   }
}
