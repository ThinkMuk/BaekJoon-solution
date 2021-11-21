//#include <iostream>
//#include <vector>
//using namespace std;
//
// 오늘 문제는 머릿속에 떠올리기는 쉬운 구조였으나, 누적합 알고리즘을 모르는 상태라면 시간초과로 고생하는 문제였다.
// 
// 누적합이라는 것은 1~3의 합을 알고 싶으면 temp[3]-temp[0]을 해서 (여기서 0은 처음 범위-1을 해야 한다) 구하는 식의 문제다.
// 여기서 배열상에서는 0은 (0+0) 1은 (0+1) 2는 (0+1+2) 이기 때문에 예시로 배열 2~4의 합을 알고 싶을때는 4까지 합한 배열 4(0+1+2+3+4)와 1을 (0+1) 
// 빼게 되면 2~4의 합이 나오는 방식이다.
// 
// 알고나면 굉장히 쉬운 문제인듯 하다
// 나중에 합에 관련된 문제가 튀어나올때는 이 방식을 떠올리고 풀면 훨씬 수월한 계산이 될 것 같다.
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int arraySize;
//	int trial;
//
//	cin >> arraySize >> trial;
//
//	vector<int> vectorArray(arraySize + 1, 0);
//
//	for (int i = 1; i <= arraySize; i++)
//	{
//		int temp;
//		cin >> temp;
//		
//		vectorArray[i] = vectorArray[i - 1] + temp;
//	}
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//
//		if (temp1 == 0)
//			cout << vectorArray[temp2] << "\n";
//		else
//			cout << vectorArray[temp2] - vectorArray[temp1 - 1] << "\n";
//	}
//
//	return 0;
//}

//아래 알고리즘도 맞는 정답이긴 하지만, 누적합 알고리즘에 적합하지 않다. (시간이 더 많이 소요되어 시간초과가 나게 된다.)
//for (int i = 0; i < arraySize; i++)
//{
//	int temp;
//	cin >> temp;
//	vectorArray.push_back(temp);
//}

//for (int i = 0; i < trial; i++)
//{
//	int temp1, temp2;
//	int answer = 0;
//	cin >> temp1 >> temp2;

//	for (int j = temp1 - 1; j < temp2; j++)
//	{
//		answer += vectorArray[j];
//	}
//	cout << answer << "\n";
//}