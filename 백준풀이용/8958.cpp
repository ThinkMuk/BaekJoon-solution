//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int trial;
//	cin >> trial;
//	for (int c = 0; c < trial; c++)
//	{
//		string OX;
//		int score = 0;
//		cin >> OX;
//
//		for (int i = 0; i < OX.size(); i++)
//		{
//			if (OX[i] == 'X')
//			{
//				continue;
//			}
//			else //맞았을시
//			{
//				int temp = i;
//				int addScore = 0;
//				if (i == 0) //첫번째 숫자일시
//				{
//					score++;
//					continue;
//				}
//				else 
//				{
//					while (1)
//					{
//						if (OX[temp] == 'X' || temp == 0)
//							break;
//						else
//						{
//							addScore++;
//							temp--;
//						}
//					}
//					if (temp == 0)
//					{
//						if (OX[temp] == 'O')
//							addScore++;
//					}
//					score += addScore;
//				}
//			}
//		}
//		cout << score << endl;
//	}
//}