// using System;
// using System.Diagnostics;
// using System.IO;
// using System.Threading.Tasks;
// using UnityEngine;
// using System.Collections;
// using UnityEngine.UI;


// public class RunPythonScript : MonoBehaviour
// {
//     public GameObject loadingSpinner; // ローディングスピナーのUIオブジェクト
//     public Slider progressBar; // 進行状況バーのUIオブジェクト

//     private IEnumerator Start()
//     {
//         yield return null;

//         string url = PlayerPrefs.GetString("url");
//         string start = PlayerPrefs.GetString("start");
//         string end = PlayerPrefs.GetString("end");

//         loadingSpinner.SetActive(true);

//         progressBar.gameObject.SetActive(true);
//         progressBar.value = 0f;

//         yield return StartCoroutine(SearchPrefabs(url, start, end));

//         loadingSpinner.SetActive(false);
//         progressBar.gameObject.SetActive(false);
//     }
//     private IEnumerator SearchPrefabs(string url, string start, string end)
//     {
//         try
//         {
//             string scriptPath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "activate_and_run.sh");
//             string arguments = $"{scriptPath} \"{url}\" \"{start}\" \"{end}\"";

//             ProcessStartInfo startInfo = new ProcessStartInfo
//             {
//                 FileName = "bash",
//                 Arguments = arguments,
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
//                     yield break;
//                 }

//                 string errorFilePath = Path.Combine(Application.dataPath, "StridedTransformerForUnity", "errors.txt");
//                 Task outputTask = Task.Run(() => ReadStream(process.StandardOutput, "Python Output:"));
//                 Task errorTask = Task.Run(() => ReadStreamToFile(process.StandardError, errorFilePath, "Python Error:"));

//                 process.WaitForExit();
//                 Task.WhenAll(outputTask, errorTask).Wait();

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

//         for (int i = 0; i <= 100; i++)
//         {
//             progressBar.value = i / 100f;
//             yield return new WaitForSeconds(0.1f);
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
//         using (StreamWriter fileWriter = new StreamWriter(filePath, append: false))
//         {
//             string line;
//             while ((line = await reader.ReadLineAsync()) != null)
//             {
//                 UnityEngine.Debug.Log($"{prefix}\n{line}");
//                 await fileWriter.WriteLineAsync($"{prefix}\n{line}");
//             }
//         }
//     }
// }
