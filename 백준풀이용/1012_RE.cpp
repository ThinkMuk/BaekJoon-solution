//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
// //�߸��� ��� 1.bfs �� ������ 1�� ���� (dfs �� ��� ������)
// //ť�� ����־ ������� ������ �̷��� ���� ���� �� �ִ°Ÿ� ������߳�
// //memory corruption�� ����� ������ ����?
// //https://www.acmicpc.net/board/view/74859
// //�ذ�:
// //������ cabbage (���߹�)�� trail �� ������ �ʱ�ȭ ���� �ʾƼ� �߻��ϴ� �ſ���.
// //����� ���ʹ� .clear() �Լ��δ� ��ΰ� �ʱ�ȭ ���� �ʴ´�. (capacity ���� ��� ��������)
// //���, swap�� �̿��� ���͸� �Ϻ��ϰ� clear����� �Ѵ�.
// //ex) vector<vector<int>>().swap(cabbage); �� ����ϸ� �� ���Ϳ� swap�� �� �Ϻ��ϰ� ����� ���ͷ� ���Ƴ�����.
// 
//vector<vector<int>> cabbage;
//int fieldX, fieldY;
//
//void searchWorm(int x, int y) {
//
//    // � ���߿� ������ ���� ��ġ�� ���� Queue
//    queue<pair<int, int>> temp_cabbage;
//
//    // �����¿� Ž�� �� �����, ���� �迭
//    int dx[4] = { -1, 1, 0, 0 };
//    int dy[4] = { 0, 0, -1, 1 };
//
//    temp_cabbage.push(make_pair(x, y));
//
//    // �ش� ���ߴ� �湮�� ��ġ�� ����
//    cabbage[x][y] = 0;
//
//    // temp �� �ִ� ������ ��ġ�� ���� Ž���� ������
//    while (!temp_cabbage.empty()) {
//
//        // temp �� front �� ��ġ�� ������ ��ġ ����
//        int x = temp_cabbage.front().first;
//        int y = temp_cabbage.front().second;
//
//        // temp �� front �� ��ġ�� ���� ����
//        temp_cabbage.pop();
//
//        // �ش� ���߿� �����¿�� ������ ���ߵ��� ��� Ž�� ��, adj queue �� ����
//        for (int i = 0; i < 4; ++i) {
//
//            // Ž���� ���� ��ġ
//            int search_x = x + dx[i];
//            int search_y = y + dy[i];
//
//            // �ش� ��ġ�� ���߹� ���ο� �ִ��� Ȯ��
//            if (0 <= search_x && search_x < fieldY && 0 <= search_y && search_y < fieldX) {
//
//                // �ش� ��ġ�� ���߰� �ִٸ�
//                if (cabbage[search_x][search_y] == 1) {
//
//                    // �ش� ���ߴ� �湮�� ��ġ�� ����
//                    cabbage[search_x][search_y] = 0;
//                    // temp �� �ش� ���� ��ġ�� ����
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
//        vector<vector<int>>().swap(cabbage); //���߹� �ʱ�ȭ
//		int inputTrial;
//		int worm = 0;
// 		int xCab, yCab;
//		cin >> fieldX >> fieldY >> inputTrial;
//
//		for (int j = 0; j < fieldY; j++) { //���߾��� ���߹� ����
//			vector<int> temp;
//			for (int k = 0; k < fieldX; k++)
//				temp.push_back(0);
//
//			cabbage.push_back(temp);
//		}
//
//		for (int j = 0; j < inputTrial; j++) //���߽ɱ�
//		{
//			cin >> xCab >> yCab;
//			cabbage[yCab][xCab] = 1;
//		}
//
//		for (int j = 0; j < fieldY; j++)
//		{
//			for (int k = 0; k < fieldX; k++)
//			{
//				if (cabbage[j][k] == 1) { //���߹߰�������
//                    searchWorm(j, k);
//                    worm++;
//				}
//			}
//		}
//        cout << worm << endl;
//	}
//}
//
