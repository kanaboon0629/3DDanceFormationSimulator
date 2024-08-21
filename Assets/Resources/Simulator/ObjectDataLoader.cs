using UnityEngine;

public class ObjectDataLoader : MonoBehaviour
{
    public GameObject assetPrefab;  // ロードする際に使用するプレハブ

    void Start()
    {
        LoadObjectData();
    }

    void LoadObjectData()
    {
        int objectCount = PlayerPrefs.GetInt("ObjectCount", 0);  // 保存されたオブジェクトの数を取得

        for (int i = 0; i < objectCount; i++)
        {
            GameObject newObj = Instantiate(assetPrefab);

            // 位置の復元
            float posX = PlayerPrefs.GetFloat("ObjectPosX_" + i, 0);
            float posY = PlayerPrefs.GetFloat("ObjectPosY_" + i, 0);
            float posZ = PlayerPrefs.GetFloat("ObjectPosZ_" + i, 0);
            newObj.transform.position = new Vector3(posX, posY, posZ);

            // すべての子オブジェクトのRendererコンポーネントを取得
            Renderer[] renderers = newObj.GetComponentsInChildren<Renderer>();

            // 色の復元
            float colorR = PlayerPrefs.GetFloat("ObjectColorR_" + i, 1);
            float colorG = PlayerPrefs.GetFloat("ObjectColorG_" + i, 1);
            float colorB = PlayerPrefs.GetFloat("ObjectColorB_" + i, 1);
            Color restoredColor = new Color(colorR, colorG, colorB);

            // すべてのRendererコンポーネントに対して色を適用
            foreach (Renderer renderer in renderers)
            {
                // 複数のマテリアルが存在する場合も考慮
                foreach (Material mat in renderer.materials)
                {
                    mat.color = restoredColor;
                }
            }
        }
    }
}
