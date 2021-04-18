using UnityEngine;
using System.Collections;
using System.Text;
using System.Collections.Generic;
using System.IO;


public class Activated : MonoBehaviour
{
    public GameObject cube, quad, answer;

    public Color[] list_color = {Color.black, Color.blue, Color.cyan, Color.grey, Color.green, Color.magenta, Color.white, Color.yellow};

    public static float timestamp;
    public static string parti_id;
    public static string condition;
    public static int target_id = 0;
    public static string target_state = "searching";
    public static Vector3 target_position;
    public static string mid_target_state = "mid searching";
    //public static Vector3 mid_target_position;
    public static Vector3 hand_position;
    public static Vector3 hand_rotation;
    public static Vector3 laser_position;
    public static float distance_btw_target;
    public static float distance_btw_mid;
    public static int click_num;
    public static float fps;



    public float[] list_angle = { 0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,320,340 };

    //public float[] list_angle = { 0,  45, 90,  135, 180,  225,  270,  315, 360 };

    public float[] list_distance = { 3,5,7 };

    List<int> no_angle_overlap = new List<int>();

    void Start()
    {
        var list_answer = new List<int>{ };

        //var n = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        //var sb = new StringBuilder();
        //for (int i = 1; i < 11; i++)
        //{
        //    var c = Combinations<int>.GetCombinations(n, i);
        //    sb.Length = 0;
        //    foreach (var k in c)
        //    {
        //        sb.Append('[');
        //        foreach (int v in k)
        //        {
        //            sb.Append(v).Append(", ");
        //        }
        //        sb.Remove(sb.Length - 2, 2);
        //        sb.Append("], ");
        //    }
        //    sb.Remove(sb.Length - 2, 2);
        //    Debug.Log("Combinations of length " + i + ": " + c.Count + "\n" + sb.ToString());
        //}
        string path = "test.txt";

        //Write some text to the test.txt file
        StreamWriter writer = new StreamWriter(path, true);
        writer.WriteLine("Test1111111111111111");
        writer.Close();

        for (int k = 1; k <= 3; k++){
            answer = GameObject.Find("/MixedRealityPlayspace/Main Camera/Quad (" + k + ")");
            var Renderer = answer.GetComponent<Renderer>();
            int xcount = Random.Range(0, 7);//7개
            list_answer.Add(xcount);
            Renderer.material.SetColor("_Color", list_color[xcount]);
        }
        
        //foreach (object o in list_answer)
        //{
        //    Debug.Log("Answer List " + o);
        //}
        for (int i = 1; i <= 15; i++)
        {
            int rand = Random.Range(0, 16);
            rand = noCollideAngle(rand);
            var pos = RandomCircle(new Vector3(0, 0, 0), 0.5f, list_angle[rand]);
            var x = Mathf.Cos(list_angle[i]) * 1; 
            var z = Mathf.Sqrt(1 - Mathf.Pow(x, 2));
            var position = new Vector3(0,0,0);
            position = new Vector3(x, 0, z);

            //정답
            if (i == 1)
            {
                cube = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic (" + i + ")");




                for (int j = 1; j < 7; j++)
                {
                    if (j < 4)
                    {
                        foreach (int o in list_answer)
                        {
                            quad = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic (" + i + ")/Quad (" + j + ")");
                            //컬러 리스트 잡기(7중1). 색깔 찾아서 바꾸기.
                            //quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
                            var Renderer1 = quad.GetComponent<Renderer>();
                            Renderer1.material.SetColor("_Color", list_color[o]);
                            if (j != 3)
                            {

                                j++;
                            }

                        }

                    }
                    else
                    {

                        quad = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic (" + i + ")/Quad (" + j + ")");
                        //컬러 리스트 잡기(7중1). 색깔 찾아서 바꾸기.
                        //quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
                        var Renderer2 = quad.GetComponent<Renderer>();
                        int xcount = Random.Range(0, 7);
                        Renderer2.material.SetColor("_Color", list_color[xcount]);


                    }
                }

            
            cube.SetActive(true);
            cube.transform.position = pos;
            }

            //오답들
            else
            {

             //여기서 0-2 랜덤 -> 걔 빼고 랜덤으로 색 입히기
             int rand2 = Random.Range(0, 3);
             int except =  list_answer[rand2];
             cube = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic ("+i+")");
             Debug.Log("exception cube:"+i+"color: "+ rand2+" ec: "+ except);



                for (int j = 1; j < 7; j++) {


                quad = GameObject.Find("/SceneContent/BoundingBoxExample/Model_Platonic (" + i + ")/Quad ("+ j +")");
                //컬러 리스트 잡기(7중1). 색깔 찾아서 바꾸기.
                //quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
                var Renderer = quad.GetComponent<Renderer>();
                int xcount = Random.Range(0, 7);
                    //될때까지 다시.
                    if (xcount == except) {
                        Debug.Log("exception");
                        xcount = noCollideColor(except, xcount);


                    }

                Debug.Log("xcount"+xcount);

                Renderer.material.SetColor("_Color", list_color[xcount]);
                }

            }
            cube.SetActive(true);
            cube.transform.position = pos;
        }

        Vector3 RandomCircle(Vector3 center, float radius, float a)
        {
            Debug.Log(a);

            int rand = Random.Range(0, 3);
            radius = list_distance[rand];
            Debug.Log("rad"+radius);

            float ang = a;
            Vector3 pos;
            pos.x = center.x + radius * Mathf.Sin(ang * Mathf.Deg2Rad);
            pos.z = center.z + radius * Mathf.Cos(ang * Mathf.Deg2Rad);
            pos.y = 0.1f;
            return pos;
        }

        int noCollideAngle( int i) {

            if (no_angle_overlap.Contains(i)) {
                int rand = Random.Range(0, 16);           
                return noCollideAngle(rand);
            }
            else {
                no_angle_overlap.Add(i);
                return i;
            }
            
        }


        int noCollideColor(int excep,int i)
        {
            if (excep == i)
            {
                int rand = Random.Range(0, 7);
                return noCollideColor(excep, rand);
            }
            else
            {
                return i;
            }
        }



    }
    void Update()
    {
        Vector3 newPos = GameObject.Find("MixedRealityPlayspace/Main Camera/Pivot").transform.TransformPoint(Vector3.zero);
        //PID	Timestamp	Trial	Touched Ball	Position	Rotation	Distance (Calc by Position)	Distance (Calc by Rotation)	Interaction Number	Interaction Type	Device	Head Tracking														
        Debug.Log("newPos: " + newPos);

    }



}