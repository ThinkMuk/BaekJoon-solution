//#include <iostream>
//#include <vector>
//using namespace std;
//
// �̹� ������ ������ Z���� ��� �������� ���� Ǯ �� �־���.
// �Ƹ� �̹� ������ ����Լ��� ���������� ����� �� ����.
// �ٸ� Z������ �ڵ带 �����ϰ� �ؼ� �̷и� ���Ŷ� ���� ó�� �غ��°� ������
// ó���� ��ͷ� �ϴµ� �̻��ϰ� �߱淡 ������ ���� �ߴ��� for������ �Լ����� �� �´��� Ž���Ҷ�
// for�� ������ �߸� Ž���صּ� �׷�����.
// ex) for(int i=y; i < y; i++) �� �ص���;;
// ������ ���ؿ��� �ð��ʰ� �ȳ��� �ѹ濡 Ǯ� ����� ����.
//
//vector<vector<int>> paper;
//int colorCount = 0;
//int emptyCount = 0;
//
//void foldPaper(int y, int x, int size)
//{
//	int tempNum = NULL;
//	bool match = true;
//	//��ü ������ ������ ĥ���������� ī��Ʈ �ϳ�.
//	//�Ǵ� ��ü ������ ������ ĥ�������� ������ ī��Ʈ �ϳ�.
//	for (int i = y; i < y + size; i++)
//	{
//		for (int j = x; j < x + size; j++)
//		{
//			if (i==y && j==x) {
//				tempNum = paper[i][j];
//			}
//			else if (tempNum != paper[i][j]) {
//				match = false;
//				break;
//			}
//		}
//		if (match == false)
//			break;
//	}
//
//	if (match == true && tempNum == 0) {
//		emptyCount++;
//	}
//	else if (match == true && tempNum == 1) {
//		colorCount++;
//	}
//	else {
//		//2��и�
//		foldPaper(y, x, size / 2);
//		//1��и�
//		foldPaper(y, x + size / 2, size / 2);
//		//3��и�
//		foldPaper(y + size / 2, x, size / 2);
//		//4��и�
//		foldPaper(y + size / 2, x + size / 2, size / 2);
//	}
//}
//
//int main()
//{
//	int paperSize;
//	cin >> paperSize;
//
//	for (int i = 0; i < paperSize; i++)
//	{
//		vector<int> tempPaper;
//		for (int j = 0; j < paperSize; j++)
//		{
//			int temp;
//			cin >> temp;
//			tempPaper.push_back(temp);
//		}
//		paper.push_back(tempPaper);
//	}
//
//	foldPaper(0, 0, paperSize);
//
//	cout << emptyCount << "\n" << colorCount;
//}