//#include <iostream>
//using namespace std;
//
// 이번 코딩도 그렇게 마음에 들진 않네
// room을 출력하는 위치, node를 더하는 위치가 정답을 좌우해서 신중하게 생각하고 해야함
// 브론즈 문제인데 이렇게 해맨게 바보같네 허헣
// 
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int y, x, goal;
//		int node = 1;
//		bool escape = false;
//		cin >> y >> x >> goal;
//
//		for (int j = 0; j < x; j++)
//		{
//			int room = 100;
//			room += (j + 1);
//
//			if (node == goal)
//			{
//				cout << room << "\n";
//				break;
//			}
//
//			for (int k = 0; k < y-1; k++)
//			{
//				room += 100;
//				node++;
//
//				if (node == goal)
//				{
//					cout << room << "\n";
//					break;
//				}
//			}
//			
//			node++;
//		}
//	}
//}