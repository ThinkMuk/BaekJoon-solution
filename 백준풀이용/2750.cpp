////2750��-----------------------------------------------------------------------------
//// ����: �޸𸮸� �Ƴ��������� �ִ��� �Ʋ����� (while������ �ؼ� int�Լ� �߰� �ϳ��ߴٰ� �޸� �ʰ������� ��)
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N; // N�� �Է��� Ƚ��
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