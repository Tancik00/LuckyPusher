﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAP : MonoBehaviour, IStoreListener
{

    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    
    public static string NO_ADS = "com.test.removeads";

    // Apple App Store-specific product identifier for the subscription product.
    private static string kProductNameAppleSubscription = "";

    // Google Play Store-specific product identifier subscription product.
    private static string kProductNameGooglePlaySubscription = "";

    void Start()
    {

        //InitializePurchasing();
        Debug.Log("Seting up unity purchaseing ref");
        // If we haven't set up the Unity Purchasing reference
        if (m_StoreController == null)
        {
            // Begin to configure our connection to Purchasing
            Debug.Log("Begin to configurate connection to purchasing");
            InitializePurchasing();
        }
    }

    public void InitializePurchasing()
    {
        Debug.Log("START INITIALIZING");
        if (IsInitialized())
        {
            Debug.Log("Purchase Initialized, return!");
            return;
        }

        Debug.Log("Initializing continuing , create builder and add purcheases");
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());


        builder.AddProduct(NO_ADS, ProductType.NonConsumable);


        // Kick off the remainder of the set-up with an asynchrounous call, passing the configuration 
        // and this class' instance. Expect a response either in OnInitialized or OnInitializeFailed.

        Debug.Log("Start builder with the purcheased added");
        UnityPurchasing.Initialize(this, builder);
    }


    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        Debug.Log("Trying to initialize");
        if(m_StoreController != null)
            Debug.Log("m_StoreController is : ");
        if(m_StoreExtensionProvider != null)
            Debug.Log("m_StoreExtensionProvider is : ");

        return m_StoreController != null && m_StoreExtensionProvider != null;
    }


    public void BuyNoAds()
    {
        Debug.Log("Start buy no ads");
        BuyProductID(NO_ADS);
    }


    void BuyProductID(string productId)
    {
        // If Purchasing has been initialized ...
        Debug.Log("TRYING TO PURCAHSE " + productId);
        if (IsInitialized())
        {
            Debug.Log("Enter buy product funtion insite the if");
            // ... look up the Product reference with the general product identifier and the Purchasing 
            // system's products collection.
            Product product = m_StoreController.products.WithID(productId);

            // If the look up found a product for this device's store and that product is ready to be sold ... 
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                // ... buy the product. Expect a response either through ProcessPurchase or OnPurchaseFailed 
                // asynchronously.
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                // ... report the product look-up failure situation  
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or 
            // retrying initiailization.
            //InitializePurchasing();
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }


    public void RestorePurchases()
    {
        // If Purchasing has not yet been set up ...
        if (!IsInitialized())
        {
            // ... report the situation and stop restoring. Consider either waiting longer, or retrying initialization.
            Debug.Log("RestorePurchases FAIL. Not initialized.");
            return;
        }

        // If we are running on an Apple device ... 
        if (Application.platform == RuntimePlatform.IPhonePlayer ||
            Application.platform == RuntimePlatform.OSXPlayer)
        {
            // ... begin restoring purchases
            Debug.Log("RestorePurchases started ...");

            // Fetch the Apple store-specific subsystem.
            var apple = m_StoreExtensionProvider.GetExtension<IAppleExtensions>();
            // Begin the asynchronous process of restoring purchases. Expect a confirmation response in 
            // the Action<bool> below, and ProcessPurchase if there are previously purchased products to restore.
            apple.RestoreTransactions((result) =>
            {
                // The first phase of restoration. If no more responses are received on ProcessPurchase then 
                // no purchases are available to be restored.
                Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
            });
        }
        // Otherwise ...
        else
        {
            // We are not running on an Apple device. No work is necessary to restore purchases.
            Debug.Log("RestorePurchases FAIL. Not supported on this platform. Current = " + Application.platform);
        }
    }


    //  
    // --- IStoreListener
    //

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;
    }




    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
       if (String.Equals(args.purchasedProduct.definition.id, NO_ADS, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            Debug.Log("RemoveAds Purchase.");
            PlayerPrefs.SetInt("NO_ADS", 1);

        }
        else
        {
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }

        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }
}
