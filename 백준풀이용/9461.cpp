//#include <iostream>
//#include <vector>
//using namespace std;
//
// ó���� ������ ������ ���� ��ȭ���� �������� �˾Ҵµ� �˻��غ��� ���ڸ� ���� �� �ִ� ������ ��������
// int dp[]�� long long ���� �ٲپ�δ� ������ ��û���� �þ ���ڸ� ��� ���� �� �ְ� �ƴ�
// dp������ Ǯ �� ��ȭ���� �´� �� ������ ������ ���ö��� ������ �ǽ��غ��� ������ �������°��� ���� �� ����.
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