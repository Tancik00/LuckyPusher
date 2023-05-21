using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;

public class WithdrawScript : MonoBehaviour
{
    public Image flagImage;
    public int flagID;
    public Text nicknameText;
    public Text moneyText;
    public Image giftCard;
    public Text timeofWithdraw;
    public DateTime dateTimeOfWithdraw;

    Color yelow = new Color(1f, 0.772f, 0.152f);
    Color blue = new Color(0.262f, 0.313f, 0.623f);
    

    public void spawnedItem()
    {
        GetComponent<Image>().color = yelow;
        StartCoroutine(turnBlue());
    }
    

    IEnumerator turnBlue()
    {
        for (int i = 0; i < 50; i++)
        {
            yield return new WaitForSeconds(0.05f);
            Color newColor =  Color.Lerp(GetComponent<Image>().color, blue, 0.08f);
            GetComponent<Image>().color = newColor;// Color.blue;
        }
        GetComponent<Image>().color = blue;
    }

    private void OnEnable()
    {
        GetComponent<Image>().color = blue;
    }

}
