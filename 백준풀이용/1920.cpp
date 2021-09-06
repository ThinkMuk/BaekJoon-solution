//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////무식하게 for문을 많이 돌려 시간복잡도를 n^2으로 만들지 말고
////탐색하는 문제들은 웬만하면 이진탐색을 이용해 logn으로 만들것
////또한, 속도를 빠르게 하기 위해선 endl; 대신 "\n"을 사용하고
////아래에 보이는 sync_with_stdio(0); cin.tie(0)을 사용해 cin의 속도를 높여야 한다.
//
//vector<int> mainArray;
//
//int BinarySearch(int min, int max, int target)
//{
//	if (min > max)
//		return 0;
//	else
//	{
//		int mid = (min + max) / 2;
//
//		if (mainArray[mid] == target)
//			return 1;
//		else if (mainArray[mid] > target)
//			return BinarySearch(min, mid - 1, target);
//		else
//			return BinarySearch(mid + 1, max, target);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0); //cin의 속도를 위해 꼭 삽입시켜야함
//
//	int trial;
//	cin >> trial;
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		mainArray.push_back(temp);
//	}
//
//	sort(mainArray.begin(), mainArray.end());
//
//	int input;
//	cin >> input;
//	for (int i = 0; i < input; i++)
//	{
//		int temp;
//		cin >> temp;
//		cout << BinarySearch(0, trial - 1, temp) << "\n";
//	}
//}