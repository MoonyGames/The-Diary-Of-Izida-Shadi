using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class PlaySoundButton : MonoBehaviour
{
    [SerializeField] private AudioClip _audioClip;

    private AudioSource _audioSource;

    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    public void PlaySound()
    {
        _audioSource.PlayOneShot(_audioClip);
    }
}
