using System;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoPlayerScript : MonoBehaviour
{
    public VideoPlayer videoPlayer; // 動画再生用のVideoPlayer
    public RawImage rawImage; // 動画を表示するためのRawImage

    void Start()
    {
        // 最初にRawImageを非表示にする
        if (rawImage != null)
        {
            rawImage.gameObject.SetActive(false);
        }
    }

    public void PlayLatestVideo()
    {
        string videoDirectory = Path.Combine(Application.dataPath, "StreamingAssets");

        if (Directory.Exists(videoDirectory))
        {
            string[] videoFiles = Directory.GetFiles(videoDirectory, "*.mp4");

            if (videoFiles.Length > 0)
            {
                // 最も新しいファイルを取得
                string latestVideo = videoFiles[0];
                DateTime latestDate = File.GetCreationTime(latestVideo);

                foreach (string videoFile in videoFiles)
                {
                    DateTime fileDate = File.GetCreationTime(videoFile);
                    if (fileDate > latestDate)
                    {
                        latestDate = fileDate;
                        latestVideo = videoFile;
                    }
                }

                // VideoPlayerに動画をセットして再生
                videoPlayer.url = latestVideo;

                // RawImageを表示する
                if (rawImage != null)
                {
                    rawImage.gameObject.SetActive(true);
                }

                videoPlayer.Play();
            }
            else
            {
                UnityEngine.Debug.LogError("No video files found in the directory.");
            }
        }
        else
        {
            UnityEngine.Debug.LogError("Video directory does not exist.");
        }
    }
}
