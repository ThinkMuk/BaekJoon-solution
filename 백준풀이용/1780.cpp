//#include <iostream>
//#include <vector>
//using namespace std;
//
////분할정복, 재귀
////하도 분할정복, 재귀 관련 문제들을 많이 풀어봐서 기본 형식으로 나오는 문제들은 누워서 떡 먹기 같다.
////응용문제가 나오면 여기서는 문제될게 없을듯 싶다
////탐색할때 패턴 분석만 잘 해보면 될듯?
//
//vector<vector<int>> board;
//int minusOne = 0;
//int zero = 0;
//int one = 0;
//
//void sol(int y, int x, int size)
//{
//	int tempInput = NULL;
//	bool match = true;
//
//	for (int i = y; i < y + size; i++)
//	{
//		for (int j = x; j < x + size; j++)
//		{
//			if (i == y && j == x)
//				tempInput = board[i][j];
//			else {
//				if (tempInput != board[i][j]) {
//					match = false;
//					break;
//				}
//			}
//		}
//		if (match == false)
//			break;
//	}
//
//	if (match == false) { //다시 다른거 탐색
//		sol(y, x, size / 3);
//		sol(y, x + size / 3, size / 3);
//		sol(y, x + (size * 2) / 3, size / 3);
//
//		sol(y + size / 3, x, size / 3);
//		sol(y + size / 3, x + size / 3, size / 3);
//		sol(y + size / 3, x + (size * 2) / 3, size / 3);
//
//		sol(y + (size * 2) / 3, x, size / 3);
//		sol(y + (size * 2) / 3, x + size / 3, size / 3);
//		sol(y + (size * 2) / 3, x + (size * 2) / 3, size / 3);
//	}
//	else { //true 일시,
//		if (tempInput == -1) {
//			minusOne++;
//		}
//		else if (tempInput == 0) {
//			zero++;
//		}
//		else if (tempInput == 1) {
//			one++;
//		}
//	}
//}
//
//int main()
//{
//	int boardSize;
//	cin >> boardSize;
//
//	//숫자 입력받기
//	for (int i = 0; i < boardSize; i++)
//	{
//		vector<int> tempBoard;
//		for (int j = 0; j < boardSize; j++)
//		{
//			int temp;
//			cin >> temp;
//			tempBoard.push_back(temp);
//		}
//		board.push_back(tempBoard);
//	}
//
//	sol(0, 0, boardSize);
//
//	cout << minusOne << "\n" << zero << "\n" << one;
//}