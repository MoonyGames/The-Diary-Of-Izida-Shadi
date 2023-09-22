using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeLevel : MonoBehaviour
{
    [SerializeField] private GameData _currentGameData;
    [SerializeField] private BoardData[] _levels = new BoardData[10];

    public void LoadLevel()
    {
        int level = PlayerPrefs.GetInt("Level", 1);

        _currentGameData.selectedBoardData = _levels[level - 1];

        SceneManager.LoadScene("Level " + level.ToString());
    }
}
