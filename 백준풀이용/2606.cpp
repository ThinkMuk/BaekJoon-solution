//#include <iostream>
//#include <vector>
//using namespace std;
// 
// 자꾸 저번 배추에 시달려서 BFS를 그 식으로 사용할려 하니까 뭔가 정말 이도저도 아닌 함수가 처음에 만들어졌었다.
// 다시 생각한 뒤 코딩했을때 재귀를 이용하면 더 쉬운방식의 BFS가 될 것 같다는 생각이 들어 수정했다.
// 처음에 바로 맞힐 수 있는 쉬운 문제였는데 바로 머릿속에서 안떠올라 아쉬운 문제이다.
// 중요한 문제이기도 하고, 아쉬움이 있어 다음에 또 풀어봐야 할 것 같아 RE를 추가해 둔담,,,,ㅠ
// 
////참고로 cNode는 기존 행렬보다 +1되어있음 (주위)
//vector<vector<int>> connection;
//vector<bool> check;
//int cnt = 0;
//
//void BFS(int a)
//{
//	check[a] = true;
//
//	for (int i = 0; i < connection[a].size(); i++)
//	{
//		int temp = connection[a][i] - 1;
//		if (!check[temp])
//		{
//			BFS(temp);
//			cnt++;
//		}
//
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int qSize;
//	cin >> qSize;
//
//	for (int i = 0; i < qSize; i++) //벡터로 만들어진 그래프 생성
//	{
//		vector<int> temp;
//		temp.push_back(i + 1);
//		connection.push_back(temp);
//
//		check.push_back(0); //방문했는지 확인하는 방명록
//	}
//
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//
//		connection[temp1 - 1].push_back(temp2);
//		connection[temp2 - 1].push_back(temp1);
//	}
//
//	BFS(0); //1을 선언한거임 
//
//	cout << cnt << "\n";
//}
//
