using System.Collections;
using UnityEngine;

public class Row : MonoBehaviour
{
    private int randomValue;
    private float timeInterval;
    private float SmalestDifference=30, TargetDegreas, FinalRotX;
    private bool TargetIsBigger;

    private int[] degree = { 0, 30, 60, 90, 120, 150, 180, 210, 240, 170, 300, 330, 360 };
    public int[] randRows = { 1, 1, 1};

    public bool rowStopped;
    public string stoppedSlot;

    public float zPosition;

    // Start is called before the first frame update
    void Start()
    {
        rowStopped = true;
        SlotMachineControl.HandlePulled += StartRotating;
        print(transform.localEulerAngles);
    }

    private void StartRotating()
    {
        stoppedSlot = "";
        StartCoroutine("Rotate");
    }

    private IEnumerator Rotate()
    {
        rowStopped = false;
        timeInterval = 0.01f;

        for (int i = 0; i < 30; i++)
        {
            transform.Rotate(new Vector3(1000 * Time.deltaTime, 0, 0));
            yield return new WaitForSeconds(timeInterval);
        }

        randomValue = Random.Range(0, 100);
        

        for (int i = 0; i < randRows.Length / 3 * randomValue; i++)
        {
            transform.Rotate(new Vector3(1000 * Time.deltaTime, 0, 0));
            yield return new WaitForSeconds(timeInterval);
        }

        if (transform.rotation.x == 0f)
        {
            stoppedSlot = "Grape";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 30f)
        {
            stoppedSlot = "Watermellon";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == -60f)
        {
            stoppedSlot = "Cherry";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 60f)
        {
            stoppedSlot = "Lemon";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 90f)
        {
            stoppedSlot = "Onehundred";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == -30f)
        {
            stoppedSlot = "Fivehundred";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 120f)
        {
            stoppedSlot = "Bar";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 150f)
        {
            stoppedSlot = "tenDollars";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 180f)
        {
            stoppedSlot = "sevenSevenSeven";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 210f)
        {
            stoppedSlot = "twentyDollars";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == 240f)
        {
            stoppedSlot = "fifty";
            Debug.Log("Fruit");
        }
        if (transform.rotation.x == -90f)
        {
            stoppedSlot = "fiftyDollars";
            Debug.Log("Fruit");
        }
        rowStopped = true;

        float TempEulearX = transform.localRotation.eulerAngles.x < 0 ? transform.localRotation.eulerAngles.x + 360 : transform.localRotation.eulerAngles.x;
        if (TempEulearX % 30 != 0)
        {
            for (int i = 0; i <= 360; i += 30)
            {
                if (Mathf.Abs(TempEulearX - i) < SmalestDifference)
                {
                    SmalestDifference = Mathf.Abs(TempEulearX - i);
                    TargetDegreas = i;
                }
                TargetIsBigger = TempEulearX < TargetDegreas ? true : false;
            }

            transform.localEulerAngles = new Vector3(TargetDegreas, 0, 0);
        }
    }

    private void OnDestroy()
    {
        SlotMachineControl.HandlePulled -= StartRotating;   
    }
}
