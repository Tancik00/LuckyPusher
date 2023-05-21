using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FlyingBubbleController : MonoBehaviour
{
   public Image prizeImage;
   public GameObject bubblesEffect;
   public List<Transform> points;
   private bool AdsEnabled;
   private int _prizeID;
   private bool _isCanMoving = true;
   private RectTransform _rectTransf;

   private void Awake()
   {
      AdsEnabled = true;

#if UNITY_EDITOR
      AdsEnabled = false;
#endif
   }

   private void Start()
   {
      points = FlyingPuzzle.Instance.points;
      FlyingPuzzle.Instance.SetBubblePuzzleValues();
      _rectTransf = GetComponent<RectTransform>();
      prizeImage.sprite = FlyingPuzzle.Instance.prizeSprite;
      _prizeID = FlyingPuzzle.Instance.prizeID;
   }

   private int i = 1;

   private void Update()
   {
      if (i < points.Count)
      {
         if (_isCanMoving)
         {
            _rectTransf.position =
               Vector3.Lerp(_rectTransf.position, points[i].position, 0.1f * Time.deltaTime);
         }

         if (Vector3.Distance(_rectTransf.position, points[i].position) <= 0.4f)
         {
            i++;
         }
         
         if (Vector3.Distance(_rectTransf.position, points[points.Count - 1].position) <= 100f)
         {
            FlyingPuzzle.Instance.timeInSec = 60f;
            _isCanMoving = false;
            Destroy(gameObject);
         }
      }
   }

   public void ButtonClick()
   {
      FlyingPuzzle.Instance.BubbleClick();
   }

   public void AddPuzzle()
   {
      FlyingPuzzle.Instance.AddPrizePoints(_prizeID);
      for (int i = 0; i < transform.childCount; i++)
      {
         transform.GetChild(i).gameObject.SetActive(false);
      }

      Instantiate(bubblesEffect, transform);
      StartCoroutine(DestroyObject());
   }

   private IEnumerator DestroyObject()
   {
      yield return new WaitForSeconds(2f);
      DestroyObject(gameObject);
      FlyingPuzzle.Instance.timeInSec = 60f;
   }
}
