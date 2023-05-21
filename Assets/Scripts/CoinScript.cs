using UnityEngine.Audio;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;

public class CoinScript : MonoBehaviour
{
    private GameObject CoinsParent;
    //private ShakeCoins shakeScript;
    public string nameKey = "name";
    //public Texture coinTexture;

    public bool bigCoin;
    public bool specialCoin;
    public CoinsData coinsDataScript;
    public bool hitGround;
    public bool hitSomething;


    private void OnCollisionEnter(Collision collision)
    {
        if (!hitSomething)
        {
            AudioManager.instance.Play("CoinFall");
            hitSomething = true;
        }

        if (!hitGround)
        {
            if (collision.gameObject.CompareTag("ClickPlane"))
            {
                return;
            }
            else
            {
                hitGround = true;

                if (bigCoin)
                {
                    Taptic.Heavy();
                    AudioManager.instance.Play("BigCoin");
                    coinsDataScript.CoinsJump();
                    //Debug.Log("Hit Ground!");
                    
                }
                else
                {
                    //Debug.Log("Medium Tap");
                    Taptic.Medium();
                }
            }
        }
    }

    

    private void OnEnable()
    {
        CoinsParent = GameObject.FindGameObjectWithTag("CoinsParent");
        coinsDataScript = CoinsParent.GetComponent<CoinsData>();

        transform.parent = CoinsParent.transform;
        coinsDataScript.AddCoinToList(transform);

        switch (gameObject.tag)
        {
            case "Coin1":
                coinsDataScript.AddCoin1ToList(transform);
                break;

            case "Coin5":
                coinsDataScript.AddCoin5ToList(transform);
                break;

            case "Coin10":
                coinsDataScript.AddCoin10ToList(transform);
                break;

            case "Coin50":
                coinsDataScript.AddCoin50ToList(transform);
                break;

            case "Coin100":
                coinsDataScript.AddCoin100ToList(transform);
                break;

            case "Coin500":
                coinsDataScript.AddCoin500ToList(transform);
                break;

            case "dollarMonede":
                coinsDataScript.AddDollarCoinToList(transform);
                break;

            case "ShakeMonede":
                if (nameKey == "Chest")
                {
                    coinsDataScript.AddChestToList(transform);
                }
                else
                {
                    coinsDataScript.AddBigCoinToList(transform);
                }
                
                break;

            case "Fruits":
                coinsDataScript.AddFruitToList(transform);
                break;

            default:
                Debug.Log("Something is wrong with coins!");
                break;

        }
    }

    private void OnDisable()
    {
        coinsDataScript.RemoveCoinFromList(transform);



        switch (gameObject.tag)
        {
            case "Coin1":
                coinsDataScript.RemoveCoin1FromList(transform);
                break;

            case "Coin5":
                coinsDataScript.RemoveCoin5FromList(transform);
                break;

            case "Coin10":
                coinsDataScript.RemoveCoin10FromList(transform);
                break;

            case "Coin50":
                coinsDataScript.RemoveCoin50FromList(transform);
                break;

            case "Coin100":
                coinsDataScript.RemoveCoin100FromList(transform);
                break;

            case "Coin500":
                coinsDataScript.RemoveCoin500FromList(transform);
                break;

            case "dollarMonede":
                coinsDataScript.RemoveDollarCoinFromList(transform);
                break;

            case "ShakeMonede":
                if (nameKey == "Chest")
                {
                    coinsDataScript.RemoveChestFromList(transform);
                }
                else
                {
                    coinsDataScript.RemoveBigCoinFromList(transform);
                }
                break;

            case "Fruits":
               // coinsDataScript.RemoveFruitFromList(transform);
                break;
            default:
                Debug.Log("Something is wrong with coins!");
                break;

        }
    }




}
