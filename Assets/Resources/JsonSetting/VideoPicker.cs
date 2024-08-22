using System.Runtime.InteropServices;
using UnityEngine;

public class VideoPicker : MonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void ShowVideoPicker();

    public void PickVideo()
    {
        ShowVideoPicker();
    }

    // ビデオが選択された後に呼ばれるコールバックメソッド
    private void OnVideoPicked(string videoPath)
    {
        Debug.Log("Video Path: " + videoPath);
        // ビデオパスを使用した処理をここに追加
    }
}
