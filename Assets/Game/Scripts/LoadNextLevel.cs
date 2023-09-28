using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadNextLevel : MonoBehaviour
{
    [SerializeField] private GameData _currentGameData;
    [SerializeField] private BoardData[] _levels = new BoardData[10];

    private void Start()
    {
        PlayerPrefs.SetInt("Level", PlayerPrefs.GetInt("Level", 1) + 1);

        Invoke(nameof(LoadLevel), 3f);
    }

    private void LoadLevel()
    {
        int level = PlayerPrefs.GetInt("Level", 1);

        _currentGameData.selectedBoardData = _levels[level - 1];

        SceneManager.LoadScene("Level " + level.ToString());
    }
}
