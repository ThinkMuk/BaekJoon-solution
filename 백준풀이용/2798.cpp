//#include <iostream>
//#include <vector>
//using namespace std;
//
////3�� �����߿� ���� �ߺ����� �ʰ� �����°� ����Ʈ
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
//		for (int j = i+1; j < trial-1; j++) // �ߺ��� �ȵǱ� ���� j�� i+1�� �������༭ ���÷� �̵��� �� �ְ� ���ش�.
//		{
//			for (int k = j+1; k < trial; k++) //�ߺ��� �ȵǱ� ���� k�� j+1�� �Ű��ְ�
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