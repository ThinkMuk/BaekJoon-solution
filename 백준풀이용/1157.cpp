////1157��___________________________________________________________________
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{ //�빮�� �ҹ��ڵ� �����ؾ���
//	string input{ NULL };
//	int i{ 0 };
//
//	//�����ϴ� �ڽ�
//	char box[26] = {NULL};
//	int AlphabetCount[26] = { 0, };
//	//��ǲ�� �Է�
//	cin >> input;
//
//	for (int c = 0; c < input.size(); c++)
//	{
//		input[c] = toupper(input[c]);
//	}
//
//
//	while (true)
//	{
//		if (input[i] == NULL) { break; } //���̻� �����Ұ� ������ Ż��
//		//�ƴҽ�
//		else {
//			//���⼭ input[i]�� �ִ� ���ڸ� ���ڿ� �����������
//			int count{ 0 }; //ī��Ʈ�� �׻� ó���� �ʱ�ȭ
//			while (true)
//			{
//				if (box[count] == NULL)
//				{
//					box[count] = input[i];
//					AlphabetCount[count]++;
//					break;
//				}
//				else if (box[count] == input[i])
//				{
//					AlphabetCount[count]++;
//					break;
//				}
//				else {
//					count++;
//				}
//			}
//			i++;
//
//		}
//	}
//
//	int temp{ 0 }; //�ߺ�Ƚ���� �˻��ϴ°�
//	int result{ 0 }; //���ĺ��� ��Ÿ���� �����
//	bool printQuestion = false;
//	for (int count1 = 0; count1 < 26; count1++) //���� ���� ū���� �˻��ϴ°�
//	{
//		if (temp < AlphabetCount[count1]) //���� �� ū�� ���ý� ���� ������Ʈ
//		{
//			temp = AlphabetCount[count1];
//			result = count1;
//		}
//		else if (temp == AlphabetCount[count1]) //���� ���� ������ ������
//		{
//			for (int count2 = 0; count2 < 26; count2++)
//			{
//				if (temp > AlphabetCount[count2]) { printQuestion = false; }
//				if (temp < AlphabetCount[count2]) { printQuestion = true; break; }
//			}
//
//			if (printQuestion == false) { cout << "?"; exit(0); }
//		}
//	}
//	cout << box[result];
//}