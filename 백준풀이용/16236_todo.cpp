//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> fishBoard;
//vector <vector<pair<int, int>>> fishCord(9); //0번이 1번 물고기들 저장소임
//pair<int, int> sharkCord;
//int sharkSize = 2;
//int sharkStack = 0;
//int totalTime = 0;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		vector<int> tempArr;
//		for (int j = 0; j < N; j++)
//		{
//			int temp;
//			cin >> temp;
//			tempArr.push_back(temp);
//
//			if (temp == 9) { //상어
//				sharkCord = make_pair(i, j);
//			}
//			else if (temp == 0) //빈 칸
//				continue;
//			else { //물고기
//				fishCord[temp - 1].push_back(make_pair(i, j));
//			}
//		}
//		fishBoard.push_back(tempArr);
//	}
//
//}