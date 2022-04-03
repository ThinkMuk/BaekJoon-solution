//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <limits>
//using namespace std;
//
//
//vector<int> coutTmp;
////문제점: 상어의 크기가 올라갔음에도 불구하고 작은 물고기들을 우선순위에 둬서 먹는것이 문제
//// 상어의 크기가 올라가면 생선도 작으면 생선 크기의 상관없이 가까운 순대로 먹어야 함
//// 공부를 더 하고 다시 풀어보는게 좋을 것 같다.
//
//int N;
//vector<vector<int>> fishBoard;
//vector <vector<pair<int, int>>> fishCord(9); //0번이 1번 물고기들 저장소임
//pair<int, int> cordMove = make_pair(0, 0);
//pair<int, int> sharkCord;
//bool callShark = false;
//int sharkSize = 2;
//int sharkStack = 0;
//int totalTime = 0;
//vector<pair<int, pair<int, int>>> saveDistance;
//
//int dy[4] = { 0,1,0,-1 };
//int dx[4] = { -1,0,1,0 };
//
//void sharkStackCheck() //상어 스텍을 늘리면서, 상어의 성장크기 갱신
//{
//	sharkStack++;
//	if (sharkStack == sharkSize) {
//		sharkStack = 0;
//		sharkSize++;
//	}
//}
//
////나중에 삭제해야 할 것
//void print(vector<vector<int>> temp) {
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << temp[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}
//
////** 전체가 0이 되면 종료시키도록 하기 **//
//void BFS(int y, int x, int i, int j)
//{
//	vector<vector<int>> tempShark;
//	queue<pair<int, int>> q;
//
//	for (int i = 0; i < N; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j < N; j++)
//		{
//			temp.push_back(-1);
//		}
//		tempShark.push_back(temp);
//	}
//
//	q.push(make_pair(y, x));
//	tempShark[y][x] = 0;
//
//	while (!q.empty())
//	{
//		auto cur = q.front();
//		q.pop();
//
//		print(tempShark);
//		cout << "\n";
//
//		for (int i = 0; i < 4; i++) //카운트가 4번 다 하면 count++
//		{
//			int tmpY = cur.first + dy[i];
//			int tmpX = cur.second + dx[i];
//
//			if (0 <= tmpY && tmpY < N && 0 <= tmpX && tmpX < N) {//tmpX, Y가 범위 내에 존재하는지
//				if (tempShark[tmpY][tmpX] == -1) {//그 곳을 방문 해 본 곳인지 check (-1이 미방문)
//					if (fishBoard[tmpY][tmpX] == 0) { //만약 그곳이 빈 칸 일시
//						q.push(make_pair(tmpY, tmpX));
//						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
//					}
//					else if (fishBoard[tmpY][tmpX] == sharkSize) { //상어와 물고기가 사이즈가 같을 시
//						q.push(make_pair(tmpY, tmpX));
//						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
//					}
//					else if (fishBoard[tmpY][tmpX] < sharkSize) { //만약 상어가 클 시
//						q.push(make_pair(tmpY, tmpX));
//						tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
//					}
//					else { //상어가 못 지나가는 곳일 시 (-2는 못 지나가는 곳)
//						tempShark[tmpY][tmpX] = -2;
//						continue;
//					}
//				}
//			}
//		}
//	}
//
//	int tmpTime = tempShark[fishCord[i][j].first][fishCord[i][j].second];
//	if (tmpTime == -2 || tmpTime == -1) {//좌표가 -2인지 이동 횟수인지 확인
//		saveDistance.push_back(make_pair(INT_MAX, make_pair(fishCord[i][j].first, fishCord[i][j].second)));
//	}
//	else if (fishBoard[fishCord[i][j].first][fishCord[i][j].second] >= sharkSize) { //만약 생선과 상어가 stack이 똑같을 시
//		saveDistance.push_back(make_pair(INT_MAX, make_pair(fishCord[i][j].first, fishCord[i][j].second)));
//	}
//	else {
//		saveDistance.push_back(make_pair(tmpTime, make_pair(fishCord[i][j].first, fishCord[i][j].second)));
//	}
//}
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		vector<int> tempArr;
//		for (int j = 0; j < N; j++)
//		{
//			int temp;
//			cin >> temp;
//
//			if (temp == 9) { //상어
//				sharkCord = make_pair(i, j);
//				tempArr.push_back(0);
//			}
//			else if (temp == 0) {
//				tempArr.push_back(temp); 
//				continue;
//			}//빈 칸
//			else { //물고기
//				tempArr.push_back(temp);
//				fishCord[temp - 1].push_back(make_pair(i, j));
//			}
//		}
//		fishBoard.push_back(tempArr);
//	}
//
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (fishCord[i].empty())
//			continue;
//		else
//		{
//			while (!fishCord[i].empty())
//			{
//				for (int j = 0; j < fishCord[i].size(); j++)
//				{
//					BFS(sharkCord.first, sharkCord.second, i, j);
//				}
//				//여기서 걸린 시간을 모두 계산
//				sort(saveDistance.begin(), saveDistance.end());
//
//				if (saveDistance[0].first != INT_MAX) {
//					totalTime += saveDistance[0].first;
//					sharkStackCheck();
//
//					cout << "*******************************************************************" << totalTime << "\n";
//					//시간 바뀌는거 확인용 vector
//					coutTmp.push_back(totalTime);
//
//					sharkCord = make_pair(saveDistance[0].second.first, saveDistance[0].second.second);
//					fishBoard[saveDistance[0].second.first][saveDistance[0].second.second] = 0; //
//					auto it = find(fishCord[i].begin(), fishCord[i].end(), saveDistance[0].second);
//					fishCord[i].erase(fishCord[i].begin() + (it - fishCord[i].begin()));//
//				}
//				else {
//					break;
//				}
//
//				//다시 벡터 초기화 후 반복
//				saveDistance.clear();
//				vector<pair<int, pair<int, int>>>().swap(saveDistance);
//			}
//		}
//	}
//
//	cout << totalTime << "\n";
//
//	for (int i = 0; i < coutTmp.size(); i++)
//	{
//		cout << coutTmp[i] << " ";
//	}
//}
//
//
//////** 여기가 문제임 **//
//////목표물 좌표 받기
////int tmpTime = tempShark[fishCord[cordMove.first][cordMove.second].first][fishCord[cordMove.first][cordMove.second].second];
////if (tmpTime == -2) {//좌표가 -2인지 이동 횟수인지 확인
////	cout << totalTime << "\n";
////	callShark = true;
////}
////else { //이동 횟수이면 총 이동횟수에 추가
////	totalTime += tmpTime;
////	sharkSize += tmpSize;
////	sharkStack += tmpStack;
////	sharkCord = make_pair(fishCord[cordMove.first][cordMove.second].first, fishCord[cordMove.first][cordMove.second].second);
////}
//
////else if (fishBoard[tmpY][tmpX] < sharkSize) { //만약 상어가 클 시
////	q.push(make_pair(tmpY, tmpX));
////	fishBoard[tmpY][tmpX] = 0; //그 자리는 이제 빈 칸
////	tempShark[tmpY][tmpX] = tempShark[cur.first][cur.second] + 1;
////}
//
////for (int j = 0; j < saveDistance.size(); j++)
////{
////	if (saveDistance[j].first != INT_MAX) {
////		sharkStackCheck();
////		totalTime += saveDistance[j].first;
////		sharkCord = make_pair(saveDistance[j].second.first, saveDistance[j].second.second);
////	}
////	else {//상어가 접근할 수 없는 곳이 생겼을 때 (INT_MAX가 나왔을 때)
////		if (saveDistance[0].first == INT_MAX) { //1마리밖에 없어 무조건 엄마상어를 불러야 할 때
////			callShark = true;
////			break;
////		}
////		else { //그래도 그동안 먹어온게 있어서 시도는 해볼 수 있을때
////			sharkCord = make_pair(saveDistance[j - 1].second.first, saveDistance[j - 1].second.second);
////			break;
////		}
////	}
////}