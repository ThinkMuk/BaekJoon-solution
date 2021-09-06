//#include <iostream>
//#include <queue>
//using namespace std;
//
////이 방식은 algorithm에서 sort함수를 사용 안했기 때문에 더 시간을 아낄수 있음
////이런 작은숫자->큰 숫자 형식은 큐를 사용하는게 더 시간복잡도면에서 효율적임
//
//int main()
//{
//	int input;
//	queue<int> array;
//
//	cin >> input;
//
//	for (int i = 1; i <= input; ++i) {
//		array.push(i);
//	}
//
//	while (array.size() > 1) {
//		array.pop();
//		array.push(array.front());
//		array.pop();
//	}
//
//	cout << array.front() << "\n";
//}