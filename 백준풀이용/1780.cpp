//#include <iostream>
//#include <vector>
//using namespace std;
//
////��������, ���
////�ϵ� ��������, ��� ���� �������� ���� Ǯ����� �⺻ �������� ������ �������� ������ �� �Ա� ����.
////���빮���� ������ ���⼭�� �����ɰ� ������ �ʹ�
////Ž���Ҷ� ���� �м��� �� �غ��� �ɵ�?
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
//	if (match == false) { //�ٽ� �ٸ��� Ž��
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
//	else { //true �Ͻ�,
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
//	//���� �Է¹ޱ�
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