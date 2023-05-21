using UnityEngine.Audio;
using UnityEngine;
using System;

public class AudioManager : MonoBehaviour
{
    public Sound[] sounds;

    public UIManager uIManager;

    public static AudioManager instance;

    public AudioMixerGroup AudMixMaster;
    public AudioMixerGroup AudMixVFX;
    public AudioMixerGroup AudMixMusic;

    // Start is called before the first frame update
    void Awake()
    {
        if (instance == null) instance = this;
        else
        {
            Destroy(gameObject);
            return;
        }

        DontDestroyOnLoad(gameObject);

        foreach (Sound sound in sounds)
        {
            sound.source = gameObject.AddComponent<AudioSource>();
            sound.source.clip = sound.clip;

            if (sound.clip.name.Contains("VFX"))
            {
                sound.source.outputAudioMixerGroup = AudMixVFX; 
            }
            else
            {
                sound.source.outputAudioMixerGroup = AudMixMusic;
            }

            sound.source.volume = sound.volume;
            sound.source.pitch = sound.pitch;
            sound.source.loop = sound.loop;
            sound.source.playOnAwake = sound.PlayOnAwake;
        }
    }

    private void Start()
    {
        PlayTheme();
       // Play("Theme");
    }

    public void Play(string name)
    {

        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning($"Sound {name} not found");
            return;
        }
        s.source.PlayOneShot(s.clip);

    }

    public void PauseSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning($"Sound {name} not found");
            return;
        }
        s.source.Pause();
    }

    public void StopSound(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning($"Sound {name} not found");
            return;
        }
        s.source.Stop();
    }

    public void PlayTheme()
    {
        string name = "Theme";
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            Debug.LogWarning($"Sound {name} not found");
            return;
        }
        s.source.Play();

    }

    public void SoundState(bool state)
    {
        // new
        if (state)
        {
            AudMixMaster.audioMixer.SetFloat("MasterVolume", 0);
        }
        else
        {
            AudMixMaster.audioMixer.SetFloat("MasterVolume", -80);
        }
        // old
        Sound tempSound;
        for (int i = 0; i < sounds.Length; i++)
        {
            tempSound = sounds[i];
            //tempSound.source.enabled = state;

        }
    }
}
