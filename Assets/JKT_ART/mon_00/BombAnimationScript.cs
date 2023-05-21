using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombAnimationScript : MonoBehaviour
{

    Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        StartCoroutine(bombExplosion());
    }


    IEnumerator bombExplosion()
    {
        yield return new WaitForSeconds(0.5f);
        anim.SetBool("attack01",true);

        Destroy(this.gameObject,2);
    }

    
}
