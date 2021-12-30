//#include <iostream>
//#include <vector>
//using namespace std;
//
// DFS,BFS �� ���� ������ �̹����� ȥ�� ������ Ǯ��Ҵ�.
// ó���� �������� �Լ��� � �־ �ð� �ʰ��� ���ٴ� �������� �����ؾ� �� ���� ���� ����̶�°� ������.
// DFS�� �������� Ǯ�� �ߴµ� �̷��� ���� �˾Ƶ� �ڵ������� ���� �Ҿ��� �� �� ����. 
// ���� BFS���� �ͼ�ġ ���� �� ���� BFS�� DFS�� ���õ� �ڵ带 �����ϸ� �����ؾ� �� �� ����.
// 
// DFS: Depth first search �� ���Ӹ���, �� ������ ���� ���� �׷������� �ϳ��� ���� ���� �İ� ���� ó���ϰ�,
// �� ���������� �Ѿ ó���ϴ� ����� �����.
// 
// P.S. �������� Ǯ�� �� ���� BFS�� �ѹ� �̿��ؼ� Ǯ���غ��� (�˻��ؼ� �߰� �����ϱ�)
// 
// TODO: DFS �� BFS�� �ڵ� �κп��� �����غ���
// https://better-tomorrow.tistory.com/entry/DFS-BFS-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0
// 
//vector<vector<int>> v;
//vector<bool> check;
//
//void BFS(int startNum)
//{
//	for (int i = 0; i < v[startNum].size(); i++) //startNum���� ���� 
//	{
//		if (v[startNum][i] == 0)
//			break;
//		else {
//			if (check[v[startNum][i]] != true) {
//				check[v[startNum][i]] = true;
//				BFS(v[startNum][i]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int vertex, edge;
//	int count = 0;
//	cin >> vertex >> edge;
//
//	//v[0]�� ������ ���� �־���� (�˾ƺ��� ����)
//	vector<int> tempZero(0);
//	v.push_back(tempZero);
//
//	//�� �Ŀ� v[1]���� �� �־����
//	for (int i = 1; i <= vertex; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j < vertex; j++)
//		{
//			temp.push_back(0);
//		}
//		v.push_back(temp);
//	}
//	//v ���� �׷��� ����� //����
//	for (int i = 0; i < edge; i++)
//	{
//		int con1, con2;
//		cin >> con1 >> con2;
//		for (int j = 0; j < vertex; j++)
//		{
//			if (v[con1][j] == 0) {
//				v[con1][j] = con2;
//				break;
//			}
//		}
//		for (int j = 0; j < vertex; j++)
//		{
//			if (v[con2][j] == 0) {
//				v[con2][j] = con1;
//				break;
//			}
//		}
//	}
//	//check ��������
//	for (int i = 0; i <= vertex; i++)
//	{
//		if (i == 0)
//			check.push_back(true);
//		else
//			check.push_back(false);
//	}
//
//
//	for (int i = 0; i < check.size(); i++)
//	{
//		if (check[i] == false) {
//			BFS(i);
//			count++;
//		}
//	}
//
//	cout << count << "\n";
//		
//}