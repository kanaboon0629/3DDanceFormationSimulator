using UnityEngine;

public class ObjectDataSaver : MonoBehaviour
{
    private string saveTag = "Saveable";  // 保存したいオブジェクトのタグ

    // オブジェクトデータを保存するメソッド
    public void SaveObjectData()
    {
        GameObject[] objectsToSave = GameObject.FindGameObjectsWithTag(saveTag);  // タグでオブジェクトを探す

        for (int i = 0; i < objectsToSave.Length; i++)
        {
            GameObject obj = objectsToSave[i];
            Renderer objRenderer = obj.GetComponent<Renderer>();

            // 位置の保存
            PlayerPrefs.SetFloat("ObjectPosX_" + i, obj.transform.position.x);
            PlayerPrefs.SetFloat("ObjectPosY_" + i, obj.transform.position.y);
            PlayerPrefs.SetFloat("ObjectPosZ_" + i, obj.transform.position.z);
            Debug.Log($"Object {i} Position: ({obj.transform.position.x}, {obj.transform.position.y}, {obj.transform.position.z})");  // デバッグログで位置を確認

            // 色の保存
            Color color = objRenderer.material.color;
            PlayerPrefs.SetFloat("ObjectColorR_" + i, color.r);
            PlayerPrefs.SetFloat("ObjectColorG_" + i, color.g);
            PlayerPrefs.SetFloat("ObjectColorB_" + i, color.b);
            Debug.Log($"Object {i} Color: ({color.r}, {color.g}, {color.b})");  // デバッグログで色を確認
        }

        // オブジェクト数を保存
        PlayerPrefs.SetInt("ObjectCount", objectsToSave.Length);
        PlayerPrefs.Save();  // PlayerPrefs にデータを保存
    }
}
