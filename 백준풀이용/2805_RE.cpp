//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////큰 함수를 사용한다는것부터 받는것과 출력하는것은 모두 long long으로 큰것을
////감당할 수 있게 해줬어야 했음.
////그 외에 예외처리를 해줘야 하는게 있었는데 그것들도 제대로 보고 했어야 했음
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
//		result = result < mid ? mid : result; //삼향 연산자
//	//잘라서 나온 나무 길이가 필요로 하는 나무길이보다 크다면 
//	//목표물에 가까운 근사치를 구한다.
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