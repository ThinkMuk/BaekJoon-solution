//#include <iostream>
//#include <queue>
//using namespace std;
//
// �����̾� ��Ʈó�� ���ư��� �������� �����ϸ� ����.
// 0,1 ���������� 2�� �̰� �ٽ� ������ �̰� �ϴ� �����.
// ���ͷθ� Ǯ���� ���� ����... ť�� Ǯ������ �ξ� �� ������
// 
//int main()
//{
//	int n, k;
//	queue<int> array;
//	cin >> n >> k;
//
//	for (int i = 1; i<=n; i++) 
//	{
//		array.push(i);
//	}
//
//	cout << "<";
//	while (!array.empty()) 
//	{
//		for (int i = 0; i < k - 1; i++) //0,1�� �ٽ� ��������
//		{
//			array.push(array.front());
//			array.pop();
//		}
//
//		cout << array.front(); //2 �� ����ϰ� �̾ƹ���.
//		array.pop();
//
//		if (!array.empty()) 
//		{
//			cout << ", ";
//		}
//
//	}
//	cout << ">";
//}