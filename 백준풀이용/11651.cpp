//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
// 
// 이미 이전에 stable_sort와 pair vector에 대한것을 배워서 이번 문제는 쉽게 풀 수 있었음.
// 대신 이번에 다시 compare함수를 이용해 sort함수를 풀어내는거를 다시 배울 수 있게 됐음.
// sort 안의 compare은 a (현재 노드) b (다음 노드) 를 가리키고 있고, 만약 리턴값이 false 이면
// sort 에서 직접 swap을 진행시킴.
// 이번 문제의 경우 y축을 기준으로 진행하기 때문에 기존 first를 우선시하는 sort함수를 사용하지 않고
// 새로운 compare 함수를 만들어서 직접 sort함수 안에 집어넣었음.
// 
//
////compare값이 false면 swap을 실행.
////기존 sort의 compare은 first를 우선시하고 그 다음 second이기 때문에 둘을 교체
//bool compare(pair<int, int>a, pair<int, int>b) {
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	else {
//		return a.second < b.second;
//	}
//}
//
//int main() {
//	int trial;
//	vector <pair<int, int> > array;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++) {
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//
//		array.push_back(make_pair(temp1, temp2));
//	}
//
//	stable_sort(array.begin(), array.end(), compare);
//
//	for (int i = 0; i < trial; i++) {
//		cout << array[i].first << " " << array[i].second << "\n";
//	}
//}