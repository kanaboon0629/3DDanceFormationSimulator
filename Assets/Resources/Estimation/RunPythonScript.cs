using System;
using System.Diagnostics;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using System.Collections;

public class RunPythonScript : MonoBehaviour
{
    private IEnumerator Start()
    {
        // 次のフレームまで待つ（シーンが完全に読み込まれるまで待機）
        yield return null;

        // 前のシーンからの値を取得
        string url = PlayerPrefs.GetString("url");
        string start = PlayerPrefs.GetString("start");
        string end = PlayerPrefs.GetString("end");

        // スクリプトをスタート時に実行
        SearchPrefabs(url, start, end);
    }

    public void SearchPrefabs(string url, string start, string end)
    {
        try
        {
            string scriptPath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "activate_and_run.sh");
            string arguments = $"{scriptPath} \"{url}\" \"{start}\" \"{end}\"";
            
            ProcessStartInfo startInfo = new ProcessStartInfo
            {
                FileName = "bash",
                Arguments = arguments,
                UseShellExecute = false,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                CreateNoWindow = true
            };

            using (Process process = Process.Start(startInfo))
            {
                if (process == null)
                {
                    UnityEngine.Debug.LogError("Failed to start the process.");
                    return;
                }

                string errorFilePath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "errors.txt");
                Task outputTask = Task.Run(() => ReadStream(process.StandardOutput, "Python Output:"));
                Task errorTask = Task.Run(() => ReadStreamToFile(process.StandardError, errorFilePath, "Python Error:"));

                process.WaitForExit();
                Task.WhenAll(outputTask, errorTask).Wait();

                if (process.ExitCode != 0)
                {
                    UnityEngine.Debug.LogError($"Process exited with code {process.ExitCode}");
                }
            }
        }
        catch (Exception ex)
        {
            UnityEngine.Debug.LogError($"An error occurred: {ex.Message}");
        }
    }

    private static async Task ReadStream(StreamReader reader, string prefix)
    {
        string line;
        while ((line = await reader.ReadLineAsync()) != null)
        {
            UnityEngine.Debug.Log($"{prefix}\n{line}");
        }
    }

    private static async Task ReadStreamToFile(StreamReader reader, string filePath, string prefix)
    {
        // append: false に変更してファイルをリセット
        using (StreamWriter fileWriter = new StreamWriter(filePath, append: false))
        {
            string line;
            while ((line = await reader.ReadLineAsync()) != null)
            {
                UnityEngine.Debug.Log($"{prefix}\n{line}");
                await fileWriter.WriteLineAsync($"{prefix}\n{line}");
            }
        }
    }
}
