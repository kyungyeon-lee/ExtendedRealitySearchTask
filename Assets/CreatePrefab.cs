using UnityEngine;
public class CreatePrefab : MonoBehaviour
{
    // Reference to the Prefab. Drag a Prefab into this field in the Inspector.
    public GameObject myPrefab;

    // This script will simply instantiate the Prefab when the game starts.
    void Start()
    {
        // Instantiate at position (0, 0, 0) and zero rotation.
        GameObject go = Instantiate(myPrefab, new Vector3(1, 1, 0), Quaternion.identity);
        go.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
    }
}