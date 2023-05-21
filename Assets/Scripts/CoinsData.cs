using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinsData : MonoBehaviour
{
    //Player Prefs :
    // CoinSpawned - int, if coin structure has been spawned on scene = 1

    [Header("Coin Prefabs")]
    public GameObject coin1Prefab;
    public GameObject coin5Prefab;
    public GameObject coin10Prefab;
    public GameObject coin50Prefab;
    public GameObject coin100Prefab;
    public GameObject coin500Prefab;
    public GameObject coinDollarPrefab;
    public GameObject coinBigPrefab;
    public GameObject chestPrefab;

    public GameObject cherryPrefab;
    public GameObject grapePrefab;
    public GameObject lemonPrefab;
    public GameObject watermelonPrefab;
    public CoinCounter coinCounterScript;
    public GameObject confetyObject;

    //Scripts
    private GameManager GM;
    private GameObject gmObject;
    private CoinsParentScript coinsParent;
    private CameraShake camShake;
    private CoinScript tempCoinScript;
    

    private Animator cameraAnimator;

    public List<Transform> coinList = new List<Transform>();
    public List<Transform> coin1List = new List<Transform>();
    public List<Transform> coin5List = new List<Transform>();
    public List<Transform> coin10List = new List<Transform>();
    public List<Transform> coin50List = new List<Transform>();
    public List<Transform> coin100List = new List<Transform>();
    public List<Transform> coin500List = new List<Transform>();
    public List<Transform> coinBigList = new List<Transform>();
    public List<Transform> chestList = new List<Transform>(); 
    public List<Transform> coinDollarList = new List<Transform>();
    public List<Transform> cherryList = new List<Transform>();
    public List<Transform> grapeList = new List<Transform>();
    public List<Transform> lemonList = new List<Transform>();
    public List<Transform> watermelonList = new List<Transform>();

    [Header("Fruit part")]
    public List<Transform> fruitsList = new List<Transform>();
    public List<GameObject> fruitsPrefabs = new List<GameObject>();
    private CoinScript fruitCoinScript;
    private GameObject emptyFruitObject;
    private bool fruitIDfound;


    public Transform SpawnShowCoinPosition;
    public CoinScript specialCoinScript;

    private float currentTime, maxSaveTimer;

    int coinScore;
    int moneyScore;
    int pocketCoins;
    float buttonTimer;

    //Coin saving part
    private string coinID;
    private string coinPosRot;
    public string[] coinID_Data = new string[2];
    public string[] coinPosRot_Data = new string[6];
    private Rigidbody rb;


    private Transform coinTransform;
    private MeshCollider specialCoinMeshCollider;

    private void Awake()
    {
        GetAndUpdateCoinData();
        maxSaveTimer = 30f;
    }

    void Start()
    {
        gmObject = GameObject.FindGameObjectWithTag("GameManager");
        camShake = gmObject.GetComponent<CameraShake>();
        GM = gmObject.GetComponent<GameManager>();
        cameraAnimator = Camera.main.GetComponent<Animator>();

      
        if(coinList.Count == 0)
        {
            if(!PlayerPrefs.HasKey("StartTower") || PlayerPrefs.GetInt("StartTower") == 0)
            {
                GM.InstantiateSpecialCoinStructure();
                PlayerPrefs.SetInt("StartTower", 1);
            }
            else
            {
                GM.InstantiateSimpleCoinStructure();
            }
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            coinBurn();
        }
        currentTime += Time.deltaTime;
        if (currentTime >= maxSaveTimer)
        {
            currentTime = 0;
            SaveCoinsData();
            //Debug.Log("Saving Coins Data");
        }

    }



    public GameObject bombObjectPrefab;
    Vector3 bombPositionToSpawn = new Vector3(0.15f, -3.493f, 11.38f);



    // BIG BOMB Bonuss
    public void coinBurn()
    {
        //  double777Reward     spinweelcontroler
        // spinWheelScript    in uiman
        GM.gameObject.GetComponent<UIManager>().spinWheelScript.startADoubleReward(TimeControler.Instance.bonusDoubleOnBomb());

        GM.gameObject.GetComponent<UIManager>().closeBigBombPopUp();
        if (coinList.Count == 0)
        {
            return;
        }

        Instantiate(bombObjectPrefab, bombPositionToSpawn, Quaternion.identity);
        AudioManager.instance.Play("BombSound");
        List<Transform> SecondCoinList = new List<Transform>(coinList);
//        Debug.Log("There are " + SecondCoinList.Count+" object in list");
        float temp =  1/ SecondCoinList.Count;
        Debug.Log(temp);
        StartCoroutine(waitalittlebit(SecondCoinList));
        //destroyallcoins(SecondCoinList);
        //StartCoroutine(burnTheCoins(SecondCoinList, temp));
    }

    IEnumerator waitalittlebit(List<Transform> SecondCoinList)
    {
        yield return new WaitForSeconds(1.25f);
        destroyallcoins(SecondCoinList);
        yield return new WaitForSeconds(2.25f);
        GM.GetComponent<UIManager>().spinWheelScript.spawnTower();
    }

    void destroyallcoins(List<Transform> SecondCoinList)
    {
        for (int i = 0; i < SecondCoinList.Count; i++)
        {
            if (SecondCoinList[i] != null)
            {
                coinCounterScript.countTheObject(SecondCoinList[i].gameObject);
                if (Random.Range(1, 100) > 50)
                {
                    Instantiate(confetyObject, SecondCoinList[i].position, Quaternion.identity);
                }
            }
        }
    }


    IEnumerator burnTheCoins(List<Transform> SecondCoinList,float interval)
    {

        for (int i = 0; i < SecondCoinList.Count; i++)
        {
            yield return new WaitForSeconds(interval);

            if(SecondCoinList[i] != null)
            {
                coinCounterScript.countTheObject(SecondCoinList[i].gameObject);
                if (Random.Range(1, 100) > 50)
                {
                    Instantiate(confetyObject, SecondCoinList[i].position, Quaternion.identity);
                }
            }
        }
    }


    //---------------- Add and Remove to list ----------------//
    #region AddRemoveCoins
    //public void Add to default list
    public void AddCoinToList(Transform coinTransform)
    {
        coinList.Add(coinTransform);
        specialCoinScript = coinTransform.GetComponent<CoinScript>();
        if(specialCoinScript.specialCoin)
        {
            coinTransform.parent = SpawnShowCoinPosition;
            
        }
        

    }

    public void RemoveCoinFromList(Transform coinTransform)
    {
        coinList.Remove(coinTransform);
    }


    //public void Add to coin 1 list
    public void AddCoin1ToList(Transform coinTransform)
    {
        coin1List.Add(coinTransform);
    }

    public void RemoveCoin1FromList(Transform coinTransform)
    {
        coin1List.Remove(coinTransform);
    }


    //public void Add to coin 5 list
    public void AddCoin5ToList(Transform coinTransform)
    {
        coin5List.Add(coinTransform);
    }

    public void RemoveCoin5FromList(Transform coinTransform)
    {
        coin5List.Remove(coinTransform);
    }


    //public void Add to coin 10 list
    public void AddCoin10ToList(Transform coinTransform)
    {
        coin10List.Add(coinTransform);
    }

    public void RemoveCoin10FromList(Transform coinTransform)
    {
        coin10List.Remove(coinTransform);
    }


    //public void Add to coin 50 list
    public void AddCoin50ToList(Transform coinTransform)
    {
        coin50List.Add(coinTransform);
    }

    public void RemoveCoin50FromList(Transform coinTransform)
    {
        coin50List.Remove(coinTransform);
    }

    //public void Add to coin 100 list
    public void AddCoin100ToList(Transform coinTransform)
    {
        coin100List.Add(coinTransform);
    }

    public void RemoveCoin100FromList(Transform coinTransform)
    {
        coin100List.Remove(coinTransform);
    }


    //public void Add to coin 500 list
    public void AddCoin500ToList(Transform coinTransform)
    {
        coin500List.Add(coinTransform);
    }

    public void RemoveCoin500FromList(Transform coinTransform)
    {
        coin500List.Remove(coinTransform);
    }


    //public void Add to coin 500 list
    public void AddDollarCoinToList(Transform coinTransform)
    {
        coinDollarList.Add(coinTransform);
    }

    public void RemoveDollarCoinFromList(Transform coinTransform)
    {
        coinDollarList.Remove(coinTransform);
    }


    //public void Add to big coin list
    public void AddBigCoinToList(Transform coinTransform)
    {
        coinBigList.Add(coinTransform);
    }

    public void RemoveBigCoinFromList(Transform coinTransform)
    {
        coinBigList.Remove(coinTransform);
    }

    //public void Add to chest list
    public void AddChestToList(Transform coinTransform)
    {
        chestList.Add(coinTransform);
    }

    public void RemoveChestFromList(Transform coinTransform)
    {
        chestList.Remove(coinTransform);
    }


    //Fruits

    public void AddFruitToList(Transform fruitTransform)
    {
        fruitsList.Add(fruitTransform);
    }

    public void RemoveFruitFromList(Transform fruitTransform)
    {
        string fruitName = fruitsList[fruitsList.IndexOf(fruitTransform)].GetComponent<CoinScript>().nameKey;
        coinID = fruitName + " " + fruitsList.IndexOf(fruitTransform);
        //Debug.Log("Removed Fruit is " + coinID);
        PlayerPrefs.DeleteKey(coinID);
        //fruitsList.Remove(fruitTransform);
        
    }

    #endregion


    public void SaveCoinsData()
    {
        //Save all coins in default list
        /*
        for (int i = 0; i < coinList.Count; i++)
        {
            coinTransform = coinsParent.coinList[i];

            coinID = coinTransform.tag + " " + i;  // Coin type and ID

            coinPosRot = GetPositionRotationString(coinList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
        }
        */

        //Save all 1 coins in coin 1 list
        for (int i = 0; i < coin1List.Count; i++)
        {
            coinTransform = coin1List[i];
            coinID = "Coin1" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin1List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
       

        //Save all 5 coins in coin 5 list
        for (int i = 0; i < coin5List.Count; i++)
        {
            coinTransform = coin5List[i];
            coinID = "Coin5" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin5List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
        

        //Save all 10 coins in coin 10 list
        for (int i = 0; i < coin10List.Count; i++)
        {
            coinTransform = coin10List[i];
            coinID = "Coin10" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin10List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
        

        //Save all 50 coins in coin 50 list
        for (int i = 0; i < coin50List.Count; i++)
        {
            coinTransform = coin50List[i];
            coinID = "Coin50" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin50List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
      

        //Save all 100 coins in coin 100 list
        for (int i = 0; i < coin100List.Count; i++)
        {
            coinTransform = coin100List[i];
            coinID = "Coin100" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin100List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
        

        //Save all 500 coins in coin 500 list
        for (int i = 0; i < coin500List.Count; i++)
        {
            coinTransform = coin500List[i];
            coinID = "Coin500" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coin500List[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }
        

        //Save all dollar coins in coin dollar list
        for (int i = 0; i < coinDollarList.Count; i++)
        {
            coinTransform = coinDollarList[i];
            coinID = "dollarMonede" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coinDollarList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }

        //Save all big coins in coin big list
        for (int i = 0; i < coinBigList.Count; i++)
        {
            coinTransform = coinBigList[i];
            coinID = "ShakeMonede" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(coinBigList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }

        for (int i = 0; i < chestList.Count; i++)
        {
            coinTransform = chestList[i];
            coinID = "Chest" + " " + i;  // Coin type and ID
            coinPosRot = GetPositionRotationString(chestList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
            //Debug.Log(PlayerPrefs.GetString(coinID));
        }

        //Fruits
        //        Debug.Log("Fruits Count " + fruitsList.Count);

        if (fruitsList.Count != 0)
        {
            for (int i = 0; i < fruitsList.Count; i++)
            {
                // aici problema sau verificare null
                if(fruitsList[i] != null)
                {
                    coinTransform = fruitsList[i];
                    string fruitName = fruitsList[i].GetComponent<CoinScript>().nameKey;
                    coinID = fruitName + " " + i;
                    //  Debug.Log("Fruit Shite Saved! " + coinID);
                    coinPosRot = GetPositionRotationString(fruitsList[i]);
                    PlayerPrefs.SetString(coinID, coinPosRot);
                }
                
            }
        }
      

        /*
        for (int i = 0; i < cherryList.Count; i++)
        {
            coinTransform = cherryList[i];
            coinID = "Cherry" + " " + i;
            coinPosRot = GetPositionRotationString(cherryList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
        }
        for (int i = 0; i < grapeList.Count; i++)
        {
            coinTransform = grapeList[i];
            coinID = "Grape" + " " + i;
            coinPosRot = GetPositionRotationString(grapeList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
        }
        for (int i = 0; i < lemonList.Count; i++)
        {
            coinTransform = lemonList[i];
            coinID = "Lemon" + " " + i;
            coinPosRot = GetPositionRotationString(lemonList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
        }
        for (int i = 0; i < watermelonList.Count; i++)
        {
            coinTransform = watermelonList[i];
            coinID = "Watermelon" + " " + i;
            coinPosRot = GetPositionRotationString(watermelonList[i]);
            PlayerPrefs.SetString(coinID, coinPosRot);
        }
        */



        PlayerPrefs.SetInt("Coin1Count", coin1List.Count);
        PlayerPrefs.SetInt("Coin5Count", coin5List.Count);
        PlayerPrefs.SetInt("Coin10Count", coin10List.Count);
        PlayerPrefs.SetInt("Coin50Count", coin50List.Count);
        PlayerPrefs.SetInt("Coin100Count", coin100List.Count);
        PlayerPrefs.SetInt("Coin500Count", coin500List.Count);
        PlayerPrefs.SetInt("CoinDollarCount", coinDollarList.Count);
        PlayerPrefs.SetInt("CoinBigCount", coinBigList.Count);
        PlayerPrefs.SetInt("ChestCount", chestList.Count);
        PlayerPrefs.SetInt("CollectedFruitCount", fruitsList.Count);
        PlayerPrefs.SetInt("CherryCount", cherryList.Count);
        PlayerPrefs.SetInt("GrapeCount", grapeList.Count);
        PlayerPrefs.SetInt("LemonCount", lemonList.Count);
        PlayerPrefs.SetInt("WatermelonCount", watermelonList.Count);
    }

    public void GetAndUpdateCoinData()
    {
        if (PlayerPrefs.HasKey("Coin1Count"))
        {
            int coin1Count = PlayerPrefs.GetInt("Coin1Count");
            for (int i = 0; i < coin1Count; i++)
            {
                coinID = "Coin1" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin1Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("Coin5Count"))
        {
            int coin5Count = PlayerPrefs.GetInt("Coin5Count");
            for (int i = 0; i < coin5Count; i++)
            {
                coinID = "Coin5" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin5Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("Coin10Count"))
        {
            int coin10Count = PlayerPrefs.GetInt("Coin10Count");
            for (int i = 0; i < coin10Count; i++)
            {
                coinID = "Coin10" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin10Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("Coin50Count"))
        {
            int coin50Count = PlayerPrefs.GetInt("Coin50Count");
            for (int i = 0; i < coin50Count; i++)
            {
                coinID = "Coin50" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin50Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("Coin100Count"))
        {
            int coin100Count = PlayerPrefs.GetInt("Coin100Count");
            for (int i = 0; i < coin100Count; i++)
            {
                coinID = "Coin100" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin100Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("Coin500Count"))
        {
            int coin500Count = PlayerPrefs.GetInt("Coin500Count");
            for (int i = 0; i < coin500Count; i++)
            {
                coinID = "Coin500" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coin500Prefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("CoinDollarCount"))
        {
            int coinDollarCount = PlayerPrefs.GetInt("CoinDollarCount");
            for (int i = 0; i < coinDollarCount; i++)
            {
                coinID = "dollarMonede" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coinDollarPrefab);
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        if (PlayerPrefs.HasKey("CoinBigCount"))
        {
            int coinBigCount = PlayerPrefs.GetInt("CoinBigCount");
            for (int i = 0; i < coinBigCount; i++)
            {
                coinID = "ShakeMonede" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(coinBigPrefab);
                CoinScript bigCoinScript = tempGameObject.GetComponent<CoinScript>();
                bigCoinScript.hitGround = true;
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }
        

        if (PlayerPrefs.HasKey("ChestCount"))
        {
            int chestCount = PlayerPrefs.GetInt("ChestCount");
            for (int i = 0; i < chestCount; i++)
            {
                coinID = "Chest" + " " + i;
                coinPosRot = PlayerPrefs.GetString(coinID);
                coinPosRot_Data = coinPosRot.Split(" "[0]);
                GameObject tempGameObject = Instantiate(chestPrefab);
                CoinScript chestScript = tempGameObject.GetComponent<CoinScript>();
                chestScript.nameKey = "Chest";
                chestScript.hitGround = true;
                tempGameObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                tempGameObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                tempCoinScript = tempGameObject.GetComponent<CoinScript>();
                tempCoinScript.hitSomething = true;
            }
        }

        //Fruits

        if (PlayerPrefs.HasKey("CollectedFruitCount"))
        {
            //Debug.Log("Fruit Shite Load!");
            int fruitCount = PlayerPrefs.GetInt("CollectedFruitCount");
            for (int i = 0; i < fruitCount; i++)
            {
                for (int j = 0; j < fruitsPrefabs.Count; j++)
                {
                    fruitCoinScript = fruitsPrefabs[j].GetComponent<CoinScript>();
                    for (int k = 0; k < 20; k++)
                    {
                        coinID = fruitCoinScript.nameKey + " " + k;
                      //  Debug.Log("Coin ID : " + coinID);
                        if (PlayerPrefs.HasKey(coinID))
                        {
                            fruitIDfound = true;
                            
                           // Debug.Log("FRUIT FRICKIN FOUND!!! " + coinID);
                            break;
                        }
                        if (fruitIDfound)
                            break;
                    }
                    if (fruitIDfound)
                        break;
                }

                //for loop to check the coind id from a string array of fruit names
                if (fruitIDfound)
                {
                    coinPosRot = PlayerPrefs.GetString(coinID);
                    coinPosRot_Data = coinPosRot.Split(" "[0]);
                    for (int j = 0; j < fruitsPrefabs.Count; j++)
                    {
                        if (fruitsPrefabs[j].GetComponent<CoinScript>().nameKey == fruitCoinScript.nameKey)
                        {
                            emptyFruitObject = Instantiate(fruitsPrefabs[j]);
                            PlayerPrefs.DeleteKey(coinID);
                            //GameObject tempGameObject = Instantiate(cherryPrefab);
                            emptyFruitObject.transform.position = new Vector3(float.Parse(coinPosRot_Data[0]), float.Parse(coinPosRot_Data[1]), float.Parse(coinPosRot_Data[2]));
                            emptyFruitObject.transform.eulerAngles = new Vector3(float.Parse(coinPosRot_Data[3]), float.Parse(coinPosRot_Data[4]), float.Parse(coinPosRot_Data[5]));
                            tempCoinScript = emptyFruitObject.GetComponent<CoinScript>();
                            tempCoinScript.hitSomething = true;
                            fruitIDfound = false;
                            
                        }
                    }
                }
            }
        }

    


    }

    public string GetPositionRotationString(Transform tempCoinTransform)
    {
        return tempCoinTransform.position.x + " " + tempCoinTransform.position.y + " " + tempCoinTransform.position.z +    // coin position
                " " + tempCoinTransform.eulerAngles.x + " " + tempCoinTransform.eulerAngles.y + " " + tempCoinTransform.eulerAngles.z;   // coin rotation
    }

    //-------------- Other Useful Methods ----------------//
    public void CoinsJump()
    {
        
            Vector3 jumpDirection = Vector3.up * 1f + Vector3.forward / 5f;
            cameraAnimator.enabled = false;
            camShake.Shake(0.03f, 0.08f);
            for (int i = 0; i < coinList.Count; i++)
            {
                rb = coinList[i].GetComponent<Rigidbody>();
                
                rb.AddForce(jumpDirection * 100f, ForceMode.Impulse);
                //coinList[i].position += Vector3.up;
            }
           
            //transform.position += Vector3.up;
    }

    public void SpecialCoinTowerActivation()
    {
        for (int i = 0; i < coinList.Count; i++)
        {
            rb = coinList[i].gameObject.GetComponent<Rigidbody>();
            rb.isKinematic = false;
            rb.useGravity = true;
            rb.collisionDetectionMode = CollisionDetectionMode.Continuous;
            specialCoinMeshCollider = coinList[i].gameObject.GetComponent<MeshCollider>();
            specialCoinMeshCollider.enabled = true;
            coinList[i].parent = transform;
            
        }
    }


    private void OnApplicationPause(bool pause)
    {
        SaveCoinsData();
    }

    private void OnApplicationQuit()
    {
        SaveCoinsData();
    }

    

   
}
