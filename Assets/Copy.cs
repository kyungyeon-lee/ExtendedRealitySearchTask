using UnityEngine;
using System.Collections;

public class Copy : MonoBehaviour
{
    public GameObject rootObj;

    void Start()
    {

        for (int i = 3; i < 10; i++)
        {
            var position = new Vector3(Random.Range(-2.0f, 2.0f), 0, Random.Range(-1.0f, 2.0f));
            GameObject duplicate1 = Instantiate(rootObj, position, Quaternion.identity);
            //GameObject duplicate2 = Instantiate(rootObj, new Vector3(0.5f, 0.2f, 1.5f), Quaternion.identity);
            //GameObject duplicate3 = Instantiate(rootObj, new Vector3(0.5f, 0.3f, 1.5f), Quaternion.identity);
        }
        

    }
}