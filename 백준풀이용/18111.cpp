//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <climits>
//using namespace std;
//
////������ ����Ʈ:
////https://retn0.tistory.com/20
//// 
////������ ó������ "��� �迭�� �y��� �ð��� ���� ���� ���ϱ�"�� ������,
////���̵��� �ذ��� �Լ��� ���� "���� ���߿� ���� ���� ������ ������ ���� ������ ������ ����غ��� ���ϱ�"��
////�ϸ� �ð��ʰ��� ���� �ʴ´�.
////... �̰� ��¥ �� �߿� ��� ����� �޸𸮰� �� ���� ������ �غ����� ó������ ���� �ȳ��ͼ� Ʋ�� ���� ���о�����,
////�� Ǯ�� �� �� �����غ��� 256�� �̻��� ����Ŭ�� ���� �� ����, �̰� �� �ð��� �� ���� ����...
////���� �־��� ���� �ʺ���
//
//int y, x, brick;
//vector<vector<int>> blockArray;
//
//int flatTime (int height)
//{
//	int eraseBlock = 0;
//	int addBlock = 0;
//
//	// ���� ���̺��� ���ų� ���� ����� ������ ����
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			if (blockArray[i][j] > height) eraseBlock += blockArray[i][j] - height;
//			else if (blockArray[i][j] < height) addBlock += height - blockArray[i][j];
//		}
//	}
//
//	// ��� ��ȭ�� ���� ���
//	if (eraseBlock == 0 && addBlock == 0) {
//		return 0;
//	}
//
//	// ����� ������ ��� �Ұ���
//	if (addBlock > eraseBlock + brick) {
//		return -1;
//	}
//
//	// �ɸ��� �ð� ���
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


//** ������ �ٲٱ� �� �ð��ʰ��� �� Ǯ���̴�. (���� ������ ���� ������)
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
//			int node = array[i][j]; //�迭�� �� ���鼭 �ϳ��� �ð� �󸶳� �ɸ����� ���
//			bool block = true;
//			int time = 0;
//			int tempBrick = brick;
//
//			//��� �迭 ���鼭 �ð� �󸶳� �ɸ����� ����ϴ� �Լ�
//			for (int k = 0; k < y; k++) {
//				for (int l = 0; l < x; l++) {
//					if (node == array[k][l]) {
//						continue;
//					}
//					else if (node < array[k][l]) { //������ ���ں��� ���� ������ (�����ؾ� �� ��) +2
//						int eraseBlock = array[k][l] - node;
//						time += (eraseBlock * 2);
//					}
//					else { //������ ���ں��� ���� ���� �� (���ؾ� �� ��) +1
//						int addBlock = node - array[k][l];
//						tempBrick -= addBlock;
//						//���� ���� �����ϸ�
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
