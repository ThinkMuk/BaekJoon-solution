//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;

//"�����佺�׳׽��� ü"�� ���� ���ص��� �ʿ���

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



//int main() //�� ��Ĵ�� �ϸ� �ð��ʰ��Ӹ� �ƴ϶� �Ϻ��ϰ� ���Ÿ� ���� ����
//{
//	//2,3,5 �� �����ϰ� �������� 2�� 3, �׸��� 5�� �������� �� �� ���´ٸ� �Ҽ�
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