//#include <iostream>
//#include <vector>
//using namespace std;
//
// 처음에 오답이 나왔을 때는 점화식의 문제인줄 알았는데 검색해보니 숫자를 받을 수 있는 범위의 문제였다
// int dp[]를 long long 으로 바꾸어두니 범위가 엄청나게 늘어나 숫자를 모두 받을 수 있게 됐다
// dp문제를 풀 때 점화식이 맞는 것 같은데 오답이 나올때는 범위를 의심해보는 습관을 가져보는것이 좋은 것 같다.
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		long long dp[101] = { 1,1,1,2,2 };
//		int target;
//		cin >> target;
//
//		if (target <= 5) {
//			cout << dp[target - 1] << "\n";
//		}
//		else {
//			for (int i = 5; i < target; i++)
//			{
//				dp[i] = dp[i - 1] + dp[i - 5];
//			}
//			cout << dp[target - 1] << "\n";
//		}
//	}
//
//	return 0;
//}