//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////sort(v.rbegin(), v.rend());		// 2. �������� ���� ( rbegin()�� rend()�� ���)
////sort(v.begin(), v.end(), comp); // 3. �������� ���� (���Լ��� ���)
////iter_swap(a.begin(),a.begin()+?); //���� �ٲܶ� ���°�
////vector.insert(��ǥ,���� ����) //���� ���̿� ���Ҹ� ��������
////�̷��� ���ٽ��� �˰��� Ŭ������ ���� Ŭ������ ���ÿ� �̿��� ����ϸ� ���� ������ Ǯ �� ����.
//
//int main()
//{
//	vector<int> array;
//	int input;
//
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		array.push_back(i + 1);
//	}
//
//	sort(array.rbegin(), array.rend());
//
//	while (array.size() > 1)
//	{
//		if (array.size() == 2)
//		{
//			array.pop_back();
//		}
//		else
//		{
//			array.pop_back();
//			array.insert(array.begin(), array.back());
//			array.pop_back();
//		}
//	}
//
//	cout << array[0];
//}