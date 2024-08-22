using UnityEngine;

public class VideoPickerButton : MonoBehaviour
{
    public void OnPickVideoButtonClicked()
    {
        Debug.Log("OnPickVideoButtonClicked called.");

        VideoPicker videoPicker = GetComponent<VideoPicker>();

        if (videoPicker != null)
        {
            Debug.Log("VideoPicker component found, calling PickVideo.");
            videoPicker.PickVideo();
        }
        else
        {
            Debug.LogError("VideoPicker component is missing on this GameObject.");
        }
    }
}
