using UnityEditor;
using System;
using System.Diagnostics;
using System.IO;
using System.Threading.Tasks;

public class MenuItem_SearchPrefabs_Class
{
    [MenuItem("Python Scripts/stridedtransformer")]
    public static void SearchPrefabs()
    {
        string scriptPath = "Assets/StridedTransformerForUnity/activate_and_run.sh";
        ProcessStartInfo startInfo = new ProcessStartInfo
        {
            FileName = "bash",
            Arguments = scriptPath,
            UseShellExecute = false,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            CreateNoWindow = true
        };

        using (Process process = Process.Start(startInfo))
        {
            // 標準出力と標準エラーの非同期読み取り
            Task outputTask = Task.Run(() => ReadStream(process.StandardOutput, "Python Output:"));
            Task errorTask = Task.Run(() => ReadStream(process.StandardError, "Python Error:"));

            // プロセスが終了するまで待つ
            process.WaitForExit();

            // ストリームの読み取りが完了するのを待つ
            Task.WhenAll(outputTask, errorTask).Wait();
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
}
