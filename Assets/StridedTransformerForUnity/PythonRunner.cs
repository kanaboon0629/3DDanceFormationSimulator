// using UnityEditor;
// using System;
// using System.Diagnostics;
// using System.IO;
// using System.Threading.Tasks;
// using UnityEngine;

// public class MenuItem_SearchPrefabs_Class
// {
//     [MenuItem("Python Scripts/stridedtransformer")]
//     public static void SearchPrefabs()
//     {
//         try
//         {
//             string scriptPath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "activate_and_run.sh");
//             ProcessStartInfo startInfo = new ProcessStartInfo
//             {
//                 FileName = "bash",
//                 Arguments = scriptPath,
//                 UseShellExecute = false,
//                 RedirectStandardOutput = true,
//                 RedirectStandardError = true,
//                 CreateNoWindow = true
//             };

//             using (Process process = Process.Start(startInfo))
//             {
//                 if (process == null)
//                 {
//                     UnityEngine.Debug.LogError("Failed to start the process.");
//                     return;
//                 }

//                 // エラーメッセージを保存するファイルのパス
//                 string errorFilePath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "errors.txt");

//                 // 標準出力と標準エラーの非同期読み取り
//                 Task outputTask = Task.Run(() => ReadStream(process.StandardOutput, "Python Output:"));
//                 Task errorTask = Task.Run(() => ReadStreamToFile(process.StandardError, errorFilePath, "Python Error:"));

//                 // プロセスが終了するまで待つ
//                 process.WaitForExit();

//                 // ストリームの読み取りが完了するのを待つ
//                 Task.WhenAll(outputTask, errorTask).Wait();

//                 // プロセスの終了コードを確認
//                 if (process.ExitCode != 0)
//                 {
//                     UnityEngine.Debug.LogError($"Process exited with code {process.ExitCode}");
//                 }
//             }
//         }
//         catch (Exception ex)
//         {
//             UnityEngine.Debug.LogError($"An error occurred: {ex.Message}");
//         }
//     }

//     private static async Task ReadStream(StreamReader reader, string prefix)
//     {
//         string line;
//         while ((line = await reader.ReadLineAsync()) != null)
//         {
//             UnityEngine.Debug.Log($"{prefix}\n{line}");
//         }
//     }

//     private static async Task ReadStreamToFile(StreamReader reader, string filePath, string prefix)
//     {
//     // append: false に変更してファイルをリセット
//     using (StreamWriter fileWriter = new StreamWriter(filePath, append: false))
//     {
//         string line;
//         while ((line = await reader.ReadLineAsync()) != null)
//         {
//             UnityEngine.Debug.Log($"{prefix}\n{line}");
//             await fileWriter.WriteLineAsync($"{prefix}\n{line}");
//         }
//     }
//     }
// }
