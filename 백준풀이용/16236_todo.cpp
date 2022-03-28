#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> fishBoard;
vector<vector<int>> fishCheck;
pair<int, int> sharkCord;
int sharkSize = 2;
int sharkStack = 0;
int totalTime = 0;

void BFS(int y, int x) {

	fishCheck[y][x] = 0;
	fishBoard[y][x] = 0;

	vector<pair<int, int>> fishCord;
	queue<pair<int, int>> q;

	int dy[4] = { 0,1,0,-1 };
	int dx[4] = { -1,0,1,0 };

	if (sharkStack >= sharkSize) {
		sharkStack -= sharkSize;
		sharkSize++;
	}
	q.push(make_pair(y, x));

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int temp_y = cur.first + dy[i];
			int temp_x = cur.second + dx[i];

			if (temp_y < 0 || temp_y >= N || temp_x < 0 || temp_x >= N)
				continue;
			if (fishCheck[temp_y][temp_x] != -1)
				continue;
			if (fishBoard[temp_y][temp_x] > sharkSize)
				continue;
			else if (fishBoard[temp_y][temp_x] == sharkSize || fishBoard[temp_y][temp_x] == 0) {
				fishCheck[temp_y][temp_x] == fishCheck[cur.first][cur.second] + 1;
				q.push(make_pair(temp_y, temp_x));
			}
			else if (fishBoard[temp_y][temp_x] < sharkSize && fishBoard[temp_y][temp_x] >= 1) {
				fishCheck[temp_y][temp_x] = fishCheck[cur.first][cur.second] + 1;
				fishCord.push_back(make_pair(temp_y, temp_x));
				q.push(make_pair(temp_y, temp_x));
			}
		}
	}

	if (fishCord.size() == 0) {
		cout << totalTime << "\n";
		exit(1);
	}
	else if (fishCord.size() == 1) {
		y = fishCord[0].first;
		x = fishCord[0].second;

		fishBoard[y][x] = 0;
		sharkStack++;
		totalTime += fishCheck[y][x];
	}
	else {
		int shortcut = 2147483647;
		for (int i = 0; i < fishCord.size(); i++)
		{
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		vector<int> tempArr;
		for (int j = 0; j < N; j++)
		{
			int temp;
			cin >> temp;
			tempArr.push_back(temp);

			if (temp == 9) { //상어
				sharkCord = make_pair(i, j);
			}
		}
		fishBoard.push_back(tempArr);
	}

	while (true)
	{
		for (int i = 0; i <= N; i++)
			for (int j = 0; j <= N; j++)
				fishCheck[i][j] = -1;
		BFS(sharkCord.second, sharkCord.first);
	}

}

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