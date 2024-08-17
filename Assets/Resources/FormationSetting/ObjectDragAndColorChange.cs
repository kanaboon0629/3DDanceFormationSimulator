using UnityEngine;

public class ObjectDragAndColorChange : MonoBehaviour
{
    private Vector3 offset;
    private bool isDragging = false;
    private Renderer objRenderer;
    private Vector3 startTouchPosition;
    private float tapThreshold = 0.1f;  // タップと判断する移動距離の閾値

    void Start()
    {
        objRenderer = GetComponent<Renderer>();
        objRenderer.material.color = Color.white;  // 初期値を白に設定
    }

    void Update()
    {
        if (isDragging)
        {
            Vector3 screenPoint = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.WorldToScreenPoint(transform.position).z);
            Vector3 newPos = Camera.main.ScreenToWorldPoint(screenPoint) + offset;
            transform.position = newPos;
        }
    }

    void OnMouseDown()
    {
        isDragging = true;
        startTouchPosition = Input.mousePosition;  // タッチ開始時の位置を保存
        offset = transform.position - Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.WorldToScreenPoint(transform.position).z));
    }

    void OnMouseUp()
    {
        isDragging = false;

        // タッチ開始位置と終了位置の距離が閾値以下ならばタップと判断
        if (Vector3.Distance(startTouchPosition, Input.mousePosition) < tapThreshold)
        {
            // 色を切り替える
            if (objRenderer.material.color == Color.white)
            {
                objRenderer.material.color = Color.red;
            }
            else
            {
                objRenderer.material.color = Color.white;
            }
        }
    }
}
