using UnityEngine;

public class ActivateDeactivateGameobject : MonoBehaviour
{
    public void Activate(GameObject gb)
    {
        gb.SetActive(true);
    }

    public void Deactivate(GameObject gb)
    {
        gb.SetActive(false);
    }
}
