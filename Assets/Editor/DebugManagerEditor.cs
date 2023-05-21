using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(DebugManager ))]
[CanEditMultipleObjects]
public class DebugManagerEditor : Editor
{
    public int coins;
    public float dollars;

    int _selectedFruit = 0;
    int _selectedOffert = 0;
    string[] _offerOptions = new string[4] { "AutoClicker", "Bomb", "CashRain", "LuckyChest" };


    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        DebugManager debugMng = (DebugManager)target;

        EditorGUILayout.BeginVertical();
        coins = EditorGUILayout.IntField("Coins",coins);
        dollars = EditorGUILayout.FloatField("Dollars",dollars);
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("Add Money"))
        {
            debugMng.UpdateMoneyText(coins, dollars);
            Debug.Log("Coins : " + coins + " dollars : " + dollars);
        }
        GUILayout.EndHorizontal();

        EditorGUILayout.Space();

        //Cash coins buttons
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("Add Cash 1"))
        {
            debugMng.AddCashCoins(1);
        }
        if (GUILayout.Button("Add Cash 10"))
        {
            debugMng.AddCashCoins(10);
        }
        if (GUILayout.Button("Add Cash 50"))
        {
            debugMng.AddCashCoins(50);
        }
        GUILayout.EndHorizontal();

        GUILayout.Space(10);

        // Fruit dropdown
        GUILayout.BeginHorizontal();

        EditorGUI.BeginChangeCheck();

        this._selectedFruit = EditorGUILayout.Popup("Fruit Spawn", _selectedFruit, debugMng.fruitNames);

        if (EditorGUI.EndChangeCheck())
        {
           // Debug.Log(_options[_selected]);
        }
        if (GUILayout.Button("Spawn Fruit"))
        {
            debugMng.SpawnFruitByID(_selectedFruit);
        }

        GUILayout.EndHorizontal();

        GUILayout.Space(10);

        // Offert dropdown
        GUILayout.BeginHorizontal();

        EditorGUI.BeginChangeCheck();

        this._selectedOffert = EditorGUILayout.Popup("Offer Spawn", _selectedOffert, _offerOptions);

        if (EditorGUI.EndChangeCheck())
        {
            // Debug.Log(_options[_selected]);
        }
        if (GUILayout.Button("Spawn Offer"))
        {
            debugMng.GetSpecificOffer(_selectedOffert + 1);
        }

        GUILayout.EndHorizontal();

    }
}
