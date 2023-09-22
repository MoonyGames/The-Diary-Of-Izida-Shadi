using UnityEngine;
using TMPro;
using System;

public class LastOrAllWordsCount : MonoBehaviour
{
    public static LastOrAllWordsCount Singleton { get; private set; } = null;

    [SerializeField] private RectTransform _wordListHandlerObject;

    [SerializeField] private TextMeshProUGUI _allWordstext, _wordsLast;

    [SerializeField] private GameObject _winMenu;

    private int _wordsCount = 0;

    private void Awake()
    {
        if (Singleton == null) Singleton = this;
        else Destroy(this);
    }

    private void Start()
    {
        Invoke(nameof(SetAllWordsCount), 0.1f);
    }

    private void SetAllWordsCount()
    {
        _wordsCount = _wordListHandlerObject.childCount;

        _allWordstext.text = _wordsCount.ToString();
        _wordsLast.text = _wordsCount.ToString();
    }

    public void DecreaseLastWordsCount()
    {
        _wordsLast.text = (Convert.ToInt32(_wordsLast.text) - 1).ToString();

        if(Convert.ToInt32(_wordsLast.text) == 0) _winMenu.SetActive(true);
    }
}
