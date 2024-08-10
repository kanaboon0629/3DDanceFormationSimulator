using UnityEngine;

public class CameraStickControl : MonoBehaviour
{
    public float moveSpeed = 5f;  // カメラの移動速度
    public float stickSensitivity = 1f;  // スティックの感度

    void Update()
    {
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");

        Vector3 moveDirection = new Vector3(horizontal, 0, vertical);
        transform.Translate(moveDirection * moveSpeed * Time.deltaTime, Space.World);
    }
}
