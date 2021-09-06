//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int hour;
//	int min;
//
//	cin >> hour >> min;
//
//	if (hour == 0)
//	{
//		if (min - 45 < 0)
//		{
//			hour =23;
//			min = min + 60 - 45;
//		}
//		else
//		{
//			min = min - 45;
//		}
//	}
//	else
//	{
//		if (min - 45 < 0)
//		{
//			hour -= 1;
//			min = min + 60 - 45;
//		}
//		else
//		{
//			min = min - 45;
//		}
//	}
//	cout << hour << " " << min;
//}