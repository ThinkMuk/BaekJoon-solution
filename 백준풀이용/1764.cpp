//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
// �̹� ������ ���̺귯���� Ȱ�� �� �ϴ°� �����̿��� �� ����.
// 
// ����� ���̺귯��:
// map, algorithm, vector
// 
// map�� �켱 �⺻���� �ڷᱸ�� ������ ���� ����� �ߴ�. ó������ �赵 ���� ����� �켱 �ް�,
// �� �Ŀ� ���� ���� ����� ���� ���ؼ� �ߺ��Ǵ� ����� ���� ��, vector �Լ��� �־� �����ϴ� ������ �ߴ�.
// ����, ��������� ������ �ؾ� �߱� ������, algorithm���� �����ϴ� sort �Լ��� ����� �����س���
// ����� �ߴ�.
// 
// map�� ���� ���� �ͼ����� �ʾ� �߰����� ���ΰ� �ʿ��� �� ����. (�ڷᱸ���� ���� �� �ڼ��ϰ� �����ؼ� ����� �� ��
// ������ �ʰ� �ؾ� �� �� �ʹ�)
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	map<string, int> m;
//	vector<string> ans;
//
//	//���⼭ a�� �赵 ���� ���, b�� ���� ���ѻ��
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < a; i++)
//	{
//		string temp;
//		cin >> temp;
//		m.insert(make_pair(temp, 1));
//	}
//
//	for (int i = 0; i < b; i++)
//	{
//		string temp;
//		cin >> temp;
//		if (m.find(temp) == m.end()) {
//			continue;
//		}
//		else {
//			ans.push_back(temp);
//		}
//	}
//
//	sort(ans.begin(), ans.end());
//
//	cout << ans.size() << "\n";
//	for (int i = 0; i < ans.size(); i++)
//	{
//		cout << ans[i] << "\n";
//	}
//	return 0;
//}