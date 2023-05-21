using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PurchaseButton : MonoBehaviour
{
    public enum PurchaseType { removeAds };
    public PurchaseType purchaseType;

    public void ClickPurchaseButton()
    {
        switch (purchaseType)
        {
            case PurchaseType.removeAds:
                //IAP._instance.BuyNoAds();
                break;
            default:
                break;
        }
    }

}
