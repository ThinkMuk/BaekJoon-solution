//#include <iostream>
//#include <vector>
//using namespace std;
//
// DFS,BFS 에 관한 내용을 이번에는 혼자 스스로 풀어보았다.
// 처음에 쓸데없는 함수가 몇개 있어서 시간 초과가 났다는 점에서도 공부해야 할 것이 아직 산더미라는걸 느꼈다.
// DFS로 어찌저찌 풀긴 했는데 이론은 이제 알아도 코딩에서는 아직 불안전 한 것 같다. 
// 아직 BFS에는 익숙치 않은 것 같아 BFS랑 DFS에 관련된 코드를 참고하며 공부해야 할 것 같다.
// 
// DFS: Depth first search 의 줄임말로, 이 문제와 같이 받은 그래프들을 하나씩 깊이 먼저 파고 들어가서 처리하고,
// 그 다음것으로 넘어가 처리하는 방식을 얘기함.
// 
// P.S. 다음번에 풀이 할 때는 BFS도 한번 이용해서 풀이해보기 (검색해서 추가 공부하기)
// 
// TODO: DFS 와 BFS를 코드 부분에서 이해해보기
// https://better-tomorrow.tistory.com/entry/DFS-BFS-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B8%B0
// 
//vector<vector<int>> v;
//vector<bool> check;
//
//void BFS(int startNum)
//{
//	for (int i = 0; i < v[startNum].size(); i++) //startNum으로 받은 
//	{
//		if (v[startNum][i] == 0)
//			break;
//		else {
//			if (check[v[startNum][i]] != true) {
//				check[v[startNum][i]] = true;
//				BFS(v[startNum][i]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int vertex, edge;
//	int count = 0;
//	cin >> vertex >> edge;
//
//	//v[0]에 쓰레기 값을 넣어놓기 (알아보기 쉽게)
//	vector<int> tempZero(0);
//	v.push_back(tempZero);
//
//	//그 후에 v[1]부터 값 넣어놓기
//	for (int i = 1; i <= vertex; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j < vertex; j++)
//		{
//			temp.push_back(0);
//		}
//		v.push_back(temp);
//	}
//	//v 벡터 그래프 만들기 //수정
//	for (int i = 0; i < edge; i++)
//	{
//		int con1, con2;
//		cin >> con1 >> con2;
//		for (int j = 0; j < vertex; j++)
//		{
//			if (v[con1][j] == 0) {
//				v[con1][j] = con2;
//				break;
//			}
//		}
//		for (int j = 0; j < vertex; j++)
//		{
//			if (v[con2][j] == 0) {
//				v[con2][j] = con1;
//				break;
//			}
//		}
//	}
//	//check 만들어놓기
//	for (int i = 0; i <= vertex; i++)
//	{
//		if (i == 0)
//			check.push_back(true);
//		else
//			check.push_back(false);
//	}
//
//
//	for (int i = 0; i < check.size(); i++)
//	{
//		if (check[i] == false) {
//			BFS(i);
//			count++;
//		}
//	}
//
//	cout << count << "\n";
//		
//}