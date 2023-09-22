using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WordsGrid : MonoBehaviour
{
    public GameData CurrentGameData;
    public GameObject GridSquarePrefab;
    public AlphabetData AlphabetData;

    public float SquareOffset = 0.0f;
    public float TopPosition;

    private List<GameObject> _squareList = new List<GameObject>();

    private void Start()
    {
        SpawnGridSquares();
        SetSquaresPosition();
    }

    private void SpawnGridSquares()
    {
        if(CurrentGameData != null)
        {
            var squareScale = GetSquareScale(new Vector3(1.5f, 1.5f, 0.1f));

            foreach(var squares in CurrentGameData.selectedBoardData.Board)
            {
                foreach(var squareLetter in squares.Row)
                {
                    var normalLetterData = AlphabetData.AlphabetNormal.Find(data => data.Letter == squareLetter);
                    var selectedLetterData = AlphabetData.AlphabetHighlighted.Find(data => data.Letter == squareLetter);
                    var correctLetterData = AlphabetData.AlphabetWrong.Find(data => data.Letter == squareLetter);

                    if (normalLetterData.Image == null || selectedLetterData.Image == null)
                        Debug.Log("Sprite Not Set");
                    else
                    {
                        _squareList.Add(Instantiate(GridSquarePrefab));
                        _squareList[_squareList.Count - 1].GetComponent<GridSquare>().SetSpriteAnLetter(normalLetterData, correctLetterData, selectedLetterData, squareLetter);
                        _squareList[_squareList.Count - 1].transform.SetParent(transform);
                        _squareList[_squareList.Count - 1].GetComponent<Transform>().position = new Vector3(0f, 0f, 0f);
                        _squareList[_squareList.Count - 1].transform.localScale = squareScale;
                        _squareList[_squareList.Count - 1].GetComponent<GridSquare>().Index = _squareList.Count - 1;
                    }
                }
            }
        }
    }

    private void SetSquaresPosition()
    {
        var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
        var squareTransform = _squareList[0].GetComponent<Transform>();

        var offset = new Vector2
        {
            x = (squareRect.width * squareTransform.localScale.x + SquareOffset) * 0.01f,
            y = (squareRect.height * squareTransform.localScale.y + SquareOffset) * 0.01f
        };

        var startPosition = GetFirstSquarePosition();

        int columnNumber = 0;
        int rowNumber = 0;

        foreach(var square in _squareList)
        {
            if(rowNumber + 1 > CurrentGameData.selectedBoardData.Rows)
            {
                columnNumber++;
                rowNumber = 0;
            }

            var positionX = startPosition.x + offset.x * columnNumber;
            var positionY = startPosition.y + offset.y * rowNumber;

            square.GetComponent<Transform>().position = new Vector2(positionX, positionY);
            rowNumber++;
        }
    }

    private Vector2 GetFirstSquarePosition()
    {
        var startPosition = new Vector2(0f, transform.position.y);
        var squareRect = _squareList[0].GetComponent<SpriteRenderer>().sprite.rect;
        var squareTransform = _squareList[0].GetComponent<Transform>();
        var squareSize = new Vector2(0f, 0f);

        squareSize.x = squareRect.width * squareTransform.localScale.x;
        squareSize.y = squareRect.height * squareTransform.localScale.y;

        var midWidthPosition = (((CurrentGameData.selectedBoardData.Columns - 1) * squareSize.x) / 2) * 0.01f;
        var midWidthHeight = (((CurrentGameData.selectedBoardData.Rows - 1) * squareSize.y) / 2) * 0.01f;

        startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
        startPosition.y += midWidthHeight;

        return startPosition;
    }

    private Vector3 GetSquareScale(Vector3 defaultScale)
    {
        var finalScale = defaultScale;
        var adjustment = 0.01f;

        while(ShouldScaleDown(finalScale))
        {
            finalScale.x -= adjustment;
            finalScale.y -= adjustment;

            if(finalScale.x <= 0 || finalScale.y <= 0)
            {
                finalScale.x = adjustment;
                finalScale.y = adjustment;

                return finalScale;
            }
        }

        return finalScale;
    }

    private bool ShouldScaleDown(Vector3 targetScale)
    {
        var squareRect = GridSquarePrefab.GetComponent<SpriteRenderer>().sprite.rect;
        var squareSize = new Vector2(0f, 0f);
        var startPosition = new Vector2(0f, 0f);

        squareSize.x = (squareRect.width * targetScale.x) + SquareOffset;
        squareSize.y = (squareRect.height * targetScale.y) + SquareOffset;

        var midWidthPosition = ((CurrentGameData.selectedBoardData.Columns * squareSize.x) / 2) * 0.01f;
        var midWidthHeight = ((CurrentGameData.selectedBoardData.Rows * squareSize.y) / 2) * 0.01f;

        startPosition.x = (midWidthPosition != 0) ? midWidthPosition * -1 : midWidthPosition;
        startPosition.y = midWidthHeight;

        return startPosition.x < GetHalfScreenWidth() * -1 || startPosition.y > TopPosition;
    }

    private float GetHalfScreenWidth()
    {
        float height = Camera.main.orthographicSize * 2;
        float width = (1.7f * height) * Screen.width / Screen.height;

        return width / 2;
    }
}
