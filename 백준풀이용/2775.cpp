//#include <iostream>
//#include <vector>
//using namespace std;
//
////3�������� preNode, curNode�� ����� ������ �ִ� �����͸� �����ͼ� �ڷḦ ���ϴ� ����.
////ó������ vector �Լ����� swap�� ����غ�
// �ǹ���: �޸� �Ҹ� Ŀ ���̴µ� �� ȿ������ ����� ����?
//
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int floor;
//		int address;
//		vector<int> preNode;
//		vector<int> curNode;
//		cin >> floor >> address;
//
//		if (floor == 0)
//			cout << address << "\n";
//		else
//		{
//			for (int b = 1; b <= address; b++)
//			{
//				preNode.push_back(b);
//				curNode.push_back(b);
//			}
//
//			for (int a = 1; a <= floor; a++) //���� �ö󰡴°�
//			{
//				preNode.swap(curNode);
//				for (int j = 0; j < address; j++) //ȣ�� �ϳ��� �ϳ��� ���س����� ����
//				{
//					int temp = 0;
//					for (int k = 0; k < j+1; k++) //�ּ��� Ƚ����ŭ curNode�� �����ִ� ����
//					{
//						temp += preNode[k];
//					}
//					curNode[j] = temp;
//				}
//			}
//			cout << curNode[address - 1] << "\n";
//		}
//	}
//}