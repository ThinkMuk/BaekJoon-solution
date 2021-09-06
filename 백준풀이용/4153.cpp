//#include <iostream>
//#include <math.h>
//using namespace std;
//
////쉽당
////<math.h> 라이브러리를 사용하면 sqrt랑 pow를 쓸 수 있담
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	while (1)
//	{
//		if (a == 0 && b == 0 && c == 0)
//			break;
//		else
//		{
//			if (c >= a && c >= b)
//			{
//				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
//					cout << "right" << "\n";
//				else
//					cout << "wrong\n";
//			}
//			else if (b >= a && b >= c)
//			{
//				if (pow(a, 2) + pow(c, 2) == pow(b, 2))
//					cout << "right" << "\n";
//				else
//					cout << "wrong\n";
//			}
//			else
//			{
//				if (pow(b, 2) + pow(c, 2) == pow(a, 2))
//					cout << "right" << "\n";
//				else
//					cout << "wrong\n";
//			}
//
//			cin >> a >> b >> c;
//		}
//	}
//}