//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
// //잘못한 방법 1.bfs 쓸 생각을 1도 안함 (dfs 도 사용 가능함)
// //큐에 집어넣어서 순서대로 돌리면 이렇게 쉽게 구할 수 있는거를 개고생했네
// //memory corruption이 생기는 이유는 뭘까?
// //https://www.acmicpc.net/board/view/74859
// //해결:
// //원인은 cabbage (배추밭)을 trail 할 때마다 초기화 하지 않아서 발생하는 거였음.
// //참고로 벡터는 .clear() 함수로는 모두가 초기화 되지 않는다. (capacity 값이 계속 남아있음)
// //고로, swap을 이용해 벡터를 완벽하게 clear해줘야 한다.
// //ex) vector<vector<int>>().swap(cabbage); 를 사용하면 빈 벡터와 swap을 해 완벽하게 깔끔한 벡터로 갈아끼워짐.
// 
//vector<vector<int>> cabbage;
//int fieldX, fieldY;
//
//void searchWorm(int x, int y) {
//
//    // 어떤 배추와 인접한 배추 위치를 담을 Queue
//    queue<pair<int, int>> temp_cabbage;
//
//    // 상하좌우 탐색 시 사용할, 방향 배열
//    int dx[4] = { -1, 1, 0, 0 };
//    int dy[4] = { 0, 0, -1, 1 };
//
//    temp_cabbage.push(make_pair(x, y));
//
//    // 해당 배추는 방문한 위치로 수정
//    cabbage[x][y] = 0;
//
//    // temp 에 있는 배추의 위치를 전부 탐색할 때까지
//    while (!temp_cabbage.empty()) {
//
//        // temp 의 front 에 위치한 배추의 위치 저장
//        int x = temp_cabbage.front().first;
//        int y = temp_cabbage.front().second;
//
//        // temp 의 front 에 위치한 배추 제거
//        temp_cabbage.pop();
//
//        // 해당 배추와 상하좌우로 인접한 배추들을 모두 탐색 후, adj queue 에 삽입
//        for (int i = 0; i < 4; ++i) {
//
//            // 탐색할 배추 위치
//            int search_x = x + dx[i];
//            int search_y = y + dy[i];
//
//            // 해당 위치가 배추밭 내부에 있는지 확인
//            if (0 <= search_x && search_x < fieldY && 0 <= search_y && search_y < fieldX) {
//
//                // 해당 위치에 배추가 있다면
//                if (cabbage[search_x][search_y] == 1) {
//
//                    // 해당 배추는 방문한 위치로 수정
//                    cabbage[search_x][search_y] = 0;
//                    // temp 에 해당 배추 위치를 삽입
//                    temp_cabbage.push(make_pair(search_x, search_y));
//                }
//            }
//        }
//    }
//}
//
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//        cabbage.clear();
//        vector<vector<int>>().swap(cabbage); //배추밭 초기화
//		int inputTrial;
//		int worm = 0;
// 		int xCab, yCab;
//		cin >> fieldX >> fieldY >> inputTrial;
//
//		for (int j = 0; j < fieldY; j++) { //배추없는 배추밭 생성
//			vector<int> temp;
//			for (int k = 0; k < fieldX; k++)
//				temp.push_back(0);
//
//			cabbage.push_back(temp);
//		}
//
//		for (int j = 0; j < inputTrial; j++) //배추심기
//		{
//			cin >> xCab >> yCab;
//			cabbage[yCab][xCab] = 1;
//		}
//
//		for (int j = 0; j < fieldY; j++)
//		{
//			for (int k = 0; k < fieldX; k++)
//			{
//				if (cabbage[j][k] == 1) { //배추발견했을때
//                    searchWorm(j, k);
//                    worm++;
//				}
//			}
//		}
//        cout << worm << endl;
//	}
//}
//
