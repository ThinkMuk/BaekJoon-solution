//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
////https://www.acmicpc.net/board/view/84722 질문 남겼으니 참고
//
//bool compare(const pair<int,int>& a, const pair<int,int>& b)
//{
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	return a.second > b.second;
//}
//
//int main()
//{
//	int trial;
//	vector<int> v;
//	vector<pair<int, int>> tempV;
//
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		v.push_back(temp);
//
//		if (tempV.empty()) {
//			tempV.push_back(make_pair(temp, 1));
//		}
//		else {
//			for (int j = 0; j < tempV.size(); j++)
//			{
//				if (temp == tempV[j].first) {
//					tempV[j].second++;
//				}
//				else {
//					tempV.push_back(make_pair(temp, 1));
//					break;
//				}
//			}
//		}
//	}
//
//	sort(v.begin(), v.end());
//	sort(tempV.begin(), tempV.end(), compare);
//
//	//1
//	double fTemp = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		fTemp += v[i];
//	}
//	fTemp /= v.size();
//	int fResult = floor(fTemp + 0.5);
//
//	//2
//	int sResult = v[(v.size() / 2)];
//
//	//3
//	int tTemp = 0;
//	int tResult = 0;
//	if (tempV.size() >= 2)
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			if (tTemp <= tempV[i].second) {
//				if (tTemp == tempV[i].second) {
//					tResult = tempV[i].first;
//					break;
//				}
//				else {
//					tTemp = tempV[i].second;
//					tResult = tempV[i].first;
//				}
//			}
//		}
//	}
//	else {
//		if (tTemp < tempV[0].second)
//			tResult = tempV[0].first;
//	}
//
//
//	//4
//	int lResult = v[v.size() - 1] - v[0];
//
//	cout << fResult << "\n" << sResult << "\n" << tResult << "\n" << lResult;
//}