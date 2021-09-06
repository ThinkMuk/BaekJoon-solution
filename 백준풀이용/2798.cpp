//#include <iostream>
//#include <vector>
//using namespace std;
//
////3중 포문중에 서로 중복되지 않게 돌리는게 포인트
//
//int main()
//{
//	int trial;
//	int targetNum;
//	vector<int> numArray;
//	int answer = 0;
//	cin >> trial >> targetNum;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		numArray.push_back(temp);
//	}
//
//	for (int i = 0; i < trial-2; i++)
//	{
//		for (int j = i+1; j < trial-1; j++) // 중복이 안되기 위해 j는 i+1로 설정해줘서 수시로 이동할 수 있게 해준다.
//		{
//			for (int k = j+1; k < trial; k++) //중복이 안되기 위해 k는 j+1로 옮겨주고
//			{
//				int temp = numArray[i] + numArray[j] + numArray[k];
//				if (temp <= targetNum && answer < temp)
//				{
//					answer = temp;
//				}
//			}
//		}
//	}
//	cout << answer;
//}