//#include <iostream>
//#include <string>
//using namespace std;
//
// �� § �ڵ��̶�� ���� ���ϰڴ�....
// ��ȣ�� ���������� ��ȣ�� ��������ٴ� ���� �̿��� count�� ���࿡ ���̳ʽ��� ���� ���з� �߰� ����
// 2���� NO�� ���� �ʰ� �ϱ� ���� overlap�̶�� �Լ��� ����� �ߺ����� �����õ��� �ʰ� ����
// else�� �������� ������ ���� Ǯ�̶�� �ϴ��� else if �� ������ ���� �����ϱ� ��...��
// 
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		string input;
//		bool overlap = false;
//		int count = 0;
//
//		cin >> input;
//
//		for (int j = 0; j < input.length(); j++)
//		{
//			if (input[j] == '(')
//				count++;
//			else if (input[j] == ')')
//				count--;
//
//			if (count < 0)
//			{
//				overlap = true;
//				cout << "NO\n";
//				break;
//			}
//		}
//		if (count != 0 && overlap==false)
//			cout << "NO\n";
//		else if(count == 0 && overlap==false)
//			cout << "YES\n";
//	}
//}