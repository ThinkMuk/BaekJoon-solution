//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
// 
// �̹� ������ stable_sort�� pair vector�� ���Ѱ��� ����� �̹� ������ ���� Ǯ �� �־���.
// ��� �̹��� �ٽ� compare�Լ��� �̿��� sort�Լ��� Ǯ��°Ÿ� �ٽ� ��� �� �ְ� ����.
// sort ���� compare�� a (���� ���) b (���� ���) �� ����Ű�� �ְ�, ���� ���ϰ��� false �̸�
// sort ���� ���� swap�� �����Ŵ.
// �̹� ������ ��� y���� �������� �����ϱ� ������ ���� first�� �켱���ϴ� sort�Լ��� ������� �ʰ�
// ���ο� compare �Լ��� ���� ���� sort�Լ� �ȿ� ����־���.
// 
//
////compare���� false�� swap�� ����.
////���� sort�� compare�� first�� �켱���ϰ� �� ���� second�̱� ������ ���� ��ü
//bool compare(pair<int, int>a, pair<int, int>b) {
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	else {
//		return a.second < b.second;
//	}
//}
//
//int main() {
//	int trial;
//	vector <pair<int, int> > array;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++) {
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//
//		array.push_back(make_pair(temp1, temp2));
//	}
//
//	stable_sort(array.begin(), array.end(), compare);
//
//	for (int i = 0; i < trial; i++) {
//		cout << array[i].first << " " << array[i].second << "\n";
//	}
//}