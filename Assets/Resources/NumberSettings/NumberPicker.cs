using UnityEngine;
using UnityEngine.UI;

public class NumberPicker : MonoBehaviour
{
    public Dropdown numberDropdown;
    public Text selectedValueText;
    public Button confirmButton;

    void Start()
    {
        // ドロップダウンの初期値を設定
        numberDropdown.value = 0;
        UpdateSelectedValueText();

        // ドロップダウンの選択が変更されたときのイベント
        numberDropdown.onValueChanged.AddListener(delegate { UpdateSelectedValueText(); });

        // ボタンがクリックされたときのイベント
        confirmButton.onClick.AddListener(OnConfirmButtonClicked);

        // プレイヤーの設定から初期値をロード
        int savedValue = PlayerPrefs.GetInt("SelectedNumber", 1); // デフォルトは1
        numberDropdown.value = savedValue - 1; // プレイヤーの設定から取得するためには -1
        UpdateSelectedValueText();
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
        
        // プレイヤーの設定に人数を保存
        PlayerPrefs.SetInt("SelectedNumber", numberOfPeople);
        PlayerPrefs.Save(); // 保存
    }
}
