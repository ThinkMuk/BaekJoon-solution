//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//// bfs와 dfs는 계속 많이 풀어봐야 할 것 같다. 아직 푸는 방법이 익숙하지 않아
//// 이전에 풀었던 배추를 참고해가며 풀었다.
//// 다음에 풀때는 확실하게 다른 코드를 참고하지 않고 푸는 방식으로 해서 성공해야겠다.
//// 이번 문제는 저번 배추와 크게 다른점이 없어 어렵지는 않았다.
//// 처음 제한 메모리를 보고 최대한 메모리를 줄여볼려고 생쇼해봤는데 고민하다 잘 모르겠어서
//// 그냥 있는대로 제껴봤다. 근데 웬걸? 시간초과랑 메모리초과 안뜨고 정답이 떴다.
//// 색약 서칭을 할 때는 그냥 빨강이나 초록을 한 색으로 통일시켜놓고 서치하면 됐다.
//// 다음에는 꼭 꼭 bfs 랑 dfs 관련 문제 나오면 내가 풀었던 코드 참고하지 않고 혼자 풀기..!!
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
//			cin >> temp; //백준에서는 scanf 로 변경
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