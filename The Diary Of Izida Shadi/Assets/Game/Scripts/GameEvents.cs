using UnityEngine;
using System.Collections.Generic;

public static class GameEvents
{
    public delegate void EnableSquareSelection();
    public static event EnableSquareSelection OnEnableSquareSelection;

    public static void OnEnableSquareSelectionMethod() => OnEnableSquareSelection?.Invoke();

    public delegate void DisableSquareSelection();
    public static event DisableSquareSelection OnDisableSquareSelection;

    public static void OnDisableSquareSelectionMethod() => OnDisableSquareSelection?.Invoke();

    public delegate void SelectSquare(Vector3 position);
    public static event SelectSquare OnSelectSquare;

    public static void OnSelectSquareMethod(Vector3 position) => OnSelectSquare?.Invoke(position);

    public delegate void CheckSquare(string letter, Vector3 squarePosition, int squareIndex);
    public static event CheckSquare OnCheckSquare;

    public static void OnCheckSquareMethod(string letter, Vector3 squarePosition, int squareIndex) => OnCheckSquare?.Invoke(letter, squarePosition, squareIndex);

    public delegate void ClearSelection();
    public static event ClearSelection OnClearSelection;

    public static void OnClearSelectionMethod() => OnClearSelection?.Invoke();

    public delegate void CorrectWord(string word, List<int> squareIndexes);

    public static event CorrectWord OnCorrectWord;

    public static void CorrectWordMethod(string word, List<int> squareIndexes)
    {
        if(OnCorrectWord != null)
        {
            OnCorrectWord(word, squareIndexes);
        }
    }
}
