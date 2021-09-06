//#include <iostream>
//#include <queue>
//using namespace std;
//
// 컨베이어 벨트처럼 돌아가는 형식으로 생각하면 쉽다.
// 0,1 돌려보내고 2만 뽑고 다시 돌리고 뽑고 하는 방식임.
// 벡터로만 풀려고 하지 말자... 큐로 풀었으면 훨씬 더 쉬웠다
// 
//int main()
//{
//	int n, k;
//	queue<int> array;
//	cin >> n >> k;
//
//	for (int i = 1; i<=n; i++) 
//	{
//		array.push(i);
//	}
//
//	cout << "<";
//	while (!array.empty()) 
//	{
//		for (int i = 0; i < k - 1; i++) //0,1은 다시 돌려보냄
//		{
//			array.push(array.front());
//			array.pop();
//		}
//
//		cout << array.front(); //2 만 출력하고 뽑아버림.
//		array.pop();
//
//		if (!array.empty()) 
//		{
//			cout << ", ";
//		}
//
//	}
//	cout << ">";
//}