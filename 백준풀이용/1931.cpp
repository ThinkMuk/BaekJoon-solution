//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
// �׸��� �˰����� ����� ������ Ǯ��Ҵ�.
// �׸��� �˰����� ���� ������ ������ �Ұ��������� �׷��� �� �߿� ������ ������ �������ִ� �˰����̶��
// �����ϸ� ���ϴ�.
// �׸������� �����Ϸ��� ������ ������ �׻� ���ݵǾ�� �ϸ�, ������ ����� ���� ��ƴٰ� �Ѵ�..
// ������ ������ �׸��� �˰��� �������߿� ��ǥ���� ������, Action Selection ������ Ǯ��Ҵ�.
// 
// �� ���������� ���������� ���ؼ� Ǯ����� �� ���� '���� ���� �ð��� ���� ��'�� �����ؾ� �ϹǷ�,
// second�� �ִ� ����(ȸ�ǰ� ������ �ð�)�� sort�ؼ� Ǯ�����.
// 
//bool sortAlgorithm(pair<int, int>a, pair<int, int>b)
//{
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	else
//		return a.second < b.second;
//}
//int main()
//{
//	vector<pair<int, int>> conference;
//	int trial;
//	int temp1, temp2;
//	int compNum = 0;
//	int ans = 0;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		cin >> temp1 >> temp2;
//		conference.push_back(make_pair(temp1, temp2));
//	}
//
//	sort(conference.begin(), conference.end(), sortAlgorithm);
//
//	for (int i = 0; i < trial; i++)
//	{
//		if (ans <= conference[i].first) {
//			compNum++;
//			ans = conference[i].second;
//		}
//		else
//			continue;
//	}
//
//	cout << compNum << "\n";
//
//	return 0;
//}