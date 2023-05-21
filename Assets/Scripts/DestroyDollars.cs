using UnityEngine.UI;
using UnityEngine;

public class DestroyDollars : MonoBehaviour
{
    public int dollarsCount = 0;
    public Text dollars;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "dollarMonede")
        {
            Debug.Log("!!!!!!!!!!!!!!!!!!!!!Dollars!!!!!!!!!!!!!!!!!!!!!");
            dollarsCount += 100;
            dollars.text = dollarsCount.ToString();

            Destroy(collision.gameObject);

        }
    }
}
