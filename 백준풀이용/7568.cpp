//#include <iostream>
//#include <vector>
//using namespace std;
//
////pair�� ���ؼ� �ٽ� ������ ���� �ð��̿���.
////���� ����� ���� �ð��� � �˰����� �� ȿ�����̰� ����ϴ����� �����صΰ� Ǫ�°� ������
////pair�� ���ؼ� ���� �� �����غ��� �� ��?
////1Ʈ�� �����ð��ȿ� ���缭 ����̰� ����
//
//int main()
//{
//	vector<pair<int, int>> student;
//	vector<int> rank;
//
//	int stuNum;
//	cin >> stuNum;
//
//	for (int i = 0; i < stuNum; i++)
//	{
//		int kg, height;
//		cin >> kg >> height;
//		//�̰Ŵ� student.push_back(make_pair(kg, height)); �� �ص� ��.
//		student.push_back(pair<int, int>(kg, height));
//	}
//
//	for (int i = 0; i < stuNum; i++)
//	{
//		int temp = 1;
//		for (int j = 0; j < stuNum; j++)
//		{
//			if (student[i].first < student[j].first && student[i].second < student[j].second)
//				temp++;
//		}
//		rank.push_back(temp);
//	}
//
//	for (int i = 0; i < rank.size(); i++)
//		cout << rank[i] << " ";
//}