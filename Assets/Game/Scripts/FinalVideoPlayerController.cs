using UnityEngine;
using UnityEngine.Video;

[RequireComponent(typeof(VideoPlayer))]
public class FinalVideoPlayerController : MonoBehaviour
{   
    private VideoPlayer _videoPlayer;

    private void Awake()
    {
        _videoPlayer = GetComponent<VideoPlayer>();

        PlayerPrefs.SetInt("Level", 1);
    }

    private void Start()
    {
        _videoPlayer.loopPointReached += EndReached;
    }

    private void EndReached(VideoPlayer videoPlayer)
    {
        LoadScene.Load(2);
    }

    private void OnDisable()
    {
        _videoPlayer.loopPointReached -= EndReached;
    }
}
