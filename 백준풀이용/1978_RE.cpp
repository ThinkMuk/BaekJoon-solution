//#include <iostream>
//#include <cmath>
//using namespace std;
//
////에라토스테네스의 소수 필요충분조건은 2보다 크면서 자기 자신의 제곱근까지의 수가 나눠지지 않으면 성공적인것
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
//			if (arr[i] % j == 0) //0으로 나눠지는것이 존재하면 소수가 아니라는것
//			{
//				answer--; //소수에서 제외시킴
//				break;
//			}
//		}
//	}
//
//	cout << answer;
//}