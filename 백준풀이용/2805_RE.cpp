//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////ū �Լ��� ����Ѵٴ°ͺ��� �޴°Ͱ� ����ϴ°��� ��� long long���� ū����
////������ �� �ְ� ������ ����.
////�� �ܿ� ����ó���� ����� �ϴ°� �־��µ� �װ͵鵵 ����� ���� �߾�� ����
//
//vector<long long> TreeArray;
//long long result;
//
//int binarySearch(int min, int max, int goal)
//{
//	if (min > max)
//		return result;
//
//	long long temp = 0;
//	long long mid = (min + max) / 2;
//
//	for (int i = 0; i < TreeArray.size(); i++)
//	{
//		if (TreeArray[i] > mid)
//			temp += (TreeArray[i] - mid);
//	}
//
//	if (temp >= goal)
//		result = result < mid ? mid : result; //���� ������
//	//�߶� ���� ���� ���̰� �ʿ�� �ϴ� �������̺��� ũ�ٸ� 
//	//��ǥ���� ����� �ٻ�ġ�� ���Ѵ�.
//
//	if (temp > goal)
//		return binarySearch(mid + 1, max, goal);
//	else
//		return binarySearch(min, mid - 1, goal);
//	
//}
//
//int main()
//{
//	int trees;
//	int goal;
//
//	cin >> trees >> goal;
//
//	for (int i = 0; i < trees; i++)
//	{
//		long long temp;
//		cin >> temp;
//		TreeArray.push_back(temp);
//	}
//
//	stable_sort(TreeArray.begin(), TreeArray.end());
//
//	cout << binarySearch(0, TreeArray.back(), goal);
//}