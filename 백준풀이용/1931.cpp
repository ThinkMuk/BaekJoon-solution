//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
// 그리디 알고리즘을 사용한 문제를 풀어보았다.
// 그리디 알고리즘은 완전 최적의 선택은 불가능하지만 그래도 그 중에 차선의 선택을 가져다주는 알고리즘이라고
// 생각하면 편하다.
// 그리디임을 증명하려면 수학적 증명이 항상 동반되어야 하며, 솔직히 방식이 조금 어렵다고 한다..
// 오늘의 문제는 그리디 알고리즘 문제들중에 대표적인 문제로, Action Selection 문제를 풀어보았다.
// 
// 이 문제에서는 공통적으로 비교해서 풀어나가야 할 것은 '가장 종료 시간이 빠른 것'을 선택해야 하므로,
// second에 있는 원소(회의가 끝나는 시간)을 sort해서 풀어나갔다.
// 
//bool sortAlgorithm(pair<int, int>a, pair<int, int>b)
//{
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	else
//		return a.second < b.second;
//}
//int main()
//{
//	vector<pair<int, int>> conference;
//	int trial;
//	int temp1, temp2;
//	int compNum = 0;
//	int ans = 0;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		cin >> temp1 >> temp2;
//		conference.push_back(make_pair(temp1, temp2));
//	}
//
//	sort(conference.begin(), conference.end(), sortAlgorithm);
//
//	for (int i = 0; i < trial; i++)
//	{
//		if (ans <= conference[i].first) {
//			compNum++;
//			ans = conference[i].second;
//		}
//		else
//			continue;
//	}
//
//	cout << compNum << "\n";
//
//	return 0;
//}