//1546��___________________________________________________________________
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	cin >> N;
//
//	if (N > 1000)
//		exit(0);
//
//	double score[1000];
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> score[i];
//	}
//
//	int max{ 0 };
//
//	for (int i = 0; i < N; i++)
//	{
//		if (score[i] > max)
//			max = score[i];
//	}
//
//
//	for (int i = 0; i < N; i++)
//		score[i] = score[i] / max * 100;
//
//	double total{ 0 };
//	for (int i = 0; i < N; i++)
//		total += score[i];
//
//	cout << fixed; //�� �ǹ̴� �Ҽ����� �������� ǥ���Ѵٴ� ��
//	cout.precision(2); // 2�ڸ������� ǥ���� �ϰڴٴ� ��
//	cout << total / N << endl; // �� ���⼭�� �Ҽ��� 2�ڸ��� ǥ���ϰٴٴ� ���� �ȴ�
//}