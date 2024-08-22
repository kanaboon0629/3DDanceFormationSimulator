using UnityEngine;
using UnityEngine.UI;

public class TabController : MonoBehaviour
{
    public GameObject[] tabs; // タブボタンの配列
    public GameObject[] contents; // タブコンテンツの配列
    public Color selectedColor = Color.white; // 選択中の色
    public Color unselectedColor = new Color(1f, 1f, 1f, 0.5f); // 非選択の色（白の半透明）

    public int initialTabIndex = 0; // 初期表示するタブのインデックス

    private void Start()
    {
        // 初期タブの設定
        ShowTab(initialTabIndex);
    }

    public void ShowTab(int index)
    {
        // すべてのタブとコンテンツを非表示にする
        foreach (var content in contents)
        {
            content.SetActive(false);

            // 非選択時のパネル色の設定
            Image contentImage = content.GetComponent<Image>();
            if (contentImage != null)
            {
                contentImage.color = unselectedColor;
            }
        }

        foreach (var tab in tabs)
        {
            Button tabButton = tab.GetComponent<Button>();
            ColorBlock colors = tabButton.colors;
            colors.normalColor = unselectedColor;
            tabButton.colors = colors;
        }

        // 選択されたタブとそのコンテンツを表示する
        contents[index].SetActive(true);

        // 選択されたタブの色を変更
        Button selectedTabButton = tabs[index].GetComponent<Button>();
        ColorBlock selectedColors = selectedTabButton.colors;
        selectedColors.normalColor = selectedColor;
        selectedTabButton.colors = selectedColors;

        // 選択されたコンテンツのパネル色を設定
        Image selectedPanelImage = contents[index].GetComponent<Image>();
        if (selectedPanelImage != null)
        {
            selectedPanelImage.color = selectedColor;
        }
    }
}
