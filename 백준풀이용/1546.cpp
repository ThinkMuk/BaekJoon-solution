//1546번___________________________________________________________________
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
//	cout << fixed; //이 의미는 소수점을 고정시켜 표현한다는 뜻
//	cout.precision(2); // 2자리수까지 표현을 하겠다는 뜻
//	cout << total / N << endl; // 즉 여기서는 소수점 2자리를 표현하겟다는 뜻이 된다
//}