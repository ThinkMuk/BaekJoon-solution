//#include <iostream>
//#include <cmath>
//using namespace std;
//
////�����佺�׳׽��� �Ҽ� �ʿ���������� 2���� ũ�鼭 �ڱ� �ڽ��� �����ٱ����� ���� �������� ������ �������ΰ�
//
//int main()
//{
//	int trial;
//	cin >> trial;
//	int answer = trial;
//
//	int* arr = new int[trial];
//
//	for (int i = 0; i < trial; i++)
//	{
//		cin >> arr[i];
//		if (arr[i] == 1)
//			answer--;
//	}
//
//	for (int i = 0; i < trial; i++)
//	{
//		for (int j = 2; j <= sqrt(arr[i]); j++)
//		{
//			if (arr[i] % j == 0) //0���� �������°��� �����ϸ� �Ҽ��� �ƴ϶�°�
//			{
//				answer--; //�Ҽ����� ���ܽ�Ŵ
//				break;
//			}
//		}
//	}
//
//	cout << answer;
//}