using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinsParentScript : MonoBehaviour
{
    public bool isJumped;
    public List<Transform> coinList = new List<Transform>();


    public void CoinsJump()
    {
        if (!isJumped)
        {
            Debug.Log(isJumped);

            isJumped = true;
            transform.position = new Vector3(0.2080875f, -2.757822f, 11.50257f);
            /*lerpTimer += lerpSpeed * Time.deltaTime;
            CoinsParent.transform.position = Vector3.Lerp(startPos, endPos, lerpTimer);
            if (lerpTimer >= 1f)
            {
                isJumped = false;
                lerpTimer = 0f;
            }*/
        }
    }

    public void AddCoinToList(Transform coinTransform)
    {
        coinList.Add(coinTransform);
    }

    public void RemoveCoinFromList(Transform coinTransform)
    {
        coinList.Remove(coinTransform);
    }


}
