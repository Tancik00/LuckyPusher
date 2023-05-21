using UnityEngine;

public class AnimationScript : MonoBehaviour {

    public bool isAnimated = false;

    public bool isRotating = false;
    public bool isFloating = false;
    public bool isScaling = false;

    public Vector3 rotationAngle;
    public float rotationSpeed;

    public float floatSpeed;
    private bool goingUp = true;
    public float floatRate;
    private float floatTimer;

    public Vector3 startScale;
    public Vector3 endScale;

    private bool scalingUp = true;
    public float scaleSpeed;
    public float scaleRate;
    private float scaleTimer;

    [Header("Lerp Position")]
    public bool isLerpingPosition;
    public bool isImpulseLerp;
    public Vector3 firstPosition;
    public Vector3 secondPosition;


    [Header("Lerp Rotation")]
    public bool isLerpingRotation;
    public Vector3 firstRotation;
    public Vector3 secondRotation;

    public float lerpTimer;
    public float lerpSpeed;
    public bool lerpingBack;

    private void Start()
    {
        lerpTimer = 0;
    }


    private void OnEnable()
    {
        transform.position = firstPosition;
        lerpTimer = 0;
        isImpulseLerp = true;
    }

    private void OnDisable()
    {
        transform.position = firstPosition;
        lerpTimer = 0;
        isImpulseLerp = true;
    }


    // Update is called once per frame
    void FixedUpdate()
    {
        if (isAnimated)
        {
            if (isRotating)
            {
                transform.Rotate(rotationAngle * rotationSpeed * Time.fixedDeltaTime);
            }

            if (isFloating)
            {
                floatTimer += Time.fixedDeltaTime;
                Vector3 moveDir = new Vector3(0.0f, 0.0f, floatSpeed);
                transform.Translate(moveDir);

                if (goingUp && floatTimer >= floatRate)
                {
                    goingUp = false;
                    floatTimer = 0;
                    floatSpeed = -floatSpeed;
                }

                else if (!goingUp && floatTimer >= floatRate)
                {
                    goingUp = true;
                    floatTimer = 0;
                    floatSpeed = +floatSpeed;
                }
            }

            if (isScaling)
            {
                scaleTimer += Time.fixedDeltaTime;

                if (scalingUp)
                {
                    transform.localScale = Vector3.Lerp(transform.localScale, endScale, scaleSpeed * Time.fixedDeltaTime);
                }
                else if (!scalingUp)
                {
                    transform.localScale = Vector3.Lerp(transform.localScale, startScale, scaleSpeed * Time.fixedDeltaTime);
                }

                if (scaleTimer >= scaleRate)
                {
                    if (scalingUp) { scalingUp = false; }
                    else if (!scalingUp) { scalingUp = true; }
                    scaleTimer = 0;
                }
            }

            if (isLerpingPosition)
            {
                LerpPosition();
            }

            if (isImpulseLerp)
            {
                ImpulseLerp();
            }
        }
    }


    private void ImpulseLerp()
    {
        lerpTimer += Time.fixedDeltaTime * lerpSpeed;
        transform.position = Vector3.Lerp(firstPosition, secondPosition, lerpTimer);
        if (lerpTimer >= 1f)
        {
            isImpulseLerp = false;
            lerpTimer = 0f;
        }

    }

    private void LerpPosition()
    {
            if (!lerpingBack)
            {
                lerpTimer += Time.fixedDeltaTime * lerpSpeed;
                transform.position = Vector3.Lerp(firstPosition, secondPosition, lerpTimer);
                if (lerpTimer >= 1f)
                {
                    transform.position = secondPosition;
                    lerpingBack = true;
                    lerpTimer = 0f;
                }
            }
            else
            {
                lerpTimer += Time.fixedDeltaTime * lerpSpeed;
                transform.position = Vector3.Lerp(secondPosition, firstPosition, lerpTimer);
                if (lerpTimer >= 1f)
                {
                    transform.position = firstPosition;
                    lerpingBack = false;
                    lerpTimer = 0f;
                }
            }     
    }
    
}
