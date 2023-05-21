using UnityEngine;
using System;

namespace NiobiumStudios
{
    [Serializable]
    public class Reward
    {
        public string unit;
        public int reward;
        public Sprite sprite;
        public int adsCount;
        public int watchedAdsCount;
    }
}