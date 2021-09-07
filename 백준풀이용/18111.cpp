//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//using namespace std;
//
////참고한 사이트:
////https://retn0.tistory.com/20
//// 
////관점을 처음에는 "모든 배열을 흝어가며 시간을 구해 서로 비교하기"로 했지만,
////보이듯이 해결한 함수와 같이 "받은 블럭중에 가장 낮은 숫자의 블럭부터 높은 숫자의 블럭까지 계산해보며 비교하기"로
////하면 시간초과가 나질 않는다.
////... 이건 진짜 둘 중에 어떤걸 써야지 메모리가 덜 들어갈까 생각을 해봤을때 처음에는 답이 안나와서 틀린 답을 내밀었지만,
////다 풀고 난 뒤 생각해보니 256개 이상의 사이클을 도는 것 보다, 이게 더 시간이 덜 들어갈것 같다...
////한참 멀었다 완전 초보네
//
//int y, x, brick;
//vector<vector<int>> blockArray;
//
//int flatTime (int height)
//{
//	int eraseBlock = 0;
//	int addBlock = 0;
//
//	// 현재 높이보다 높거나 낮은 블록의 개수를 구함
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			if (blockArray[i][j] > height) eraseBlock += blockArray[i][j] - height;
//			else if (blockArray[i][j] < height) addBlock += height - blockArray[i][j];
//		}
//	}
//
//	// 블록 변화가 없을 경우
//	if (eraseBlock == 0 && addBlock == 0) {
//		return 0;
//	}
//
//	// 블록이 부족할 경우 불가능
//	if (addBlock > eraseBlock + brick) {
//		return -1;
//	}
//
//	// 걸리는 시간 계산
//	return eraseBlock * 2 + addBlock;
//}
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int maxHeight = 0, minHeight = INT_MAX;
//	int answer = INT_MAX, answerNode = 0;
//	cin >> y >> x >> brick;
//
//	for (int i = 0; i < y; i++) {
//		vector<int> temp;
//		for (int j = 0; j < x; j++) {
//			int temp1;
//			cin >> temp1;
//			temp.push_back(temp1);
//
//			maxHeight = max(maxHeight, temp1);
//			minHeight = min(minHeight, temp1);
//		}
//		blockArray.push_back(temp);
//	}
//	
//	for (int i = minHeight; i <= maxHeight; i++) {
//		int elapsedTime = flatTime(i);
//
//		if (elapsedTime >= 0 && answer >= elapsedTime) {
//			answer = elapsedTime;
//			answerNode = i;
//		}
//	}
//
//	cout << answer << " " << answerNode;
//}


//** 관점을 바꾸기 전 시간초과가 난 풀이이다. (나름 정답은 나옴 ㅋㅋㅋ)
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<vector<int>> array;
//	int y, x, brick;
//	cin >> y >> x >> brick;
//
//	for (int i = 0; i < y; i++) {
//		vector<int> temp;
//		for (int j = 0; j < x; j++) {
//			int temp1;
//			cin >> temp1;
//			temp.push_back(temp1);
//		}
//		array.push_back(temp);
//	}
//
//	int answer = 0;
//	int answerNode;
//
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			int node = array[i][j]; //배열을 쭉 돌면서 하나씩 시간 얼마나 걸리는지 계산
//			bool block = true;
//			int time = 0;
//			int tempBrick = brick;
//
//			//모든 배열 돌면서 시간 얼마나 걸리는지 계산하는 함수
//			for (int k = 0; k < y; k++) {
//				for (int l = 0; l < x; l++) {
//					if (node == array[k][l]) {
//						continue;
//					}
//					else if (node < array[k][l]) { //기준인 숫자보다 블럭이 많을시 (차감해야 할 때) +2
//						int eraseBlock = array[k][l] - node;
//						time += (eraseBlock * 2);
//					}
//					else { //기준인 숫자보다 블럭이 적을 시 (더해야 할 때) +1
//						int addBlock = node - array[k][l];
//						tempBrick -= addBlock;
//						//만약 블럭이 부족하면
//						if (tempBrick < 0) {
//							block = false;
//							break;
//						}
//						else {
//							time += addBlock;
//						}
//					}
//				}
//				if (block == false)
//					break;
//			}
//			if (block == true)
//			{
//				if (answer == 0)
//				{
//					answer = time;
//					answerNode = node;
//				}
//				else {
//					if (answer > time)
//					{
//						answer = time;
//						answerNode = node;
//					}
//				}
//			}
//		}
//
//	}
//	cout << answer << " " << answerNode;
//}
