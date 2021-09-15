//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
// 최소값을 구해내기 위해서는 더했던 것을 여러번 더 더해야 하는 것이니까 작은 숫자가 앞에 있을수록
// 더 작은 값을 구할수 있다.
// 그래서 받은 시간값을 algorithm에 있는 sort함수에 넣어 (false 일때 swap하는 함수임 복습겸 ㅎㅎ)
// 작은순대로 정렬하고, 이를 더해내는 방식으로 계산을 했다
// 
//int main()
//{
//	int ans = 0;
//	int people;
//	vector<int> time;
//
//	cin >> people;
//
//	for (int i = 0; i < people; i++)
//	{
//		int temp;
//		cin >> temp;
//		time.push_back(temp);
//	}
//
//	sort(time.begin(), time.end());
//
//	for (int i = 0; i < people; i++)
//	{
//		for (int j = 0; j <= i; j++) {
//			ans += time[j];
//		}
//	}
//
//	cout << ans;
//
//	return 0;
//}