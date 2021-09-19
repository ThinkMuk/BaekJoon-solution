//#include <iostream>
//#include <vector>
//using namespace std;
//
////문제 자체는 쉬웠다.알고리즘 자체는 저번에 했던 분할정복, 재귀 문제와 다를게 없어 헤매지 않았는데 뜻밖의 다른 곳에서
////막히게 됐다.
////이상하게 cin 으로 받게 되면 int 함수같은 경우 모든 숫자를 다 받아들여 한 숫자씩 받게 해야 하는데,
////scanf를 활용해야 했다. 하지만, 여기서 scanf 를 사용할 수 없고, scanf_s 를 사용해야 한다 해서 성공적이게 컴파일을 시켰다.
////근데 또 백준에서는 컴파일 에러가 떳다... 도대체 뭐가 문제인지 잘 모르겠다 한번 찾아봐야겠다
////(심지어 #define _CRT_SECURE_NO_WARNINGS 를 사용했는데도 vs community에서는 컴파일 에러를 내보냈다 이유가 뭔지
////진짜 답답해죽겠다아루알겨ㅓㄹ규ㅠㅠ)
////++) 이유는 https://www.acmicpc.net/blog/view/52 에서 보면 된다.
// ++) 이것도 참고 https://m.blog.naver.com/hirit808/221615764755
//
//vector<vector<int>> quadTree;
//
//void sol(int y,int x,int size)
//{
//	//점점 탐색하는 범위가 작아질때마다 괄호를 추가해야함.
//
//	//탐색
//	int searchTemp = NULL;
//	bool match = true;
//
//	for (int i = y; i < size + y; i++)
//	{
//		for (int j = x; j < size + x; j++)
//		{
//			if (i == y && j == x)
//				searchTemp = quadTree[i][j];
//			else {
//				if (searchTemp != quadTree[i][j]) {
//					match = false;
//					break;
//				}
//			}
//		}
//		if (match == false)
//			break;
//	}
//
//	//출력 순서는: 왼쪽 위 -> 오른쪽 위 -> 왼쪽 아래 -> 오른쪽 아래
//	if (match == false)
//	{
//		cout << "(";
//		//2사분면
//		sol(y, x, size / 2);
//		//1사분면
//		sol(y, x + size / 2, size / 2);
//		//3사분면
//		sol(y + size / 2, x, size / 2);
//		//4사분면
//		sol(y + size / 2, x + size / 2, size / 2);
//		cout << ")";
//	}
//	else
//	{
//		cout << searchTemp;
//	}
//}
//
//int main()
//{
//	int size;
//	cin >> size;
//
//	for (int i = 0; i < size; i++)
//	{
//		vector<int> vecTemp;
//		for (int j = 0; j < size; j++)
//		{
//			int temp;
//			//백준에서는 scanf 만 활용해야 하는데... 왜 여기서는? (심지어 #define 을 써도 안된다)
//			scanf_s("%1d", &temp);
//			vecTemp.push_back(temp);
//		}
//		quadTree.push_back(vecTemp);
//	}
//
//	sol(0, 0, size);
//
//}