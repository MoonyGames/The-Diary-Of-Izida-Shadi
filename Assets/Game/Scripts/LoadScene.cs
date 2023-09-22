using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    public static int CurrentSceneIndex = 0;

    private void Start()
    {
        CurrentSceneIndex = SceneManager.GetActiveScene().buildIndex;
    }

    public static void Load(int index)
    {
        SceneManager.LoadScene(index);
    }
}
