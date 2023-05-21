using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColectionParticleSetUp : MonoBehaviour
{
    public Texture OneCoin;
    public Texture FiveCoin;
    public Texture TenCoin;
    public Texture FiftyCoin;
    public Texture OneHundredCoin;
    public Texture FiveHundredCoin;

    public Texture dollarMonede;


    public GameObject coinThatFly;

    public Transform dolarPlace;
    public Transform coinsPlace;

    private GameObject coinCountPosition;
    private GameObject dollarCountPosition;
    private Transform destinationTarget;
    private float lerpValue;
    private Material material;

    private float timer;
    private float lerpTimer;
    private GameObject cameraObject;


    private void OnEnable()
    {
        timer = 0;
        lerpTimer = 0;
    }


    private void Awake()
    {
        GameObject GM = GameObject.FindGameObjectWithTag("GameManager");
        GameManager gmscript = GM.GetComponent<GameManager>();
        dolarPlace = gmscript.dolarReferencePosition;
        coinsPlace = gmscript.coinReferencePosition;
        coinCountPosition = GameObject.FindGameObjectWithTag("CoinCountPosition");
        dollarCountPosition = GameObject.FindGameObjectWithTag("DollarCountPosition");

        cameraObject = Camera.main.gameObject;
    }


    private void Update()
    {
        transform.LookAt(cameraObject.transform);
        timer += Time.deltaTime;
        if (timer < 1f)
        {
            transform.position += Vector3.up * Time.deltaTime * 0.7f;
        }
        else if (timer >= 1f && timer < 1.6f)
        {
            return;
        }
        else if (timer >= 1.6f)
        {
            if(destinationTarget != null)
            {
                lerpTimer += Time.deltaTime * 0.05f;
                transform.position = Vector3.Lerp(transform.position, destinationTarget.position, lerpTimer);
            }
            
        }

    }


    public void settexture(string textureName)
    {
        if (coinThatFly != null)
        {
            Vector3 placeParticleExplode = transform.position + new Vector3(0, 1, 0);
            if (textureName == "dollarMonede")
            {
                dolarPlace.position = new Vector3(dolarPlace.position.x, dolarPlace.position.y, placeParticleExplode.z);
                coinThatFly.transform.rotation = Quaternion.LookRotation(dolarPlace.position - placeParticleExplode);
            }
            else
            {
                coinsPlace.position = new Vector3(coinsPlace.position.x, coinsPlace.position.y, placeParticleExplode.z);
                coinThatFly.transform.rotation = Quaternion.LookRotation(coinsPlace.position - placeParticleExplode);
            }
        }
        


        material = GetComponent<Renderer>().material;
        switch (textureName)
        {
            case "Coin1":
                material.SetTexture("_MainTex", OneCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "Coin5":
                material.SetTexture("_MainTex", FiveCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "Coin10":
                material.SetTexture("_MainTex", TenCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "Coin50":
                material.SetTexture("_MainTex", FiftyCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "Coin100":
                material.SetTexture("_MainTex", OneHundredCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "Coin500":
                material.SetTexture("_MainTex", FiveHundredCoin);
                destinationTarget = coinCountPosition.transform;
                break;
            case "dollarMonede":
                material.SetTexture("_MainTex", dollarMonede);
                destinationTarget = dollarCountPosition.transform;
                break;

            default:
                material.SetTexture("_MainTex", OneCoin);
                break;
        }
    }

   

}
