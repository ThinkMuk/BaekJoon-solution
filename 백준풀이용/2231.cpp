//#include <iostream>
//#include <string>
//using namespace std;
//
////�������� �����ڿ� �� �ڸ����� ��� ���� �����ε�,
////�� �ڸ����� ��� ���� ���� �׷��� ū ���� �ƴմϴ�.
////
////�׷��ϱ� 123, 456�� 6�ڸ� �����̱� ������
////�� �ڸ����� ���� Ŀ���� 9 + 9 + 9 + 9 + 9 + 9 �ϰ̴ϴ�.
////�� 9 x 6�ڸ� = 54��� ��������.
////�׷��ٸ� �����ڴ� 123, 456 - 54 ���� �׻� ũ�ų� ���� �� �ۿ� �����ϴ�.
////�ᱹ 123, 402 ���� 123, 456 �߿����� �����ڸ� ã���� �Ǵ� ��������.
//
//int main()
//{
//	int input;
//	cin >> input;
//
//	string inputTest = to_string(input);
//	int multiply = inputTest.length();
//
//	int tempInput = input - (9 * multiply);
//	while (1)
//	{
//		int tempAns = tempInput;
//		string StempAns = to_string(tempAns);
//
//		for (int i = 0; i < StempAns.length(); i++)
//		{
//			tempAns += StempAns[i] - '0';
//		}
//
//		if (tempAns == input)
//		{
//			cout << tempInput;
//			break;
//		}
//		//���� ���ڸ� ã�ٰ� ���� ���ڸ� �Ѿ�� �Ǹ� ������ �����°��� �Ұ��� (��, 0�� ���)
//		else if (tempInput > input)
//		{
//			cout << "0";
//			break;
//		}
//		else
//			tempInput++;
//	}
//}



// ))+++++++++++++ �߰�
// 
//�� ����� ���� ū ���� ���س��� ��
// ������ ������ 0�� ������ �ϴ� ����ó���� ���� ����
//int tempAns = tempInput;
//string StempAns = to_string(tempAns);

//for(int i=0;i<StempAns.length();i++)
//{
//	tempAns += StempAns[i] - '0';
//}
//if (tempAns == input)
//{
//	cout << tempInput;
//	break;
//}
//else
//	tempInput--;