//#include <iostream>
//#include <vector>
//#include <queue>
//#define MAX 987654321;
//using namespace std;
//
////플로이드-와샬 알고리즘
//// https://jaimemin.tistory.com/640
////또는 BFS로 풀이
//// https://primayy.tistory.com/35
//
//// bfs 응용은 아직 많이 익숙하지 않은것 같다. 머릿속으로 구상을 아직은 하기 좀 버거운 것 같다..
//// 이번에도 여러가지를 참고해 가면서 풀어서 나중에 다시 혼자서 한번 해보는게 좋을 것 같다.
//// bfs의 방식은 알지만 여러가지로 응용하지 못해 아쉬움이 많이 남는 문제이다.
//// 벡터에 대해 새로운 사실도 알았다 vector<int> ex (int) 처럼 뒤에 숫자를 선언시키면 0으로 선언된 값들이 int의 숫자만큼 초기화 된다.
//// 잘 활용하면 나중에 쓸 수 있을것 같다.
//// 무조건 다시 해보고 bfs를 극복해야 할 것 같다 ㅠ
// 
// 
//int bfs(vector<vector<int>>& v, int start, int n) 
//{
//	//같은 노드를 중복해서 방문하지 않기 위해서 dist변수 사용(visit과 같음)
//	vector<int> dist(n + 1, -1); //(유저+1) 을 -1로 다 채워넣는것. (여기서 -1은 방문하지 않은 노드를 의미함)
//	//bfs
//	queue<int> q;
//	q.push(start);//시작 노드
//	dist[start] = 0;//시작 노드의 거리는 0
//	while (!q.empty()) 
//	{
//		int cur = q.front(); 
//		q.pop();
//
//		for (int i = 0; i < v[cur].size(); i++) {//한 노드와 연결된 모든 노드를 순차적으로 방문
//			int nxt = v[cur][i];
//			if (dist[nxt] != -1) continue;//이미 방문한 노드라면 무시
//			dist[nxt] = dist[cur] + 1;//방문하지 않은 노드라면 현재 노드의 거리+1
//			q.push(nxt);
//		}
//	}
//	//start 노드와 연결된 모든 노드들의 거리 총합을 구함
//	int sum = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		sum += dist[i];
//	}
//	//sum이 start 노드의 케빈베이컨
//	return sum;
//}
//
//int main() 
//{
//	int users, relationship;
//	cin >> users >> relationship;
//
//	vector<vector<int>> v(users + 1); //친구 관계를 저장할 변수
//	vector<int> kevin(users + 1);//케빈 베이컨 저장할 변수
//	for (int i = 0; i < relationship; i++)
//	{
//		int a, b;//a와 b가 친구이다.
//		cin >> a >> b;
//		//방향성이 없기 때문에 양방향 모두 연결해야함
//		v[a].push_back(b);//a->b 관계 연결
//		v[b].push_back(a);//b->a 관계 연결
//	}
//
//	int min_kevin = MAX;
//	int ans = 0;
//
//	for (int i = 1; i <= users; i++)
//	{
//		kevin[i] = bfs(v, i, users);
//
//		if (kevin[i] < min_kevin) 
//		{
//			min_kevin = kevin[i];
//			ans = i;
//		}
//	}
//	cout << ans;
//
//	return 0;
//}