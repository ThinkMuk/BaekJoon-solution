//#include <iostream>
//#include <vector>
//using namespace std;
//
// �� ������ �׸��� �˰����� �̿��� Ǫ�� ��������.
// ������ ���ϸ� �׸��� �˰����� ��Ȯ�ϰ� ã�Ƽ� Ǯ�̸� �ߴٱ� ����, �־��� ������ �����鿡��
// ���� ū ������ �������鼭 ������ �� ������ �ݾ��� ���������� while���� ���� �ּ��� �����鸸 ����� �� �ְ�
// �˰����� ����� �´�.
// (������ �ѹ��� ���� ���� Ǯ���� ����� ���� :D)
// 
//int main()
//{
//	int trial, goal;
//	int pay = 0;
//	int addTrial = 0;
//	vector<int> wallet;
//	cin >> trial >> goal;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		wallet.push_back(temp);
//	}
//
//	for (int i = trial - 1; i >= 0; i--)
//	{
//		while (pay + wallet[i] <= goal)
//		{
//			pay += wallet[i];
//			addTrial++;
//		}
//	}
//
//	cout << addTrial << endl;
//}