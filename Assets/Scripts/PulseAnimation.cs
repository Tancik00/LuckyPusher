using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
 
public class PulseAnimation : MonoBehaviour
{
    // Grow parameters
    public float approachSpeed = 0.02f;
    public float growthBound = 2f;
    public float shrinkBound = 0.5f;
    private float currentRatio = 1;

    // The text object we're trying to manipulate

    // And something to do the manipulating
    private Coroutine routine;
    private bool keepGoing = true;
    private bool closeEnough = false;
    private Button btn;

    private Vector3 newScale;
    private float scaleSize;
    public float scaleRatio = 1f;
    public float periodRatio = 1f;
    
    // Attach the coroutine
    void Start()
    {
       // routine = StartCoroutine(Pulse());
        btn = GetComponent<Button>();
    }

    private void LateUpdate()
    {
        if(btn.interactable)
        {
            scaleSize = Mathf.Sin(Time.fixedTime * periodRatio)* scaleRatio;
            newScale.x = scaleSize;
            newScale.y = scaleSize;
            transform.localScale = newScale + Vector3.one;
        }
        else
        {
            transform.localScale = Vector3.one;
        }
    }


    IEnumerator Pulse()
    {
        while (keepGoing)
        {
            while (this.currentRatio != this.growthBound)
            {
                currentRatio = Mathf.MoveTowards(currentRatio, growthBound, approachSpeed);

                transform.localScale = Vector3.one * currentRatio;

                yield return new WaitForEndOfFrame();
            }

            // Shrink for a few seconds
            while (this.currentRatio != this.shrinkBound)
            {
                currentRatio = Mathf.MoveTowards(currentRatio, shrinkBound, approachSpeed);

                transform.localScale = Vector3.one * currentRatio;

                yield return new WaitForEndOfFrame();
            }
            while (!btn.interactable)
            {
                yield return new WaitForEndOfFrame();
            }
        }
    }
}