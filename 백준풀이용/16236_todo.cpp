#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
vector<vector<int>> fishBoard;
vector <vector<pair<int, int>>> fishCord(9); //0���� 1�� ������ �������
pair<int, int> cordMove = make_pair(0, 0);
pair<int, int> sharkCord;
bool callShark = false;
int sharkSize = 2;
int sharkStack = 0;
int totalTime = 0;

int dy[4] = { 0,1,0,-1 };
int dx[4] = { -1,0,1,0 };

void sharkStackCheck(int tempStack, int tempSize) //������ ��� ������ �ø��鼭, ����� ����ũ�� ����
{
	tempStack++;
	if (tempStack == tempSize) {
		tempStack = 0;
		tempSize++;
	}
}

void targetMove() { //��ǥ ������� ��ǥ�� �����ϰ� �ִ� ���� ��ġ�� �ű�� �Լ�
	cordMove.second++;
	if (fishCord[cordMove.first][cordMove.second].first == NULL) {
		cordMove.first++;
		cordMove.second = 0;
	}
}

//���߿� �����ؾ� �� ��
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

//** ��ü�� 0�� �Ǹ� �����Ű���� �ϱ� **//
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

		for (int i = 0; i < 4; i++) //ī��Ʈ�� 4�� �� �ϸ� count++
		{
			int tmpY = cur.first + dy[i];
			int tmpX = cur.second + dx[i];

			if (0 <= tmpY && tmpY < N && 0 <= tmpX && tmpX < N) {//tmpX, Y�� ���� ���� �����ϴ���
				if (tempShark[tmpY][tmpX] == -1) {//�� ���� �湮 �� �� ������ check (-1�� �̹湮)
					if (fishBoard[tmpY][tmpX] == 0) { //���� �װ��� �� ĭ �Ͻ�
						q.push(make_pair(tmpY, tmpX));
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else if (fishBoard[tmpY][tmpX] == sharkSize) { //���� ����Ⱑ ����� ���� ��
						q.push(make_pair(tmpY, tmpX));
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else if (fishBoard[tmpY][tmpX] < sharkSize) { //���� �� Ŭ ��
						q.push(make_pair(tmpY, tmpX));
						sharkStackCheck(tmpStack, tmpSize); //���� �ø��鼭 üũ
						fishBoard[tmpY][tmpX] = 0; //�� �ڸ��� ���� �� ĭ
						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
					}
					else { //�� �� �������� ���� �� (-2�� �� �������� ��)
						tempShark[tmpY][tmpX] = -2;
						continue;
					}
				}
			}
		}
	}

	//** ���Ⱑ ������ **//
	//��ǥ�� ��ǥ �ޱ�
	int tmpTime = tempShark[fishCord[cordMove.first][cordMove.second].first][fishCord[cordMove.first][cordMove.second].second];
	if (tmpTime == -2) {//��ǥ�� -2���� �̵� Ƚ������ Ȯ��
		cout << totalTime << "\n";
		callShark = true;
	}
	else { //�̵� Ƚ���̸� �� �̵�Ƚ���� �߰�
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

			if (temp == 9) { //���
				sharkCord = make_pair(i, j);
			}
			else if (temp == 0) //�� ĭ
				continue;
			else { //�����
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