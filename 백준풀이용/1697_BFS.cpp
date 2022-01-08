//#include <iostream>
//#include <queue>
//using namespace std;
//
//// BFS�� �ʺ�Ž���̱� ������ �� �ִ� ��ġ���� �� �� �ִ� ������ Ž���� �� ����
//// �ִܰŸ��� ���ϴ� ���������� ��ü������ BFS�� ����ؼ� Ǯ����
//// 
//// �߰������� BFS�� DFS ��뿡 ����Ǵ� ����:
//// ����� Ư¡�� �����ص־� �ϴ� ���� = DFS�� Ǯ��
//// �׷����� ��� ������ �湮�ϴ� ���� �ֿ��� ���� = BFS, DFS ��� ����.
//// BFS�� queue�� ����� Ǯ��, DFS���� ��� stack �̳� ����Լ��� ����� Ǯ�̸� �ϸ� �ȴ�.
//
//const int MAX = 100001;
//int check[MAX] = { 0 };
//
//int BFS(int startNum, int endNum)
//{
//	// ????
//	queue<pair<int, int>> tempSave;
//	int cord;
//	int trial;
//
//	tempSave.push(make_pair(startNum, 0));
//
//	while (!tempSave.empty())
//	{
//		cord = tempSave.front().first;
//		trial = tempSave.front().second;
//		tempSave.pop();
//
//		if (cord == endNum) {
//			return trial;
//		}
//
//		if (cord + 1 < MAX && !check[cord + 1]) {
//			tempSave.push(make_pair(cord + 1, trial + 1));
//			check[cord + 1] = true;
//		}
//		if (cord - 1 >= 0 && !check[cord - 1]) {
//			tempSave.push(make_pair(cord - 1, trial + 1));
//			check[cord - 1] = true;
//		}
//		if (cord * 2 < MAX && !check[cord * 2]) {
//			tempSave.push(make_pair(cord * 2, trial + 1));
//			check[cord * 2] = true;
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