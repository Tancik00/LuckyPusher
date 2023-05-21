using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenClosePanel : MonoBehaviour
{
    public GameObject panel;

    public GameObject[] panels;

    public void CloseOrOpenPanel()
    {
        if (panel.activeInHierarchy)
            panel.SetActive(false);
        else
            panel.SetActive(true);
    }

    public void CloseOrOpenPanels()
    {
        if (panels[0].activeInHierarchy)
        {
            for (int i = 0; i < panels.Length; i++)
            {
                panels[i].SetActive(false);
            }
        }
        else
        {
            for (int i = 0; i < panels.Length; i++)
            {
                panels[i].SetActive(true);
            }
        }
    }

    public void StartTime()
    {
        Time.timeScale = 1f;
    }
}
