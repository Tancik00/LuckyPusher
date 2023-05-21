using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_IOS
using Unity.Notifications.iOS;
#endif
//using UnityEngine.iOS;


public class MobileNotifications : Singleton<MobileNotifications>
{




#if UNITY_IOS

    public void SetDecay()
    {
        //Coin Decay :
        // It's 23h because has 1 hour to enter 
        // the game before the money is removed
        var timeTrigger_23h_Decay = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(24, 0, 0),
            Repeats = true,
        };
        var notification_23h_Decay = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_23_Hours_Decay_notification",
            Title = "Coin Decay",
            Body = "Enter today to not lose some of your coins! Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_23h_Decay,
        };

        iOSNotificationCenter.ScheduleNotification(notification_23h_Decay);
        iOSNotificationCenter.OnNotificationReceived += remoteNotification =>
        {
            iOSNotificationCenter.RemoveDeliveredNotification(notification_23h_Decay.Identifier);
            iOSNotificationCenter.ScheduleNotification(notification_23h_Decay);
        };
    }

    public void RemoveDecayNotification()
    {
        iOSNotificationCenter.RemoveScheduledNotification("_23_Hours_Decay_notification");
    }
   

    public void SetNotifications()
    {

        var timeTrigger_3h = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(3, 0, 0),
            Repeats = false,
        };

        var notification_3h = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_3_Hours_notification",
            Title = "Good job today, tap here to collect some more cash. Get closer to your goal!",
            Body = "Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_3h,
        };


        var timeTrigger_24h = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(24, 0, 0),
            Repeats = false,
        };
        var notification_24h = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_24_Hours_notification",
            Title = "Don't forget to collect some coins today!",
            Body = "Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_24h,
        };

        var timeTrigger_48h = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(48, 0, 0),
            Repeats = false,
        };
        var notification_48h = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_48_Hours_notification",
            Title = "Oh, you missed two days. Open Lucky Pusher right now to keep yourself on track. Cash is waiting for you!",
            Body = "Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_48h,
        };

        var timeTrigger_72h = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(72, 0, 0),
            Repeats = false,
        };
        var notification_72h = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_72_Hours_notification",
            Title = "You have cash to receive!",
            Body = "Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_72h,
        };

        var timeTrigger_96h = new iOSNotificationTimeIntervalTrigger()
        {
            TimeInterval = new TimeSpan(96, 0, 0),
            Repeats = false,
        };
        var notification_96h = new iOSNotification()
        {
            // You can optionally specify a custom identifier which can later be 
            // used to cancel the notification, if you don't set one, a unique 
            // string will be generated automatically.
            Identifier = "_96_Hours_notification",
            Title = "You received $30 as a bonus!",
            Body = "Tap here to open the app!",
            Subtitle = "",
            ShowInForeground = false,
            ForegroundPresentationOption = (PresentationOption.Alert | PresentationOption.Sound),
            CategoryIdentifier = "category_a",
            ThreadIdentifier = "thread1",
            Trigger = timeTrigger_96h,
        };

        

        //Sets the first notification on
        iOSNotificationCenter.ScheduleNotification(notification_3h);

        iOSNotificationCenter.OnNotificationReceived += remoteNotification =>
        {
            var n = iOSNotificationCenter.GetLastRespondedNotification();

            if (n != null)
            {
                switch (n.Identifier)
                {
                    case "_3_Hours_notification":
                        iOSNotificationCenter.RemoveDeliveredNotification(notification_3h.Identifier);
                        iOSNotificationCenter.ScheduleNotification(notification_24h);
                        break;

                    case "_24_Hours_notification":
                        iOSNotificationCenter.RemoveDeliveredNotification(notification_24h.Identifier);
                        iOSNotificationCenter.ScheduleNotification(notification_48h);
                        break;

                    case "_48_Hours_notification":
                        iOSNotificationCenter.RemoveDeliveredNotification(notification_48h.Identifier);
                        iOSNotificationCenter.ScheduleNotification(notification_72h);
                        break;

                    case "_72_Hours_notification":
                        iOSNotificationCenter.RemoveDeliveredNotification(notification_72h.Identifier);
                        iOSNotificationCenter.ScheduleNotification(notification_96h);
                        break;

                    case "_96_Hours_notification":
                        iOSNotificationCenter.RemoveDeliveredNotification(notification_96h.Identifier);
                        break;

                    default:
                        break;
                }
            }
            

        };

    }

    private void OnApplicationPause(bool pause)
    {
//        Debug.Log("Set On Notifications!");
        //SetNotifications();
    }

#endif







    /*
    IEnumerator RequestAuthorization()
    {
        using (var req = new AuthorizationRequest(AuthorizationOption.Alert | AuthorizationOption.Badge, true))
        {
            while (!req.IsFinished)
            {
                yield return null;
            };

            string res = "\n RequestAuthorization: \n";
            res += "\n finished: " + req.IsFinished;
            res += "\n granted :  " + req.Granted;
            res += "\n error:  " + req.Error;
            res += "\n deviceToken:  " + req.DeviceToken;
            Debug.Log(res);
        }
    }*/


}
