//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// algorithm library 안에서 upper_bound, lower_bound 사용법,
//// 그 외에 unique 함수를 이용해 중복되는 숫자를 없애는 방법
//// 코딩을 함에 있어서 library 의 적극 활용은 필수로 해야 하는 것 중에 하나인것을 다시 느끼는 문제였다.
//// (처음에는 그냥 무식하게 search를 해버려서 시간초과가 나버렸다 아마 bigO가 n^2이였나 봄)
//// lower_bound는 이진탐색을 활용한 함수이기 때문에 시간초과가 나지 않았다.
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<int> v;
//	vector<int> orgV;
//	int trial;
//
//	cin >> trial;
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		v.push_back(temp);
//		orgV.push_back(temp);
//	}
//
//	//정렬을 한 뒤 unique 함수를 써야 함.
//	sort(v.begin(), v.end());
//	//중복되는 함수는 모두 뒤로 보낸 뒤, 삭제
//	v.erase(unique(v.begin(), v.end()), v.end());
//
//	for (int i = 0; i < orgV.size(); i++)
//	{
//		//값의 위치를 lower_bound를 사용해 구한 뒤, 벡터의 시작값을 빼줌으로서 int형식으로 만들어짐.
//		int temp = lower_bound(v.begin(), v.end(), orgV[i]) - v.begin();
//		cout << temp << " ";
//	}
//
//	return 0;
//}
