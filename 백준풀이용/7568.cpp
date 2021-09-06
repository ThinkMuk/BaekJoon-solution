//#include <iostream>
//#include <vector>
//using namespace std;
//
////pair에 대해서 다시 리뷰해 보는 시간이였음.
////먼저 만들기 전에 시간을 어떤 알고리즘이 더 효율적이게 사용하는지를 생각해두고 푸는게 좋았음
////pair에 대해서 조금 더 공부해봐야 할 듯?
////1트로 빠른시간안에 맞춰서 기분이가 좋음
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
//		//이거는 student.push_back(make_pair(kg, height)); 로 해도 됨.
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