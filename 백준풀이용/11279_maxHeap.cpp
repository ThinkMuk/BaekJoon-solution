//#include <iostream>
//#include <queue>
//using namespace std;
//
// 1927번의 minHeap 문제와 연결되는 문제이다.
// 기본적인 priority_queue는 최대힙의 스타일을 가지고 있어, priority_queue<int, vector<int> 를 선언하면
// 바로 최대힙의 자료구조가 완성이 된다.
// *하지만, 최소힙을 선언시킬려면 priority_queue<int, vector<int>, greater<int>> minHeap; 식으로 선언해야 한다.
// 시간초과를 미리 방지시키기 위해 13,14,15줄에 적혀있는 코드를 사용하였다.
// 코딩면에서는 쉬운 문제였지만, priority_queue라는 자료구조형을 다시 공부하면서
// 풀어보면 도움이 될 것 같다.
// 
//int main()
//{
//	ios_base::sync_with_stdio(false); 
//	cin.tie(NULL); 
//	cout.tie(NULL);
//
//	priority_queue<int, vector<int>> maxHeap;
//	int trial;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == 0) {
//			if (maxHeap.empty())
//				cout << 0 << "\n";
//			else {
//				cout << maxHeap.top() << "\n";
//				maxHeap.pop();
//			}
//		}
//		else {
//			maxHeap.push(temp);
//		}
//	}
//
//	return 0;
//}