using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleScaleUp : MonoBehaviour
{

    public void ScaleUp()
    {
        StartCoroutine(ScaleUpCoroutine());
    }

    IEnumerator ScaleUpCoroutine()
    {
        yield return new WaitForSeconds(0.1f);
        transform.localScale *= 0;

        yield return new WaitForSeconds(0.2f);
        for (int i = 0; i < 20; i++)
        {
            transform.localScale += (Vector3.one * 0.05f);
            yield return new WaitForFixedUpdate();
        }
        yield return null;
    }
}
