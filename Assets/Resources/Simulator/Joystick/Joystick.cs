using UnityEngine;
using UnityEngine.EventSystems;

public class Joystick : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    public RectTransform joystick;
    public RectTransform joystickBackground;
    public float moveSpeed = 5f;

    private Vector2 inputVector;

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        joystick.anchoredPosition = Vector2.zero;
        inputVector = Vector2.zero;
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 direction = eventData.position - (Vector2)joystickBackground.position;
        inputVector = direction.normalized * Mathf.Min(direction.magnitude / (joystickBackground.sizeDelta.x / 2), 1);

        joystick.anchoredPosition = inputVector * (joystickBackground.sizeDelta.x / 2);
    }

    public Vector2 GetInput()
    {
        return inputVector;
    }
}
