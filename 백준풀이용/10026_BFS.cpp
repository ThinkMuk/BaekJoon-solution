//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//// bfs�� dfs�� ��� ���� Ǯ����� �� �� ����. ���� Ǫ�� ����� �ͼ����� �ʾ�
//// ������ Ǯ���� ���߸� �����ذ��� Ǯ����.
//// ������ Ǯ���� Ȯ���ϰ� �ٸ� �ڵ带 �������� �ʰ� Ǫ�� ������� �ؼ� �����ؾ߰ڴ�.
//// �̹� ������ ���� ���߿� ũ�� �ٸ����� ���� ������� �ʾҴ�.
//// ó�� ���� �޸𸮸� ���� �ִ��� �޸𸮸� �ٿ������� �����غôµ� ����ϴ� �� �𸣰ھ
//// �׳� �ִ´�� �����ô�. �ٵ� ����? �ð��ʰ��� �޸��ʰ� �ȶ߰� ������ ����.
//// ���� ��Ī�� �� ���� �׳� �����̳� �ʷ��� �� ������ ���Ͻ��ѳ��� ��ġ�ϸ� �ƴ�.
//// �������� �� �� bfs �� dfs ���� ���� ������ ���� Ǯ���� �ڵ� �������� �ʰ� ȥ�� Ǯ��..!!
//
//vector<vector<char>> board;
//vector<vector<int>> numBoard;
//int boardSize;
//int RGB = 0;
//int RRB = 0;
//
//void RGBSearch(int x, int y, char letter)
//{
//	queue<pair<int, int>> saveCord;
//
//	int sX[4] = { 1,0,-1,0 };
//	int sY[4] = { 0,1,0,-1 };
//
//	saveCord.push(make_pair(x, y));
//
//	numBoard[y][x] = 0;
//
//	while (!saveCord.empty())
//	{
//		int x = saveCord.front().first;
//		int y = saveCord.front().second;
//
//		saveCord.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int search_X = x + sX[i];
//			int search_Y = y + sY[i];
//
//			if (0 <= search_X && search_X < boardSize && 0 <= search_Y && search_Y < boardSize) {
//
//				if (board[search_Y][search_X] == letter && numBoard[search_Y][search_X] == 1) {
//
//					numBoard[search_Y][search_X] = 0;
//					saveCord.push(make_pair(search_X, search_Y));
//				}
//			}
//		}
//	}
//}
//
//void RRBSearch(int x, int y, char letter)
//{
//	queue<pair<int, int>> saveCord;
//
//	int sX[4] = { 1,0,-1,0 };
//	int sY[4] = { 0,1,0,-1 };
//
//	saveCord.push(make_pair(x, y));
//
//	numBoard[y][x] = 1;
//
//	while (!saveCord.empty())
//	{
//		int x = saveCord.front().first;
//		int y = saveCord.front().second;
//
//		saveCord.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int search_X = x + sX[i];
//			int search_Y = y + sY[i];
//
//			if (0 <= search_X && search_X < boardSize && 0 <= search_Y && search_Y < boardSize) {
//
//				if (board[search_Y][search_X] == letter && numBoard[search_Y][search_X] == 0) {
//
//					numBoard[search_Y][search_X] = 1;
//					saveCord.push(make_pair(search_X, search_Y));
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> boardSize;
//
//	for (int i = 0; i < boardSize; i++)
//	{
//		vector<char> tempBoard;
//		vector<int> tempNumBoard;
//		for (int j = 0; j < boardSize; j++)
//		{
//			char temp;
//			cin >> temp; //���ؿ����� scanf �� ����
//
//			tempBoard.push_back(temp);
//			tempNumBoard.push_back(1);
//		}
//		board.push_back(tempBoard);
//		numBoard.push_back(tempNumBoard);
//	}
//
//	for (int i = 0; i < boardSize; i++)
//	{
//		for (int j = 0; j < boardSize; j++)
//		{
//			if (board[i][j] == 'R' && numBoard[i][j] == 1 ) {
//				RGBSearch(j, i, 'R');
//				RGB++;
//			}
//			else if (board[i][j] == 'G' && numBoard[i][j] == 1 ) {
//				RGBSearch(j, i, 'G');
//				RGB++;
//			}
//			else if (board[i][j] == 'B' && numBoard[i][j] == 1 ) {
//				RGBSearch(j, i, 'B');
//				RGB++;
//			}
//		}
//	}
//
//	for (int i = 0; i < boardSize; i++)
//	{
//		for (int j = 0; j < boardSize; j++)
//		{
//			if (board[i][j] == 'G')
//				board[i][j] = 'R';
//		}
//	}
//
//	for (int i = 0; i < boardSize; i++)
//	{
//		for (int j = 0; j < boardSize; j++)
//		{
//			if (board[i][j] == 'R' && numBoard[i][j] == 0 ) {
//				RRBSearch(j, i, 'R');
//				RRB++;
//			}
//			else if (board[i][j] == 'B' && numBoard[i][j] == 0 ) {
//				RRBSearch(j, i, 'B');
//				RRB++;
//			}
//		}
//	}
//
//	cout << RGB << " " << RRB;
//}