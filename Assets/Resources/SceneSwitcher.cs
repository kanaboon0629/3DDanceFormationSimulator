using UnityEngine;
using UnityEngine.SceneManagement; // SceneManagerを使用するために必要

public class SceneSwitcher : MonoBehaviour
{
    // 指定されたシーンに遷移するメソッド
    public void SwitchToScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    // シーンを次に進めるメソッド（例：現在のシーンの次のシーンに遷移）
    public void SwitchToNextScene()
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        int nextSceneIndex = (currentSceneIndex + 1) % SceneManager.sceneCountInBuildSettings;
        SceneManager.LoadScene(nextSceneIndex);
    }
}
