//#include <iostream>
//using namespace std;
//
// �̹� �ڵ��� �׷��� ������ ���� �ʳ�
// room�� ����ϴ� ��ġ, node�� ���ϴ� ��ġ�� ������ �¿��ؼ� �����ϰ� �����ϰ� �ؾ���
// ����� �����ε� �̷��� �ظǰ� �ٺ����� ���S
// 
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int y, x, goal;
//		int node = 1;
//		bool escape = false;
//		cin >> y >> x >> goal;
//
//		for (int j = 0; j < x; j++)
//		{
//			int room = 100;
//			room += (j + 1);
//
//			if (node == goal)
//			{
//				cout << room << "\n";
//				break;
//			}
//
//			for (int k = 0; k < y-1; k++)
//			{
//				room += 100;
//				node++;
//
//				if (node == goal)
//				{
//					cout << room << "\n";
//					break;
//				}
//			}
//			
//			node++;
//		}
//	}
//}