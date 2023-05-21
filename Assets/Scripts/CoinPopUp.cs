using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinPopUp : MonoBehaviour
{
    public SpriteRenderer numberSpriteRenderer;
    public Sprite[] numberSprites;

    public GameObject flipAnimation;

    private float timer;
    private float lerpTimer;
    private GameObject coinCountPosition;
    private GameObject cameraObject;

 

    // Start is called before the first frame update
    void Start()
    {
        cameraObject = Camera.main.gameObject;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.LookAt(cameraObject.transform);
        if(timer < 1f)
        {
            transform.position += Vector3.up * Time.fixedDeltaTime * 0.01f;
        }else if(timer >=1f && timer < 1.2f)
        {
            return;
        }else if(timer > 1.2f)
        {
            lerpTimer += Time.fixedDeltaTime * 0.02f;
            transform.position = Vector3.Lerp(transform.position, coinCountPosition.transform.position, lerpTimer);
        }
        
    }

    
}
