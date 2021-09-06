//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////sort(v.rbegin(), v.rend());		// 2. 내림차순 정렬 ( rbegin()과 rend()를 사용)
////sort(v.begin(), v.end(), comp); // 3. 내림차순 정렬 (비교함수를 사용)
////iter_swap(a.begin(),a.begin()+?); //원소 바꿀때 쓰는거
////vector.insert(좌표,넣을 원소) //벡터 사이에 원소를 끼워넣음
////이렇게 보다시피 알고리즘 클래스와 벡터 클래스를 동시에 이용해 사용하면 쉽게 문제를 풀 수 있음.
//
//int main()
//{
//	vector<int> array;
//	int input;
//
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		array.push_back(i + 1);
//	}
//
//	sort(array.rbegin(), array.rend());
//
//	while (array.size() > 1)
//	{
//		if (array.size() == 2)
//		{
//			array.pop_back();
//		}
//		else
//		{
//			array.pop_back();
//			array.insert(array.begin(), array.back());
//			array.pop_back();
//		}
//	}
//
//	cout << array[0];
//}