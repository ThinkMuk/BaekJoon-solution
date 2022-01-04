//#include <iostream>
//#include <queue>
//using namespace std;
//
//// BFS아직까지도 많이 못한다
//// 배추 문제와 더불어서 같이 계속 풀어봐야 할 것 같다.
//// 실패했던 코드와 비교하면서 복습하는것도 좋을 것 같다. (실패한 코드는 아래에 있음)
// 
//queue<pair<int, int>> q;
//vector<vector<int>> tomatoBox;
//
//// 우,하,좌,상
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0 , -1 };
//int n, m;
//int result = 0;
//
//bool isInside(int temp_y, int temp_x) 
//{
//    return (0 <= temp_x && 0 <= temp_y && temp_x < m && temp_y < n);
//}
//
//void bfs(void) 
//{
//    while (!q.empty()) 
//    {
//        // 큐의 현재 원소(익은 토마토(1))를 꺼내기
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//
//        // 해당 위치의 주변을 확인
//        for (int i = 0; i < 4; i++) 
//        {
//            int temp_y = y + dy[i];
//            int temp_x = x + dx[i];
//
//            // 지도를 벗어나지 않고, 익지않은 토마토(0)라면
//            if (isInside(temp_y, temp_x) == 1 && tomatoBox[temp_y][temp_x] == 0) {
//                tomatoBox[temp_y][temp_x] = tomatoBox[y][x] + 1;
//                q.push({ temp_y, temp_x });
//            }
//        }
//    }
//}
//
//int main() 
//{
//    ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//    cin >> m >> n;
//
//    //그래프 정보 입력
//	for (int i = 0; i < n; i++)
//	{
//		vector<int> tempVec;
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			cin >> temp;
//            if (temp == 1)
//                q.push(make_pair(i, j));
//
//			tempVec.push_back(temp);
//		}
//		tomatoBox.push_back(tempVec);
//	}
//
//    //그래프를 BFS를 통해 탐색
//    bfs();
//
//    //날짜 계산 및 출력 
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            // 익지않은 토마토(0)가 존재할 경우
//            if (tomatoBox[i][j] == 0) {
//                cout << -1 << "\n";
//                return 0;
//            }
//            // 토마토는 다 익었는데, 얼마만에 익었는지?
//            if (result < tomatoBox[i][j]) {
//                result = tomatoBox[i][j];
//            }
//        }
//    }
//    cout << result - 1 << "\n";
//    return 0;
//}

////시간초과 뜬 풀이 ________________________________________________________________________
////이유: 
//// 1. 제대로 된 bfs를 사용하지 않음 (계속 데이터를 훑어서 시간을 많이 먹음)
//// 2. 모든것을 단순하게 1로 만든다고만 생각했지 그 벡터에 데이터를 담아두면서 한번에 걸쳐 정답을 프린트 할 생각을 못 함.
//// (따라서 새로 짠 코드는 횟수를 직접 벡터 안에 카운트하면서 가장 큰 원소를 정답으로 print 하는 방식을 채용)

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<vector<int>> tomatoBox;
//queue <pair<int, int>> temp;
//int x, y;
//
//void madeTomato(int cordX, int cordY)
//{
//	int Xcoordinate[4] = { 1,-1,0,0 };
//	int Ycoordinate[4] = { 0,0,-1,1 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		int temp_x = cordX + Xcoordinate[i];
//		int temp_y = cordY + Ycoordinate[i];
//
//		if (0 <= temp_y && temp_y < y && 0 <= temp_x && temp_x < x)
//		{
//			if (tomatoBox[temp_y][temp_x] == 0) {
//				temp.push(make_pair(temp_y, temp_x));
//			}
//		}
//	}
//}
//
//bool checkComplete(int cordX,int cordY)
//{
//	int Xcoordinate[4] = { 1,-1,0,0 };
//	int Ycoordinate[4] = { 0,0,-1,1 };
//
//	for (int i = 0; i < 4; i++)
//	{
//		int temp_x = cordX + Xcoordinate[i];
//		int temp_y = cordY + Ycoordinate[i];
//
//		if (0 <= temp_y && temp_y < y && 0 <= temp_x && temp_x < x)
//		{
//			if (tomatoBox[temp_y][temp_x] != -1) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
////받았던 좌표들 모두 1로 만들기
//void makeOne()
//{
//	int temp_y = temp.front().first;
//	int temp_x = temp.front().second;
//	temp.pop();
//	tomatoBox[temp_y][temp_x] = 1;
//}
//
////매인 함수 (토마토 상자의 정보를 받고, 매인함수에서 몇일이 걸리는지까지 카운트 할 예정)
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int countDay = 0;
//	bool complete = true;
//	bool allRipe = false;
//	cin >> x >> y;
//
//	for (int i = 0; i < y; i++)
//	{
//		vector<int> tempVec;
//		for (int j = 0; j < x; j++)
//		{
//			int temp;
//			cin >> temp;
//			tempVec.push_back(temp);
//		}
//		tomatoBox.push_back(tempVec);
//	}
//
//	while (!allRipe)
//	{
//		allRipe = true;
//		countDay++;
//		for (int i = 0; i < y; i++)
//		{
//			for (int j = 0; j < x; j++)
//			{
//				if (tomatoBox[i][j] == 0) {
//					allRipe = false;
//					if (checkComplete(j, i) == false) {
//						complete = false;
//						break;
//					}
//				}
//
//				if (tomatoBox[i][j] == 1) {
//					madeTomato(j, i);
//					if (checkComplete(j,i) == false) {
//						complete = false;
//						break;
//					}
//				}
//			}
//			if (complete == false)
//				break;
//		}
//		if (complete == false)
//			break;
//
//		while (!temp.empty())
//			makeOne();
//	}
//	if (complete == false)
//		cout << -1 << "\n";
//	else
//	{
//		cout << countDay - 1 << "\n";
//	}
//
//	return 0;
//}
