//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
// �ּҰ��� ���س��� ���ؼ��� ���ߴ� ���� ������ �� ���ؾ� �ϴ� ���̴ϱ� ���� ���ڰ� �տ� ��������
// �� ���� ���� ���Ҽ� �ִ�.
// �׷��� ���� �ð����� algorithm�� �ִ� sort�Լ��� �־� (false �϶� swap�ϴ� �Լ��� ������ ����)
// ��������� �����ϰ�, �̸� ���س��� ������� ����� �ߴ�
// 
//int main()
//{
//	int ans = 0;
//	int people;
//	vector<int> time;
//
//	cin >> people;
//
//	for (int i = 0; i < people; i++)
//	{
//		int temp;
//		cin >> temp;
//		time.push_back(temp);
//	}
//
//	sort(time.begin(), time.end());
//
//	for (int i = 0; i < people; i++)
//	{
//		for (int j = 0; j <= i; j++) {
//			ans += time[j];
//		}
//	}
//
//	cout << ans;
//
//	return 0;
//}