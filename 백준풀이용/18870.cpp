//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// algorithm library �ȿ��� upper_bound, lower_bound ����,
//// �� �ܿ� unique �Լ��� �̿��� �ߺ��Ǵ� ���ڸ� ���ִ� ���
//// �ڵ��� �Կ� �־ library �� ���� Ȱ���� �ʼ��� �ؾ� �ϴ� �� �߿� �ϳ��ΰ��� �ٽ� ������ ��������.
//// (ó������ �׳� �����ϰ� search�� �ع����� �ð��ʰ��� �����ȴ� �Ƹ� bigO�� n^2�̿��� ��)
//// lower_bound�� ����Ž���� Ȱ���� �Լ��̱� ������ �ð��ʰ��� ���� �ʾҴ�.
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<int> v;
//	vector<int> orgV;
//	int trial;
//
//	cin >> trial;
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		v.push_back(temp);
//		orgV.push_back(temp);
//	}
//
//	//������ �� �� unique �Լ��� ��� ��.
//	sort(v.begin(), v.end());
//	//�ߺ��Ǵ� �Լ��� ��� �ڷ� ���� ��, ����
//	v.erase(unique(v.begin(), v.end()), v.end());
//
//	for (int i = 0; i < orgV.size(); i++)
//	{
//		//���� ��ġ�� lower_bound�� ����� ���� ��, ������ ���۰��� �������μ� int�������� �������.
//		int temp = lower_bound(v.begin(), v.end(), orgV[i]) - v.begin();
//		cout << temp << " ";
//	}
//
//	return 0;
//}
