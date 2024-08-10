using UnityEngine;
using UnityEngine.UI;

public class NumberPicker : MonoBehaviour
{
    public Dropdown numberDropdown;
    public Text selectedValueText;
    public Button confirmButton;
    public CanvasScaler canvasScaler;

    void Start()
    {
        // キャンバススケーラーの設定
        if (canvasScaler != null)
        {
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            canvasScaler.referenceResolution = new Vector2(1920, 1080); // 例としてフルHD解像度
        }
        
        // ドロップダウンの初期値を設定
        numberDropdown.value = 0;
        UpdateSelectedValueText();

        // ドロップダウンの選択が変更されたときのイベント
        numberDropdown.onValueChanged.AddListener(delegate { UpdateSelectedValueText(); });

        // ボタンがクリックされたときのイベント
        confirmButton.onClick.AddListener(OnConfirmButtonClicked);
    }

    void UpdateSelectedValueText()
    {
        // ドロップダウンで選択された値を取得
        int selectedValue = numberDropdown.value + 1; // +1 はオプションの開始値が1から
        selectedValueText.text = "人数: " + selectedValue.ToString();
    }

    void OnConfirmButtonClicked()
    {
        int numberOfPeople = numberDropdown.value + 1; // +1 はオプションの開始値が1から
        Debug.Log("設定された人数: " + numberOfPeople);
        // 設定された人数で何かを実行する処理をここに追加
    }
}
