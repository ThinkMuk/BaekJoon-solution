//#include <iostream>
//#include <queue>
//using namespace std;
//
////priority_queue��°��� ����ϸ�, ���ڰ� ���� ������� �ڵ����� ���ĵǾ� ���´�.
////��, queue ��ü�� pair�� ����� ���� ���ذ��� Ǯ��, time�� space complexity�� �Ʋ� ������ ������ �� �� �ִ�.
////* ���⼭ pair�̶� ť �ϳ��� 2���� ť�� ����°�. �ҷ������� ù��°���� first �ι�°�� second�� �ҷ��� �� �ִ�.
//int main()
//{
//	int testCase;
//	cin >> testCase;
//
//	for (int i = 0; i < testCase; i++)
//	{
//		int arraySize, goal;
//		int count = 0;
//		queue <pair<int, int>> q;
//		priority_queue<int> pq;
//
//		cin >> arraySize >> goal;
//
//
//		for (int j = 0; j < arraySize; j++)
//		{
//			int temp;
//			cin >> temp;
//
//			q.push({ j,temp }); // �ε�����, �߿䵵 push
//			pq.push(temp); // �켱���� ť���� �߿䵵 push
//		}
//
//		while (!q.empty())
//		{
//			int address = q.front().first; //address�� ���� ����
//			int importancy = q.front().second; //importancy�� �߿䵵
//			q.pop();
//
//			if (pq.top() == importancy) // �켱 ����ť�� top�� ���� �߿䵵�� ������ ��� �� ī��Ʈ ����
//			{
//				pq.pop();
//				count++;
//
//				if (address == goal) // ���ϴ� ����Ʈ�� ��µɽ� ������ ī��Ʈ ���
//				{
//					cout << count << "\n";
//					break;
//				}
//			}
//			else
//				q.push({ address,importancy }); // �߿䵵�� ������ �ٽ� push
//		}
//
//	}
//}