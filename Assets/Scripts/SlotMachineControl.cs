using System.Collections;
using UnityEngine.UI;
using System;
using UnityEngine;

public class SlotMachineControl : MonoBehaviour
{
    public static event Action HandlePulled = delegate { };

    [SerializeField] private Text prizeText;
    [SerializeField] private Row[] wheels;
    [SerializeField] private Transform handle;
    [Header("Fruits")]
    public GameObject BananaObject;
    public GameObject CherryObject;
    public GameObject WatermellonObject;
    public GameObject LemonObject;
    [Header("------")]
    public GameObject dollarsObject;

    public UIManager uIManager;

    private int prizeValue;
    private bool resultsChecked = false;

    private void Update()
    {
        if (!wheels[0].rowStopped || !wheels[1].rowStopped || !wheels[2].rowStopped)
        {
            prizeValue = 0;
            prizeText.enabled = false;
            resultsChecked = false;
        }

        if (wheels[0].rowStopped || wheels[1].rowStopped || wheels[2].rowStopped && !resultsChecked)
        {
            CheckResults();
            prizeText.enabled = true;
            prizeText.text = "0.0" + prizeValue;
        }
    }

    /*private void OnMouseDown()
    {
        if (rows[0].rowStopped || rows[1].rowStopped || rows[2].rowStopped)
        {
            StartCoroutine("PulledHandle");
        }
    }*/

    /*
    public IEnumerator PulledHandle()
    {
        Debug.Log("PULLED HANDLE!!!");
        for (int i = 0; i < 1; i++)
        {
            handle.Rotate(0, 0, 0);
            Debug.Log("Fish");
            yield return new WaitForSeconds(0.0005f);
        }

        for (int i = 0; i < 1; i++)
        {
            handle.Rotate(0, 0, 0);
            yield return new WaitForSeconds(0.0005f);
        }

        HandlePulled();
    }
    */
    private void CheckResults()
    {
        if (wheels[0].stoppedSlot == "Banana" && wheels[1].stoppedSlot == "Banana" && wheels[2].stoppedSlot == "Banana")
        {
            uIManager.Fruit();
            prizeValue = 2500;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "Grape" && wheels[1].stoppedSlot == "Grape" && wheels[2].stoppedSlot == "Grape")
        {
            uIManager.Fruit();
            prizeValue = 2500;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "Watermellon" && wheels[1].stoppedSlot == "Watermellon" && wheels[2].stoppedSlot == "Watermellon")
        {
            uIManager.Fruit();
            prizeValue = 2500;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "Cherry" && wheels[1].stoppedSlot == "Cherry" && wheels[2].stoppedSlot == "Cherry")
        {
            uIManager.Fruit();
            prizeValue = 2500;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "Onehundred" && wheels[1].stoppedSlot == "Onehundred" && wheels[2].stoppedSlot == "Onehundred")
        {
            prizeValue = 20;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "tenDollars" && wheels[1].stoppedSlot == "tenDollars" && wheels[2].stoppedSlot == "tenDollars")
        {
            for (int i = 0; i < 10; i++)
            {
                Instantiate(dollarsObject);
            }
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "sevenSevenSeven" && wheels[1].stoppedSlot == "sevenSevenSeven" && wheels[2].stoppedSlot == "sevenSevenSeven")
        {
            prizeValue = 20;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "Bar" && wheels[1].stoppedSlot == "Bar" && wheels[2].stoppedSlot == "Bar")
        {
            Instantiate(BananaObject);
            Instantiate(CherryObject);
            //Instantiate(OrangeObject);
            Instantiate(LemonObject);
            Instantiate(WatermellonObject);
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "twentyDollars" && wheels[1].stoppedSlot == "twentyDollars" && wheels[2].stoppedSlot == "twentyDollars")
        {
            uIManager.Sweet();
            for (int i = 0; i < 20; i++)
            {
                Instantiate(dollarsObject);
            }
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "fifty" && wheels[1].stoppedSlot == "fifty" && wheels[2].stoppedSlot == "fifty")
        {
            uIManager.Sweet();
            prizeValue = 777;
            Debug.Log("Fruit");
        }
        if (wheels[0].stoppedSlot == "fiftyDollars" && wheels[1].stoppedSlot == "fiftyDollars" && wheels[2].stoppedSlot == "fiftyDollars")
        {
            uIManager.Sweet();
            for (int i = 0; i < 50; i++)
            {
                Instantiate(dollarsObject);
            }
            Debug.Log("Fruit");
        }
        else
        {
            prizeValue = 10;
          //  Debug.Log("notPrize");
        }

        resultsChecked = true;
    }
}
