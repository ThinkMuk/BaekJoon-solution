//#include <iostream>
//#include <vector>
//using namespace std;
// 
// �ڲ� ���� ���߿� �ô޷��� BFS�� �� ������ ����ҷ� �ϴϱ� ���� ���� �̵����� �ƴ� �Լ��� ó���� �����������.
// �ٽ� ������ �� �ڵ������� ��͸� �̿��ϸ� �� �������� BFS�� �� �� ���ٴ� ������ ��� �����ߴ�.
// ó���� �ٷ� ���� �� �ִ� ���� �������µ� �ٷ� �Ӹ��ӿ��� �ȶ��ö� �ƽ��� �����̴�.
// �߿��� �����̱⵵ �ϰ�, �ƽ����� �־� ������ �� Ǯ����� �� �� ���� RE�� �߰��� �д�,,,,��
// 
////����� cNode�� ���� ��ĺ��� +1�Ǿ����� (����)
//vector<vector<int>> connection;
//vector<bool> check;
//int cnt = 0;
//
//void BFS(int a)
//{
//	check[a] = true;
//
//	for (int i = 0; i < connection[a].size(); i++)
//	{
//		int temp = connection[a][i] - 1;
//		if (!check[temp])
//		{
//			BFS(temp);
//			cnt++;
//		}
//
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int qSize;
//	cin >> qSize;
//
//	for (int i = 0; i < qSize; i++) //���ͷ� ������� �׷��� ����
//	{
//		vector<int> temp;
//		temp.push_back(i + 1);
//		connection.push_back(temp);
//
//		check.push_back(0); //�湮�ߴ��� Ȯ���ϴ� ����
//	}
//
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//
//		connection[temp1 - 1].push_back(temp2);
//		connection[temp2 - 1].push_back(temp1);
//	}
//
//	BFS(0); //1�� �����Ѱ��� 
//
//	cout << cnt << "\n";
//}
//
