using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class CameraControlOnSwipe : MonoBehaviour
{
    public Camera mainCamera; // メインカメラをアサイン
    public float moveSpeed = 0.1f;
    public float scrollSensitivity = 0.5f; // スクロールの感度を調整


    private Vector3 lastTouchPosition; // 前回のタッチ位置
    private bool isDragging = false;

    void Update()
    {
        if (Input.GetMouseButtonDown(0) && !IsPointerOverUIObject())
        {
            lastTouchPosition = Input.mousePosition;
            isDragging = true;
        }

        if (Input.GetMouseButton(0) && isDragging)
        {
            Vector3 touchPosition = Input.mousePosition;
            Vector3 touchDelta = touchPosition - lastTouchPosition;

            // スクロールの感度を調整
            Vector3 movement = new Vector3(0, -touchDelta.y * moveSpeed * scrollSensitivity, -touchDelta.x * moveSpeed * scrollSensitivity);
            transform.Translate(movement, Space.World);

            lastTouchPosition = touchPosition;
        }

        if (Input.GetMouseButtonUp(0))
        {
            isDragging = false;
        }
    }

    bool IsPointerOverUIObject()
    {
        PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
        eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
        return results.Count > 0;
    }
}
