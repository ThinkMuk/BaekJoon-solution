//#include <iostream>
//#include <queue>
//using namespace std;
//
//// BFS���������� ���� ���Ѵ�
//// ���� ������ ���Ҿ ���� ��� Ǯ����� �� �� ����.
//// �����ߴ� �ڵ�� ���ϸ鼭 �����ϴ°͵� ���� �� ����. (������ �ڵ�� �Ʒ��� ����)
// 
//queue<pair<int, int>> q;
//vector<vector<int>> tomatoBox;
//
//// ��,��,��,��
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
//        // ť�� ���� ����(���� �丶��(1))�� ������
//        int y = q.front().first;
//        int x = q.front().second;
//        q.pop();
//
//        // �ش� ��ġ�� �ֺ��� Ȯ��
//        for (int i = 0; i < 4; i++) 
//        {
//            int temp_y = y + dy[i];
//            int temp_x = x + dx[i];
//
//            // ������ ����� �ʰ�, �������� �丶��(0)���
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
//    //�׷��� ���� �Է�
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
//    //�׷����� BFS�� ���� Ž��
//    bfs();
//
//    //��¥ ��� �� ��� 
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            // �������� �丶��(0)�� ������ ���
//            if (tomatoBox[i][j] == 0) {
//                cout << -1 << "\n";
//                return 0;
//            }
//            // �丶��� �� �;��µ�, �󸶸��� �;�����?
//            if (result < tomatoBox[i][j]) {
//                result = tomatoBox[i][j];
//            }
//        }
//    }
//    cout << result - 1 << "\n";
//    return 0;
//}

////�ð��ʰ� �� Ǯ�� ________________________________________________________________________
////����: 
//// 1. ����� �� bfs�� ������� ���� (��� �����͸� �Ⱦ �ð��� ���� ����)
//// 2. ������ �ܼ��ϰ� 1�� ����ٰ� �������� �� ���Ϳ� �����͸� ��Ƶθ鼭 �ѹ��� ���� ������ ����Ʈ �� ������ �� ��.
//// (���� ���� § �ڵ�� Ƚ���� ���� ���� �ȿ� ī��Ʈ�ϸ鼭 ���� ū ���Ҹ� �������� print �ϴ� ����� ä��)

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
////�޾Ҵ� ��ǥ�� ��� 1�� �����
//void makeOne()
//{
//	int temp_y = temp.front().first;
//	int temp_x = temp.front().second;
//	temp.pop();
//	tomatoBox[temp_y][temp_x] = 1;
//}
//
////���� �Լ� (�丶�� ������ ������ �ް�, �����Լ����� ������ �ɸ��������� ī��Ʈ �� ����)
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
