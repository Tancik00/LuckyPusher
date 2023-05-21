using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FruitUiUpdate : MonoBehaviour
{
    public GameObject[] fruits;
    public Text[] textToDisplayFruitDiscovered;
    public GameManager GM;
    public GameObject[] ExtraObjectOn;
    public GameObject[] ExtraObjectOff;
    /// <summary>
    /// create a game object panel in the grid
    /// name it the name of the fruit
    /// add it to the list
    /// 
    /// </summary>

    private Color whiteBlueColor = new Color(0.26f,0.31f,0.62f);

    private void Start()
    {
        SetUpFruits();
        foreach (var ob in ExtraObjectOn)
        {
            if (GM.Extra)
            {
                ob.SetActive(true);
            }
            else
            {
                ob.SetActive(false);
            }
        }
        foreach (var ob in ExtraObjectOff)
        {
            if (!GM.Extra)
            {
                ob.SetActive(true);
            }
            else
            {
                ob.SetActive(false);
            }
        }

    }

    private void OnEnable()
    {
        SetUpFruits();
    }

    public void SetUpFruits()
    {
        int temp = 0;
        foreach (var fruit in fruits)
        {
            int amount = PlayerPrefs.GetInt(fruit.name);
            fruit.GetComponentsInChildren<Text>()[0].text = amount.ToString();
            //fruit.GetComponentsInChildren<Text>()[1].text = fruit.name;
            if (amount > 0)
            {
//                Debug.Log("Set Up Fruits!");
                temp++;
                fruit.GetComponent<Image>().color = whiteBlueColor;
                fruit.GetComponentsInChildren<Image>()[1].color = Color.white;
            }
        }
        PlayerPrefs.SetInt("Fruits", temp);

        foreach (var texts in textToDisplayFruitDiscovered)
        {
            if (texts != null)
            {
                texts.text = temp.ToString();
                PlayerPrefs.SetInt("FruitScoreCount", temp);
            }
        }

    }


    

}
