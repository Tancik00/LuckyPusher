using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PusherScript : MonoBehaviour
{

    [Header("Lerp Position")]
    public bool isLerpingPosition;
    public bool isImpulseLerp;

    public Vector3 periodicFirstPosition = new Vector3(0.155f,-3.521f, 9.588f);
    public Vector3 periodicSecondPosition = new Vector3(0.155f, -3.521f, 10.037f);

    public Vector3 fullPosition = new Vector3(0.155f, -3.521f, 10.8f);
    public Vector3 currentPosition;


    private float lerpTimer;
    public float lerpSpeed;
    public bool lerpingBack;

    private bool returnToInitial;
    private bool goFullWay;
    public bool removingBegan;


    private void Start()
    {
        lerpSpeed = 0.5f;
    }

    private void FixedUpdate()
    {
        

        if (!removingBegan)
        {
            LerpPosition();
        }
        if(returnToInitial)
        {
            ReturnBackToStart();
        }            
        
        if(goFullWay)
        {
            GoUntilEnd();
        }

    }


    private void LerpPosition()
    {
        if (!lerpingBack)
        {
            lerpTimer += Time.fixedDeltaTime * lerpSpeed;
            transform.position = Vector3.Lerp(periodicFirstPosition, periodicSecondPosition, lerpTimer);
            if (lerpTimer >= 1f)
            {
                transform.position = periodicSecondPosition;
                lerpingBack = true;
                lerpTimer = 0f;
            }
        }
        else
        {
            lerpTimer += Time.fixedDeltaTime * lerpSpeed;
            transform.position = Vector3.Lerp(periodicSecondPosition, periodicFirstPosition, lerpTimer);
            if (lerpTimer >= 1f)
            {
                transform.position = periodicFirstPosition;
                lerpingBack = false;
                lerpTimer = 0f;
            }
        }
    }

    private void ReturnBackToStart()
    {
        lerpTimer += Time.fixedDeltaTime * lerpSpeed;
        transform.position = Vector3.Lerp(currentPosition, periodicFirstPosition, lerpTimer);
        if (lerpTimer >= 1f)
        {
            transform.position = periodicFirstPosition;
            returnToInitial = false;
            lerpTimer = 0f;
        }
    }

    private void GoUntilEnd()
    {
        lerpTimer += Time.fixedDeltaTime * lerpSpeed;
        transform.position = Vector3.Lerp(currentPosition, fullPosition, lerpTimer);
        if (lerpTimer >= 1f)
        {
            transform.position = fullPosition;
            goFullWay = false;
            lerpTimer = 0f;
        }
    }

    public void RemoveAllCoins()
    {
        StartCoroutine("PushAllCoins");
    }

    IEnumerator PushAllCoins()
    {
        removingBegan = true;
        lerpSpeed = 0.3f;

        lerpTimer = 0;
        currentPosition = transform.position;
        returnToInitial = true;
        
        yield return new WaitForSeconds(5f);

        lerpTimer = 0;
        currentPosition = transform.position;
        goFullWay = true;

        yield return new WaitForSeconds(5f);

        lerpTimer = 0;
        currentPosition = transform.position;
        returnToInitial = true;
        lerpSpeed = 0.5f;


        yield return null;
    }
}
