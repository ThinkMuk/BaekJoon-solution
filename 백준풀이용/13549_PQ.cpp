//#include <iostream>
//#include <queue>
//using namespace std;
//
//// 1697번 문제의 응용편
//// BFS는 너비탐색이기 때문에 각 최단 위치에서 갈 수 있는 범위를 탐색할 수 있음
//// 순간이동의 시간이 1에서 0으로 바뀌었기 때문에, 우선순위 큐를 사용한 풀이를 진행했고,
//// if문에서도 순간이동을 먼저 집어서 풀이 할 수 있게 기존의 풀이에서 순간이동만 앞으로 이동을 시킴
//// 
//// 우선순위 큐는 아직도 연습을 많이 해야 할 것 같다.. (c++ 상에서 사용법을 아직 제대로 익히지 못한 느낌)
//
//const int MAX = 100001;
//int check[MAX] = { 0 };
//
//int BFS(int startNum, int endNum)
//{
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tempSave;
//
//	int cord;
//	int trial;
//
//	tempSave.push(make_pair(0, startNum));
//	check[startNum] = true;
//
//	while (!tempSave.empty())
//	{
//		trial = tempSave.top().first;
//		cord = tempSave.top().second;
//		tempSave.pop();
//
//		if (cord == endNum) {
//			return trial;
//		}
//		if (cord * 2 < MAX && !check[cord * 2]) {
//			tempSave.push(make_pair(trial, cord * 2));
//			check[cord * 2] = true;
//		}
//		if (cord + 1 < MAX && !check[cord + 1]) {
//			tempSave.push(make_pair(trial + 1, cord + 1));
//			check[cord + 1] = true;
//		}
//		if (cord - 1 >= 0 && !check[cord - 1]) {
//			tempSave.push(make_pair(trial + 1, cord - 1));
//			check[cord - 1] = true;
//		}
//	}
//}
//
//int main()
//{
//	int start, end;
//	cin >> start >> end;
//
//	cout << BFS(start, end) << "\n";
//
//	return 0;
//}
