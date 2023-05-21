using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SinosoidMoving : MonoBehaviour
{
    float floaingPower = 0.6f;
    float timer = 1;
    private Vector3 _startPosition;
    RectTransform transf;


    private void Start()
    {
        transf = GetComponent<RectTransform>();
        timer = Random.Range(0, 10);
        _startPosition = transf.position;
    }


    void FixedUpdate()
    {
        transf.position = transf.position + new Vector3(0.0f, Mathf.Sin(Time.time + timer) * floaingPower, 0.0f);
    }
}
