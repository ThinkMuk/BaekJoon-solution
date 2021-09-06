//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;

//"에라토스테네스의 체"에 대한 이해도가 필요함

//bool answer[1000001];
//int main() 
//{
//
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; i++) 
//	{
//		answer[i] = true;
//	}
//
//	answer[1] = false;
//
//	for (int i = 2; i <= sqrt(b); i++) 
//	{
//		for (int j = i + i; j <= b; j += i) 
//		{
//			answer[j] = false;
//		}
//	}
//
//	for (int i = a; i <= b; i++) 
//	{
//		if (answer[i])
//			cout << i << "\n";
//	}
//}



//int main() //이 방식대로 하면 시간초과뿐만 아니라 완벽하게 제거를 하지 못함
//{
//	//2,3,5 를 제외하고 나머지가 2랑 3, 그리고 5를 나눴을때 둘 다 남는다면 소수
//	int a, b;
//	vector<int> answer;
//	cin >> a >> b;
//
//	for (int i = a; i <= b; i++)
//	{
//		if (i == 1)
//			continue;
//		else if (i == 2)
//			answer.push_back(i);
//		else if (i == 3)
//			answer.push_back(i);
//		else if (i == 5)
//			answer.push_back(i);
//		else if (i == 7)
//			answer.push_back(i);
//		else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
//			answer.push_back(i);
//	}
//
//	for (int i = 0; i < answer.size(); i++)
//	{
//		cout << answer[i] << "\n";
//	}
//}