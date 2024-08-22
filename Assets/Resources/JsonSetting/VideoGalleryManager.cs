using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoGalleryManager : MonoBehaviour
{
    public RawImage rawImage;  // Videoを表示するRawImage
    public VideoPlayer videoPlayer;  // VideoPlayerコンポーネント
    public Text resultText;  // 結果を表示するText（オプション）
    private RenderTexture renderTexture;

    private void Start()
    {
        // RenderTextureの設定
        renderTexture = new RenderTexture(1920, 1080, 0);
        videoPlayer.targetTexture = renderTexture;
        rawImage.texture = renderTexture;
    }

    public void OpenGalleryForVideo()
    {
        NativeGallery.Permission permission = NativeGallery.GetVideoFromGallery((path) =>
        {
            if (path != null)
            {
                resultText.text = "Selected video";
                PlayVideo(path);
            }
            else
            {
                resultText.text = "Video selection canceled";
            }
        }, "Select a video", "video/*");
    }

    private void PlayVideo(string path)
    {
        if (videoPlayer != null)
        {
            videoPlayer.url = path;
            videoPlayer.Play();
        }
        else
        {
            Debug.LogError("VideoPlayer component not assigned.");
        }
    }

    private void OnDestroy()
    {
        // Clean up
        if (renderTexture != null)
        {
            renderTexture.Release();
        }
    }
}
