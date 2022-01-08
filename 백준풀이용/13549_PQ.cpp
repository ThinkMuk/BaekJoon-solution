//#include <iostream>
//#include <queue>
//using namespace std;
//
//// 1697�� ������ ������
//// BFS�� �ʺ�Ž���̱� ������ �� �ִ� ��ġ���� �� �� �ִ� ������ Ž���� �� ����
//// �����̵��� �ð��� 1���� 0���� �ٲ���� ������, �켱���� ť�� ����� Ǯ�̸� �����߰�,
//// if�������� �����̵��� ���� ��� Ǯ�� �� �� �ְ� ������ Ǯ�̿��� �����̵��� ������ �̵��� ��Ŵ
//// 
//// �켱���� ť�� ������ ������ ���� �ؾ� �� �� ����.. (c++ �󿡼� ������ ���� ����� ������ ���� ����)
//
//const int MAX = 100001;
//int check[MAX] = { 0 };
//
//int BFS(int startNum, int endNum)
//{
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tempSave;
//
//	int cord;
//	int trial;
//
//	tempSave.push(make_pair(0, startNum));
//	check[startNum] = true;
//
//	while (!tempSave.empty())
//	{
//		trial = tempSave.top().first;
//		cord = tempSave.top().second;
//		tempSave.pop();
//
//		if (cord == endNum) {
//			return trial;
//		}
//		if (cord * 2 < MAX && !check[cord * 2]) {
//			tempSave.push(make_pair(trial, cord * 2));
//			check[cord * 2] = true;
//		}
//		if (cord + 1 < MAX && !check[cord + 1]) {
//			tempSave.push(make_pair(trial + 1, cord + 1));
//			check[cord + 1] = true;
//		}
//		if (cord - 1 >= 0 && !check[cord - 1]) {
//			tempSave.push(make_pair(trial + 1, cord - 1));
//			check[cord - 1] = true;
//		}
//	}
//}
//
//int main()
//{
//	int start, end;
//	cin >> start >> end;
//
//	cout << BFS(start, end) << "\n";
//
//	return 0;
//}
