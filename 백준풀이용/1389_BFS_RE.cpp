//#include <iostream>
//#include <vector>
//#include <queue>
//#define MAX 987654321;
//using namespace std;
//
////�÷��̵�-�ͼ� �˰���
//// https://jaimemin.tistory.com/640
////�Ǵ� BFS�� Ǯ��
//// https://primayy.tistory.com/35
//
//// bfs ������ ���� ���� �ͼ����� ������ ����. �Ӹ������� ������ ������ �ϱ� �� ���ſ� �� ����..
//// �̹����� ���������� ������ ���鼭 Ǯ� ���߿� �ٽ� ȥ�ڼ� �ѹ� �غ��°� ���� �� ����.
//// bfs�� ����� ������ ���������� �������� ���� �ƽ����� ���� ���� �����̴�.
//// ���Ϳ� ���� ���ο� ��ǵ� �˾Ҵ� vector<int> ex (int) ó�� �ڿ� ���ڸ� �����Ű�� 0���� ����� ������ int�� ���ڸ�ŭ �ʱ�ȭ �ȴ�.
//// �� Ȱ���ϸ� ���߿� �� �� ������ ����.
//// ������ �ٽ� �غ��� bfs�� �غ��ؾ� �� �� ���� ��
// 
// 
//int bfs(vector<vector<int>>& v, int start, int n) 
//{
//	//���� ��带 �ߺ��ؼ� �湮���� �ʱ� ���ؼ� dist���� ���(visit�� ����)
//	vector<int> dist(n + 1, -1); //(����+1) �� -1�� �� ä���ִ°�. (���⼭ -1�� �湮���� ���� ��带 �ǹ���)
//	//bfs
//	queue<int> q;
//	q.push(start);//���� ���
//	dist[start] = 0;//���� ����� �Ÿ��� 0
//	while (!q.empty()) 
//	{
//		int cur = q.front(); 
//		q.pop();
//
//		for (int i = 0; i < v[cur].size(); i++) {//�� ���� ����� ��� ��带 ���������� �湮
//			int nxt = v[cur][i];
//			if (dist[nxt] != -1) continue;//�̹� �湮�� ����� ����
//			dist[nxt] = dist[cur] + 1;//�湮���� ���� ����� ���� ����� �Ÿ�+1
//			q.push(nxt);
//		}
//	}
//	//start ���� ����� ��� ������ �Ÿ� ������ ����
//	int sum = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		sum += dist[i];
//	}
//	//sum�� start ����� �ɺ�����
//	return sum;
//}
//
//int main() 
//{
//	int users, relationship;
//	cin >> users >> relationship;
//
//	vector<vector<int>> v(users + 1); //ģ�� ���踦 ������ ����
//	vector<int> kevin(users + 1);//�ɺ� ������ ������ ����
//	for (int i = 0; i < relationship; i++)
//	{
//		int a, b;//a�� b�� ģ���̴�.
//		cin >> a >> b;
//		//���⼺�� ���� ������ ����� ��� �����ؾ���
//		v[a].push_back(b);//a->b ���� ����
//		v[b].push_back(a);//b->a ���� ����
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