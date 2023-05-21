using UnityEngine;
using GameAnalyticsSDK;

public class GameAnalyticsInit : MonoBehaviour
{
    private void Start()
    {
        GameAnalytics.Initialize();
    }
}
