using UnityEngine;
using UnityEngine.Video;

[RequireComponent(typeof(VideoPlayer))]
public class VideoPlayerController : MonoBehaviour
{
    private VideoPlayer _videoPlayer;

    private void Awake()
    {
        _videoPlayer = GetComponent<VideoPlayer>();
    }

    private void Start()
    {
        _videoPlayer.loopPointReached += EndReached;
    }

    private void EndReached(VideoPlayer videoPlayer)
    {
        LoadScene.Load(LoadScene.CurrentSceneIndex + 1);
    }

    private void OnDisable()
    {
        _videoPlayer.loopPointReached -= EndReached;
    }
}
