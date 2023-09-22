using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using TMPro;

public class SearchingWord : MonoBehaviour
{
    public TextMeshProUGUI DisplayedText;
    public Image CrossLine;

    private string _word;

    private void OnEnable()
    {
        GameEvents.OnCorrectWord += CorrectWord;
    }

    private void OnDisable()
    {
        GameEvents.OnCorrectWord -= CorrectWord;
    }

    public void SetWord(string word)
    {
        _word = word;
        DisplayedText.text = word;
    }

    private void CorrectWord(string word, List<int> squareIndexes)
    {
        if(word == _word)
        {
            CrossLine.gameObject.SetActive(true);
        }
    }
}
