using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class InputFieldHandler : MonoBehaviour
{
    public InputField urlInputField;
    public InputField startInputField;
    public InputField endInputField;
    public Text errorMessage;

    public void OnSubmit(string nextSceneName)
    {
        string url = urlInputField.text;
        string start = startInputField.text;
        string end = endInputField.text;

        string validationError = ValidateInputs(url, start, end);

        if (string.IsNullOrEmpty(validationError))
        {
            // 値をシーン間で保持するために、PlayerPrefsを使用
            PlayerPrefs.SetString("url", url);
            PlayerPrefs.SetString("start", start);
            PlayerPrefs.SetString("end", end);

            // 次のシーンに移動
            SceneManager.LoadScene(nextSceneName);
        }
        else
        {
            // エラーメッセージを表示
            if (errorMessage != null)
            {
                errorMessage.text = validationError;
            }
        }
    }

    private string ValidateInputs(string url, string start, string end)
    {
        if (!IsValidUrl(url))
        {
            return "Invalid URL.";
        }

        if (!IsNaturalNumber(start, out int startValue))
        {
            return "Start must be a natural number.";
        }

        if (!IsNaturalNumber(end, out int endValue))
        {
            return "End must be a natural number.";
        }

        if (endValue <= startValue)
        {
            return "End must be greater than Start.";
        }

        if (endValue - startValue > 30)
        {
            return "The difference between End and Start must be 30 seconds or less.";
        }

        return string.Empty; // No errors
    }

    private bool IsValidUrl(string url)
    {
        return Uri.TryCreate(url, UriKind.Absolute, out Uri uriResult) 
               && (uriResult.Scheme == Uri.UriSchemeHttp || uriResult.Scheme == Uri.UriSchemeHttps);
    }

    private bool IsNaturalNumber(string value, out int number)
    {
        // 0も自然数として許可するため、number >= 0
        return int.TryParse(value, out number) && number >= 0;
    }
}
