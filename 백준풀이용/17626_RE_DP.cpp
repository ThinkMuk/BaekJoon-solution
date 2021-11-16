//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////dp 진짜 개 어렵다 진짜
////풀어도 풀어도 적응이 안되는게 dp인 것 같은데
////확실하게 더 많이 풀어봐야 익숙해 질 듯 하다.
//
//int main() {
//	int n; 
//	cin >> n;
//
//	vector<int>dp(n + 1, 0);
//
//	dp[1] = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//
//		dp[i] = dp[1] + dp[i - 1];
//
//		for (int j = 2; j * j <= i; j++)
//		{
//			dp[i] = min(dp[i], 1 + dp[i - j * j]);
//		}
//	}
//	cout << dp[n];
//
//	return 0;
//}