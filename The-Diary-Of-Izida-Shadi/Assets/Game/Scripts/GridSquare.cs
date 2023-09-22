using UnityEngine;
using TMPro;
using System.Collections.Generic;
using static GameEvents;

public class GridSquare : MonoBehaviour
{
    public int SquareIndex { get; set; }

    private AlphabetData.LetterData _normalLetterData;
    private AlphabetData.LetterData _selectedLetterData;
    private AlphabetData.LetterData _correctLetterData;

    private SpriteRenderer _displayImage;
    private TextMeshPro _text;

    private bool _selected;
    private bool _clicked;

    public int Index { get; set; } = -1;

    private bool _correct;

    private void OnEnable()
    {
        GameEvents.OnEnableSquareSelection += OnEnableSquareSelection;
        GameEvents.OnDisableSquareSelection += OnDisableSquareSelection;
        GameEvents.OnSelectSquare += OnSelectSquare;
        GameEvents.OnCorrectWord += CorrectWord;
    }

    private void OnDisable()
    {
        GameEvents.OnEnableSquareSelection -= OnEnableSquareSelection;
        GameEvents.OnDisableSquareSelection -= OnDisableSquareSelection;
        GameEvents.OnSelectSquare -= OnSelectSquare;
        GameEvents.OnCorrectWord -= CorrectWord;
    }

    private void CorrectWord(string word, List<int> squareIndexes)
    {
        if(_selected && squareIndexes.Contains(Index))
        {
            _correct = true;
            _displayImage.sprite = _correctLetterData.Image;
        }

        _selected = false;
        _clicked = false;
    }

    public void OnEnableSquareSelection()
    {
        _clicked = true;
        _selected = false;
    }

    public void OnDisableSquareSelection()
    {
        _selected = false;
        _clicked = false;

        if (_correct)
            _displayImage.sprite = _correctLetterData.Image;
        else
            _displayImage.sprite = _normalLetterData.Image;
    }

    private void OnSelectSquare(Vector3 position)
    {
        if (gameObject.transform.position == position)
            _displayImage.sprite = _selectedLetterData.Image;
    }

    private void Start()
    {
        _selected = false;
        _clicked = false;
        _correct = false;

        _displayImage = GetComponent<SpriteRenderer>();
        _text = transform.GetChild(0).GetComponent<TextMeshPro>();
    }

    public void SetSpriteAnLetter(AlphabetData.LetterData normalLetterData, AlphabetData.LetterData selectedLetterData,
        AlphabetData.LetterData correctLetterData, string letter)
    {
        _normalLetterData = normalLetterData;
        _selectedLetterData = selectedLetterData;
        _correctLetterData = correctLetterData;

        GetComponent<SpriteRenderer>().sprite = _normalLetterData.Image;
        transform.GetChild(0).GetComponent<TextMeshPro>().text = _normalLetterData.Letter;
    }

    private void OnMouseDown()
    {
        OnEnableSquareSelection();
        GameEvents.OnEnableSquareSelectionMethod();
        CheckSquare();
        _displayImage.sprite = _selectedLetterData.Image;
    }

    private void OnMouseEnter()
    {
        CheckSquare();
    }

    private void OnMouseUp()
    {
        GameEvents.OnClearSelectionMethod();
        GameEvents.OnDisableSquareSelectionMethod();
    }

    public void CheckSquare()
    {
        if(_selected == false && _clicked == true)
        {
            _selected = true;
            GameEvents.OnCheckSquareMethod(_normalLetterData.Letter, gameObject.transform.position, Index);
        }
    }
}
