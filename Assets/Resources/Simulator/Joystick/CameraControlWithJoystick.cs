using UnityEngine;

public class CameraControlWithJoystick : MonoBehaviour
{
    public Joystick joystick;
    public float rotationSpeed = 0.1f;

    void Update()
    {
        Vector2 input = joystick.GetInput();
        Vector3 rotation = new Vector3(-input.y, input.x, 0) * rotationSpeed;
        transform.eulerAngles += rotation;
    }
}
