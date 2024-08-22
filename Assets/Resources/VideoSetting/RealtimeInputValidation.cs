using System;
using UnityEngine;
using UnityEngine.UI;

public class RealtimeInputValidation : MonoBehaviour
{
    public InputField urlField;
    public InputField startField;
    public InputField endField;
    public Text errorMessage;

    void Start()
    {
        // InputFieldにイベントリスナーを追加
        urlField.onValueChanged.AddListener(delegate { ValidateUrl(); });
        startField.onValueChanged.AddListener(delegate { ValidateStartAndEnd(); });
        endField.onValueChanged.AddListener(delegate { ValidateStartAndEnd(); });
    }

    private void ValidateUrl()
    {
        if (!IsValidUrl(urlField.text))
        {
            errorMessage.text = "Invalid URL.";
        }
        else
        {
            errorMessage.text = "";
        }
    }

    private void ValidateStartAndEnd()
    {
        if (!IsNaturalNumber(startField.text) || !IsNaturalNumber(endField.text))
        {
            errorMessage.text = "Start and End must be natural numbers.";
            return;
        }

        int start = int.Parse(startField.text);
        int end = int.Parse(endField.text);

        if (end <= start)
        {
            errorMessage.text = "End must be greater than Start.";
            return;
        }

        if (end - start > 30)
        {
            errorMessage.text = "The difference between End and Start must be 30 seconds or less.";
            return;
        }

        errorMessage.text = "";
    }

    private bool IsValidUrl(string url)
    {
        return Uri.TryCreate(url, UriKind.Absolute, out Uri uriResult) 
               && (uriResult.Scheme == Uri.UriSchemeHttp || uriResult.Scheme == Uri.UriSchemeHttps);
    }

    private bool IsNaturalNumber(string value)
    {
        return int.TryParse(value, out int number) && number >= 0;  // 0も受け入れる
    }
}
