//#include <iostream>
//#include <vector>
//using namespace std;
//
// 이번 문제는 저번에 Z에서 배운 교훈으로 쉽게 풀 수 있었음.
// 아마 이번 문제도 재귀함수랑 분할정복을 사용한 것 같다.
// 다만 Z에서는 코드를 참고하고 해서 이론만 배운거라 완전 처음 해보는거 ㅋㅋㅋ
// 처음에 재귀로 하는데 이상하게 뜨길래 이유가 뭔가 했더니 for문으로 함수들이 다 맞는지 탐색할때
// for의 범위를 잘못 탐색해둬서 그랬던것.
// ex) for(int i=y; i < y; i++) 로 해뒀음;;
// 하지만 백준에서 시간초과 안나고 한방에 풀어서 기분이 좋담.
//
//vector<vector<int>> paper;
//int colorCount = 0;
//int emptyCount = 0;
//
//void foldPaper(int y, int x, int size)
//{
//	int tempNum = NULL;
//	bool match = true;
//	//전체 영역이 색으로 칠해져있으면 카운트 하나.
//	//또는 전체 영역이 색으로 칠해져있지 않으면 카운트 하나.
//	for (int i = y; i < y + size; i++)
//	{
//		for (int j = x; j < x + size; j++)
//		{
//			if (i==y && j==x) {
//				tempNum = paper[i][j];
//			}
//			else if (tempNum != paper[i][j]) {
//				match = false;
//				break;
//			}
//		}
//		if (match == false)
//			break;
//	}
//
//	if (match == true && tempNum == 0) {
//		emptyCount++;
//	}
//	else if (match == true && tempNum == 1) {
//		colorCount++;
//	}
//	else {
//		//2사분면
//		foldPaper(y, x, size / 2);
//		//1사분면
//		foldPaper(y, x + size / 2, size / 2);
//		//3사분면
//		foldPaper(y + size / 2, x, size / 2);
//		//4사분면
//		foldPaper(y + size / 2, x + size / 2, size / 2);
//	}
//}
//
//int main()
//{
//	int paperSize;
//	cin >> paperSize;
//
//	for (int i = 0; i < paperSize; i++)
//	{
//		vector<int> tempPaper;
//		for (int j = 0; j < paperSize; j++)
//		{
//			int temp;
//			cin >> temp;
//			tempPaper.push_back(temp);
//		}
//		paper.push_back(tempPaper);
//	}
//
//	foldPaper(0, 0, paperSize);
//
//	cout << emptyCount << "\n" << colorCount;
//}