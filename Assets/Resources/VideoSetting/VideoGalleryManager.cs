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
        // RenderTextureを作成し、VideoPlayerに設定する
        renderTexture = new RenderTexture(1920, 1080, 0); // 解像度は適宜設定してください
        if (videoPlayer != null)
        {
            videoPlayer.targetTexture = renderTexture;
            if (rawImage != null)
            {
                rawImage.texture = renderTexture;
                rawImage.gameObject.SetActive(false); // 初期状態では非表示
            }
        }
    }

    public void OpenGalleryForVideo()
    {
        NativeGallery.Permission permission = NativeGallery.GetVideoFromGallery((path) =>
        {
            if (path != null)
            {
                resultText.text = "Video is Selected";
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
            videoPlayer.Prepare();  // Prepareメソッドで動画の準備を開始

            videoPlayer.prepareCompleted += (source) =>
            {
                // 動画の準備が完了したら再生開始
                videoPlayer.Play();
                // RawImageを表示する
                if (rawImage != null)
                {
                    rawImage.gameObject.SetActive(true);
                }
            };
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
