//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
// 이번 문제는 라이브러리를 활용 잘 하는게 관건이였던 것 같다.
// 
// 사용한 라이브러리:
// map, algorithm, vector
// 
// map은 우선 기본적인 자료구조 정리를 위해 사용을 했다. 처음으로 듣도 못한 사람을 우선 받고,
// 그 후에 보도 못한 사람을 같이 비교해서 중복되는 사람이 있을 시, vector 함수에 넣어 보관하는 것으로 했다.
// 또한, 사전순대로 정렬을 해야 했기 때문에, algorithm에서 지원하는 sort 함수를 사용해 정렬해놓고
// 출력을 했다.
// 
// map에 대해 아직 익숙하지 않아 추가적인 공부가 필요할 것 같다. (자료구조에 대해 더 자세하게 공부해서 재수강 할 때
// 힘들지 않게 해야 할 듯 싶다)
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	map<string, int> m;
//	vector<string> ans;
//
//	//여기서 a는 듣도 못한 사람, b는 보도 못한사람
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < a; i++)
//	{
//		string temp;
//		cin >> temp;
//		m.insert(make_pair(temp, 1));
//	}
//
//	for (int i = 0; i < b; i++)
//	{
//		string temp;
//		cin >> temp;
//		if (m.find(temp) == m.end()) {
//			continue;
//		}
//		else {
//			ans.push_back(temp);
//		}
//	}
//
//	sort(ans.begin(), ans.end());
//
//	cout << ans.size() << "\n";
//	for (int i = 0; i < ans.size(); i++)
//	{
//		cout << ans[i] << "\n";
//	}
//	return 0;
//}