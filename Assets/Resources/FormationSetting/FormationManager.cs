using UnityEngine;

public class FormationManager : MonoBehaviour
{
    public GameObject assetPrefab; // 複製するアセットのプレハブ
    public int numberOfPeople; // スクリプトから設定する人数

    private Vector3[] positions = {
        new Vector3(0, 0, 0),
        new Vector3(0, 0, 2),
        new Vector3(0, 0, -2),
        new Vector3(0, 0, 4),
        new Vector3(0, 0, -4),
        new Vector3(0, 0, 6),
        new Vector3(0, 0, -6),
        new Vector3(0, 0, 8),
        new Vector3(0, 0, -8),
        new Vector3(0, 0, 10),
        new Vector3(-1, 0, 0),
        new Vector3(-1, 0, 2),
        new Vector3(-1, 0, -2),
        new Vector3(-1, 0, 4),
        new Vector3(-1, 0, -4),
        new Vector3(-1, 0, 6),
        new Vector3(-1, 0, -6),
        new Vector3(-1, 0, 8),
        new Vector3(-1, 0, -8),
        new Vector3(-1, 0, 10)
    };

    void Start()
    {
        int numberOfPeople = PlayerPrefs.GetInt("SelectedNumber", 1); // デフォルトは1
        ArrangeAssets(numberOfPeople);
    }

    void ArrangeAssets(int count)
    {
        for (int i = 0; i < count; i++)
        {
            // 複製して位置を設定
            GameObject newAsset = Instantiate(assetPrefab);

            if (i < positions.Length)
            {
                newAsset.transform.position = positions[i];
                newAsset.transform.rotation = Quaternion.Euler(0, 90, 0); // y軸を90度回転
            }
            else
            {
                Debug.LogWarning("アセットの数がポジションの数を超えています。");
            }
        }
    }
}
