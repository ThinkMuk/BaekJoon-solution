//#include <iostream>
//#include <vector>
//using namespace std;
//
////���� ��ü�� ������.�˰��� ��ü�� ������ �ߴ� ��������, ��� ������ �ٸ��� ���� ����� �ʾҴµ� ����� �ٸ� ������
////������ �ƴ�.
////�̻��ϰ� cin ���� �ް� �Ǹ� int �Լ����� ��� ��� ���ڸ� �� �޾Ƶ鿩 �� ���ھ� �ް� �ؾ� �ϴµ�,
////scanf�� Ȱ���ؾ� �ߴ�. ������, ���⼭ scanf �� ����� �� ����, scanf_s �� ����ؾ� �Ѵ� �ؼ� �������̰� �������� ���״�.
////�ٵ� �� ���ؿ����� ������ ������ ����... ����ü ���� �������� �� �𸣰ڴ� �ѹ� ã�ƺ��߰ڴ�
////(������ #define _CRT_SECURE_NO_WARNINGS �� ����ߴµ��� vs community������ ������ ������ �����´� ������ ����
////��¥ ������װڴپƷ�˰ܤä��ԤФ�)
////++) ������ https://www.acmicpc.net/blog/view/52 ���� ���� �ȴ�.
// ++) �̰͵� ���� https://m.blog.naver.com/hirit808/221615764755
//
//vector<vector<int>> quadTree;
//
//void sol(int y,int x,int size)
//{
//	//���� Ž���ϴ� ������ �۾��������� ��ȣ�� �߰��ؾ���.
//
//	//Ž��
//	int searchTemp = NULL;
//	bool match = true;
//
//	for (int i = y; i < size + y; i++)
//	{
//		for (int j = x; j < size + x; j++)
//		{
//			if (i == y && j == x)
//				searchTemp = quadTree[i][j];
//			else {
//				if (searchTemp != quadTree[i][j]) {
//					match = false;
//					break;
//				}
//			}
//		}
//		if (match == false)
//			break;
//	}
//
//	//��� ������: ���� �� -> ������ �� -> ���� �Ʒ� -> ������ �Ʒ�
//	if (match == false)
//	{
//		cout << "(";
//		//2��и�
//		sol(y, x, size / 2);
//		//1��и�
//		sol(y, x + size / 2, size / 2);
//		//3��и�
//		sol(y + size / 2, x, size / 2);
//		//4��и�
//		sol(y + size / 2, x + size / 2, size / 2);
//		cout << ")";
//	}
//	else
//	{
//		cout << searchTemp;
//	}
//}
//
//int main()
//{
//	int size;
//	cin >> size;
//
//	for (int i = 0; i < size; i++)
//	{
//		vector<int> vecTemp;
//		for (int j = 0; j < size; j++)
//		{
//			int temp;
//			//���ؿ����� scanf �� Ȱ���ؾ� �ϴµ�... �� ���⼭��? (������ #define �� �ᵵ �ȵȴ�)
//			scanf_s("%1d", &temp);
//			vecTemp.push_back(temp);
//		}
//		quadTree.push_back(vecTemp);
//	}
//
//	sol(0, 0, size);
//
//}