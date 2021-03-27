using UnityEngine;
using System.Collections;

public class Activated : MonoBehaviour
{
    public GameObject hand;

    void Start()
    {
        


        for (int i = 2; i < 8; i++)
        {
            var position = new Vector3(Random.Range(-2.0f, 2.0f), 0, Random.Range(-1.0f, 2.0f));
            hand = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic ("+i+")");
            hand.SetActive(true);
            hand.transform.position = position;
        }
    }
    void Update()
    {
        //hand.transform.Rotate(0, 100 * Time.deltaTime, 0);
    }
}