//#include <iostream>
//#include <algorithm>
//using namespace std;
// 
//// 동적프로그래밍 이용한 문제
// 
//int DP[10000001];
//int main()
//{
//	int n; int i;
//	cin >> n;
//
//	for (i = 2; i <= n; ++i)
//	{
//		DP[i] = DP[i - 1] + 1;
//		if (i % 2 == 0)
//			DP[i] = min(DP[i], DP[i / 2] + 1);
//		if (i % 3 == 0)
//			DP[i] = min(DP[i], DP[i / 3] + 1);
//	}
//	cout << DP[n] << endl;
//}