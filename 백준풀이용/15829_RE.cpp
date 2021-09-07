//#include <iostream>
//#include <vector>
//using namespace std;
//
////https://blog.encrypted.gg/943?category=773649
////나머지 정리를 안했더니 50점짜리 점수가 나와버렸다...
////나머지 정리해서 다시 구하는 해싱 개념은 다시 위에 링크 보면서 다시 해야할듯
//
//int main()
//{
//	vector<char> strArray;
//	vector<long long> intArray;
//	long long R = 1;
//	long long M = 1234567891; //이거 하는 이유가 뭘까
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
//		answer = (answer + intArray[i] * R) % M; //여기가 아주 의문임
//		R = (R * 31) % M;
//	}
//
//	cout << answer;
//}
