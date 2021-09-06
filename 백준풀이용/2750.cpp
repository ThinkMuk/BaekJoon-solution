////2750번-----------------------------------------------------------------------------
//// 배운것: 메모리를 아낄수있으면 최대한 아껴쓰자 (while문으로 해서 int함수 추가 하나했다고 메모리 초과떴었음 ㅠ)
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N; // N은 입력할 횟수
//	int* inputNumber = new int[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> inputNumber[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for(int j=0;j<N-1-i;j++)
//		{
//			if (inputNumber[j+1] < inputNumber[j])
//			{
//				int temp = inputNumber[j];
//				inputNumber[j] = inputNumber[j+1];
//				inputNumber[j+1] = temp;
//			}
//		}
//
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << inputNumber[i] << endl;
//	}
//
//	delete[] inputNumber;
//
//	return 0;
//}