//#include <iostream>
//#include <vector>
//using namespace std;
//
// 이 문제는 그리디 알고리즘을 이용해 푸는 문제였다.
// 솔직히 말하면 그리디 알고리즘을 정확하게 찾아서 풀이를 했다기 보단, 주어진 지갑의 동전들에서
// 가장 큰 수부터 내려오면서 덧샘을 해 일정한 금액이 맞을때까지 while문을 돌려 최소의 동전들만 사용할 수 있게
// 알고리즘을 만들어 냈다.
// (솔직히 한번에 완전 쉽게 풀려서 기분이 좋음 :D)
// 
//int main()
//{
//	int trial, goal;
//	int pay = 0;
//	int addTrial = 0;
//	vector<int> wallet;
//	cin >> trial >> goal;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		wallet.push_back(temp);
//	}
//
//	for (int i = trial - 1; i >= 0; i--)
//	{
//		while (pay + wallet[i] <= goal)
//		{
//			pay += wallet[i];
//			addTrial++;
//		}
//	}
//
//	cout << addTrial << endl;
//}