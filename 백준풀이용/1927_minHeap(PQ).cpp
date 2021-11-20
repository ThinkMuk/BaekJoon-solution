#include <iostream>
#include <queue>
using namespace std;

//기본적인 priority_queue 는 최대힙의 스타일을 가지고 있다. 그리고 이를 선언하기 위해선
// priority_queue<int, vector<int>> q; 와 같은 방식으로 선언을 한다.
// 하지만, 문제에서 요구하는 최소힙의 구조대로 출력을 할려면
// 아래와 같은 방식으로 호출을 해야 최소힙의 기준으로 출력이 된다.
// 
// priority queue, 그리고 최소힙 최대힙에 대한 자세한 정보를 복기시키고 싶으면 아래 주소로 들어가서 복습하면 좋을 것 같다.
// https://breakcoding.tistory.com/123
// 
// ****
// 처음에 시간초과가 떴다.
// 이를 해결하기 위해서는 int main에
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// 를 계속 꾸준히 적어주는 방법을 외워놓는것도 하나의 방법이 될 것 같다.

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> minHeap;
	int trial;

	cin >> trial;

	for (int i = 0; i < trial; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (minHeap.empty())
				cout << 0 << "\n";
			else {
				cout << minHeap.top() << "\n";
				minHeap.pop();
			}
		}
		else {
			minHeap.push(temp);
		}
	}
}