//#include <iostream>
//#include <vector>
//using namespace std;
//
// ���� ������ �Ӹ��ӿ� ���ø���� ���� ����������, ������ �˰����� �𸣴� ���¶�� �ð��ʰ��� ����ϴ� ��������.
// 
// �������̶�� ���� 1~3�� ���� �˰� ������ temp[3]-temp[0]�� �ؼ� (���⼭ 0�� ó�� ����-1�� �ؾ� �Ѵ�) ���ϴ� ���� ������.
// ���⼭ �迭�󿡼��� 0�� (0+0) 1�� (0+1) 2�� (0+1+2) �̱� ������ ���÷� �迭 2~4�� ���� �˰� �������� 4���� ���� �迭 4(0+1+2+3+4)�� 1�� (0+1) 
// ���� �Ǹ� 2~4�� ���� ������ ����̴�.
// 
// �˰��� ������ ���� �����ε� �ϴ�
// ���߿� �տ� ���õ� ������ Ƣ��ö��� �� ����� ���ø��� Ǯ�� �ξ� ������ ����� �� �� ����.
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

//�Ʒ� �˰��� �´� �����̱� ������, ������ �˰��� �������� �ʴ�. (�ð��� �� ���� �ҿ�Ǿ� �ð��ʰ��� ���� �ȴ�.)
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