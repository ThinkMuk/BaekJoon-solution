//#include <iostream>
//#include <queue>
//using namespace std;
//
//// BFS는 너비탐색이기 때문에 각 최단 위치에서 갈 수 있는 범위를 탐색할 수 있음
//// 최단거리를 구하는 문제에서는 대체적으로 BFS를 사용해서 풀이함
//// 
//// 추가적으로 BFS와 DFS 사용에 도움되는 정보:
//// 경로의 특징을 저장해둬야 하는 문제 = DFS로 풀이
//// 그래프의 모든 정점을 방문하는 것이 주요한 문제 = BFS, DFS 상관 없음.
//// BFS는 queue를 사용한 풀이, DFS같은 경우 stack 이나 재귀함수를 사용해 풀이를 하면 된다.
//
//const int MAX = 100001;
//int check[MAX] = { 0 };
//
//int BFS(int startNum, int endNum)
//{
//	// ????
//	queue<pair<int, int>> tempSave;
//	int cord;
//	int trial;
//
//	tempSave.push(make_pair(startNum, 0));
//
//	while (!tempSave.empty())
//	{
//		cord = tempSave.front().first;
//		trial = tempSave.front().second;
//		tempSave.pop();
//
//		if (cord == endNum) {
//			return trial;
//		}
//
//		if (cord + 1 < MAX && !check[cord + 1]) {
//			tempSave.push(make_pair(cord + 1, trial + 1));
//			check[cord + 1] = true;
//		}
//		if (cord - 1 >= 0 && !check[cord - 1]) {
//			tempSave.push(make_pair(cord - 1, trial + 1));
//			check[cord - 1] = true;
//		}
//		if (cord * 2 < MAX && !check[cord * 2]) {
//			tempSave.push(make_pair(cord * 2, trial + 1));
//			check[cord * 2] = true;
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