//#include <iostream>
//#include <vector>
//using namespace std;
//
////https://blog.encrypted.gg/943?category=773649
////������ ������ ���ߴ��� 50��¥�� ������ ���͹��ȴ�...
////������ �����ؼ� �ٽ� ���ϴ� �ؽ� ������ �ٽ� ���� ��ũ ���鼭 �ٽ� �ؾ��ҵ�
//
//int main()
//{
//	vector<char> strArray;
//	vector<long long> intArray;
//	long long R = 1;
//	long long M = 1234567891; //�̰� �ϴ� ������ ����
//	long long answer = 0;
//
//	int trial;
//	cin >> trial;
//	
//	string input;
//	cin >> input;
//
//	for (int i = 0; i < trial; i++)
//	{
//		strArray.push_back(input[i]);
//	}
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp = strArray[i];
//		temp -= 96;
//		intArray.push_back(temp);
//	}
//
//	for (int i = 0; i < trial; i++)
//	{
//		answer = (answer + intArray[i] * R) % M; //���Ⱑ ���� �ǹ���
//		R = (R * 31) % M;
//	}
//
//	cout << answer;
//}
