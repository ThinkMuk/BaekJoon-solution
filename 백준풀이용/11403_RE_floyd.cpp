//#include <iostream>
//using namespace std;
//
////풀이
////https://jaimemin.tistory.com/632
////플로이드 와샬 알고리즘 설명
////https://www.youtube.com/watch?v=9574GHxCbKc&t=28s
//
//const int MAX = 100;
//int N;
//int graph[MAX][MAX];
//
//void floyd()
//{
//    for (int k = 0; k < N; k++)
//        for (int i = 0; i < N; i++)
//            for (int j = 0; j < N; j++)
//                if (graph[i][k] && graph[k][j])
//                    graph[i][j] = 1;
//}
//
//int main()
//{
//    cin >> N;
//
//    for (int i = 0; i < N; i++)
//        for (int j = 0; j < N; j++)
//            cin >> graph[i][j];
//
//    floyd();
//
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N; j++)
//            cout << graph[i][j] << " ";
//        cout << endl;
//    }
//   return 0;
//}