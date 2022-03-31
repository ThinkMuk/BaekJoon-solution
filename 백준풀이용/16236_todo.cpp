#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> fishBoard;
vector <vector<pair<int, int>>> fishCord(9); //0번이 1번 물고기들 저장소임
pair<int, int> cordMove = make_pair(0, 0);
pair<int, int> sharkCord;
bool callShark = false;
int sharkSize = 2;
int sharkStack = 0;
int totalTime = 0;

int dy[4] = { 0,1,0,-1 };
int dx[4] = { -1,0,1,0 };

void sharkStackCheck(int tempStack, int tempSize) //임이의 상어 스텍을 늘리면서, 상어의 성장크기 갱신
{
	tempStack++;
	if (tempStack == tempSize) {
		tempStack = 0;
		tempSize++;
	}
}

void targetMove() { //목표 물고기의 좌표를 저장하고 있는 벡터 위치를 옮기는 함수
	cordMove.second++;
	if (fishCord[cordMove.first][cordMove.second].first == NULL) {
		cordMove.first++;
		cordMove.second = 0;
	}
}

//나중에 삭제해야 할 것
void print(vector<vector<int>> temp) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << temp[i][j] << " ";
		}
		cout << "\n";
	}
}

//** 전체가 0이 되면 종료시키도록 하기 **//
void BFS(int y, int x)
{
	vector<vector<int>> tempShark;
	queue<pair<int, int>> q;
	int tmpSize = sharkSize;
	int tmpStack = sharkStack;

	for (int i = 0; i < N; i++)
	{
		vector<int> temp;
		for (int j = 0; j < N; j++)
		{
			temp.push_back(-1);
		}
		tempShark.push_back(temp);
	}

	q.push(make_pair(y, x));
	tempShark[y][x] = 0;

	while (!q.empty())
	{
		auto cur = q.front();
		q.pop();

		print(tempShark);
		cout << "\n";

		for (int i = 0; i < 4; i++) //카운트가 4번 다 하면 count++
		{
			int tmpY = cur.first + dy[i];
			int tmpX = cur.second + dx[i];

			if (0 <= tmpY && tmpY < N && 0 <= tmpX && tmpX < N) {//tmpX, Y가 범위 내에 존재하는지
				if (tempShark[tmpY][tmpX] == -1) {//그 곳을 방문 해 본 곳인지 check (-1이 미방문)
					if (fishBoard[tmpY][tmpX] == 0) { //만약 그곳이 빈 칸 일시
						q.push(make_pair(tmpY, tmpX));
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else if (fishBoard[tmpY][tmpX] == sharkSize) { //상어와 물고기가 사이즈가 같을 시
						q.push(make_pair(tmpY, tmpX));
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else if (fishBoard[tmpY][tmpX] < sharkSize) { //만약 상어가 클 시
						q.push(make_pair(tmpY, tmpX));
						sharkStackCheck(tmpStack, tmpSize); //스텍 올리면서 체크
						fishBoard[tmpY][tmpX] = 0; //그 자리는 이제 빈 칸
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else { //상어가 못 지나가는 곳일 시 (-2는 못 지나가는 곳)
						tempShark[tmpY][tmpX] = -2;
						continue;
					}
				}
			}
		}
	}

	//** 여기가 문제임 **//
	//목표물 좌표 받기
	int tmpTime = tempShark[fishCord[cordMove.first][cordMove.second].first][fishCord[cordMove.first][cordMove.second].second];
	if (tmpTime == -2) {//좌표가 -2인지 이동 횟수인지 확인
		cout << totalTime << "\n";
		callShark = true;
	}
	else { //이동 횟수이면 총 이동횟수에 추가
		totalTime += tmpTime;
		sharkSize += tmpSize;
		sharkStack += tmpStack;
		sharkCord = make_pair(fishCord[cordMove.first][cordMove.second].first, fishCord[cordMove.first][cordMove.second].second);
	}

}

int main()
{
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
			else if (temp == 0) //빈 칸
				continue;
			else { //물고기
				fishCord[temp - 1].push_back(make_pair(i, j));
			}
		}
		fishBoard.push_back(tempArr);
	}

	while (!callShark)
	{
		BFS(sharkCord.first, sharkCord.second);
	}
}