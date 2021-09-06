//#include <iostream>
//#include <queue>
//using namespace std;
//
////priority_queue라는것을 사용하면, 숫자가 높은 순서대로 자동으로 정렬되어 나온다.
////즉, queue 자체를 pair로 만들어 서로 비교해가며 풀면, time과 space complexity를 아껴 정답을 산출해 낼 수 있다.
////* 여기서 pair이란 큐 하나에 2개의 큐를 만드는것. 불러낼때는 첫번째꺼는 first 두번째는 second로 불러낼 수 있다.
//int main()
//{
//	int testCase;
//	cin >> testCase;
//
//	for (int i = 0; i < testCase; i++)
//	{
//		int arraySize, goal;
//		int count = 0;
//		queue <pair<int, int>> q;
//		priority_queue<int> pq;
//
//		cin >> arraySize >> goal;
//
//
//		for (int j = 0; j < arraySize; j++)
//		{
//			int temp;
//			cin >> temp;
//
//			q.push({ j,temp }); // 인덱스와, 중요도 push
//			pq.push(temp); // 우선순위 큐에는 중요도 push
//		}
//
//		while (!q.empty())
//		{
//			int address = q.front().first; //address는 들어온 순서
//			int importancy = q.front().second; //importancy는 중요도
//			q.pop();
//
//			if (pq.top() == importancy) // 우선 순위큐의 top과 현재 중요도와 같을때 출력 후 카운트 증가
//			{
//				pq.pop();
//				count++;
//
//				if (address == goal) // 원하던 프린트가 출력될시 현재의 카운트 출력
//				{
//					cout << count << "\n";
//					break;
//				}
//			}
//			else
//				q.push({ address,importancy }); // 중요도가 낮으면 다시 push
//		}
//
//	}
//}