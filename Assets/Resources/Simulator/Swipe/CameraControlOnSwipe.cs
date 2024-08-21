using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class CameraControlOnSwipe : MonoBehaviour
{
    public Camera mainCamera; // メインカメラをアサイン
    public float moveSpeed = 0.1f;
    public float scrollSensitivity = 0.5f; // スクロールの感度を調整
    public float zoomSpeed = 0.1f; // ズームのスピード
    public float minFov = 15f; // 最小FOV（ズームインの制限）
    public float maxFov = 90f; // 最大FOV（ズームアウトの制限）

    private Vector3 lastTouchPosition; // 前回のタッチ位置
    private bool isDragging = false;

    void Update()
    {
        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && !IsPointerOverUIObject())
        {
            lastTouchPosition = Input.GetTouch(0).position;
            isDragging = true;
        }

        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved && isDragging)
        {
            Vector3 touchPosition = Input.GetTouch(0).position;
            Vector3 touchDelta = touchPosition - lastTouchPosition;

            // スクロールの感度を調整
            Vector3 movement = new Vector3(0, -touchDelta.y * moveSpeed * scrollSensitivity, -touchDelta.x * moveSpeed * scrollSensitivity);
            transform.Translate(movement, Space.World);

            lastTouchPosition = touchPosition;
        }

        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            isDragging = false;
        }

        // ピンチズームの処理
        if (Input.touchCount == 2)
        {
            Touch touch1 = Input.GetTouch(0);
            Touch touch2 = Input.GetTouch(1);

            // 2本の指の位置の前フレームの距離と今の距離を計算
            float prevTouchDeltaMag = (touch1.position - touch1.deltaPosition - (touch2.position - touch2.deltaPosition)).magnitude;
            float touchDeltaMag = (touch1.position - touch2.position).magnitude;

            // 差を計算してズーム量を決定
            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            // カメラのFOVを調整してズームイン/アウト
            float newFov = mainCamera.fieldOfView + deltaMagnitudeDiff * zoomSpeed;
            mainCamera.fieldOfView = Mathf.Clamp(newFov, minFov, maxFov);
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
