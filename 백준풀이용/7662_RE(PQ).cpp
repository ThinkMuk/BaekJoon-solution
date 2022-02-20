//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
////참고 https://jaimemin.tistory.com/997
//
//const int MAX = 1000000 + 1;
// 
//// 다른 pq에 있는것들을 지워주는 역할을 함
//bool visited[MAX];
//
//int main()
//{
//    ios_base::sync_with_stdio(false); 
//    cin.tie(NULL); 
//    cout.tie(NULL);
//
//    int t;
//    cin >> t;
//
//    for (int i = 0; i < t; i++)
//    {
//        int k;
//        cin >> k;
//        priority_queue<pair<int, int>> pq1;
//        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
//        for (int j = 0; j < k; j++)
//        {
//            char temp;
//            int num;
//            cin >> temp >> num;
//
//            if (temp=='I')
//            {
//                pq1.push(make_pair( num, j ));
//                pq2.push(make_pair(num, j));
//                visited[j] = true;
//            }
//            else if (temp=='D') {
//                if (num == 1) {
//                    while (!pq1.empty() && !visited[pq1.top().second])
//                        pq1.pop();
//                    if (!pq1.empty()) {
//                        visited[pq1.top().second] = false;
//                        pq1.pop();
//                    }
//                }
//                else {
//                    while (!pq2.empty() && !visited[pq2.top().second])
//                        pq2.pop();
//                    if (!pq2.empty()) {
//                        visited[pq2.top().second] = false;
//                        pq2.pop();
//                    }
//                }
//            }
//        }
//        while (!pq1.empty() && !visited[pq1.top().second])
//            pq1.pop();
//        while (!pq2.empty() && !visited[pq2.top().second])
//            pq2.pop();
//
//        if (pq2.empty() && pq1.empty())
//            cout << "EMPTY\n";
//        else
//            cout << pq1.top().first << " " << pq2.top().first << "\n";
//    }
//    return 0;
//}
