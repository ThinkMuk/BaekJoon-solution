//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////가끔씩은 스스로 알고리즘을 만드는것보다 적절한 library의 이용을 하는것도 시간단축에 도움이 된다.
////algorithm 라이브러리의 sort함수는 시간복잡도가 O(logn)? 정도밖에 안된다
////이 외에도 sort를 하는 알고리즘은
//// insertion sort, selection sort, bubble sort, 3종류가 있다.
//
//int main()
//{
//	int trial;
//	vector<int> sortArray;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		sortArray.push_back(temp);
//	}
//
//	sort(sortArray.begin(), sortArray.end());
//
//	for (int i = 0; i < trial; i++)
//	{
//		cout << sortArray[i] << "\n";
//	}
//}