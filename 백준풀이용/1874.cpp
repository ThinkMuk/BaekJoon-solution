//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;

//int main()
//{
//	stack<int> stack;
//	vector<char> answerStack;
//	int count = 1;
//	int input;
//
//	cin >> input;
//
//	for (int i = 0; i < input; i++)
//	{
//		int goal;
//		cin >> goal;
//
//		while (count <= goal)
//		{
//			stack.push(count);
//			count += 1;
//			answerStack.push_back('+');
//		}
//		if (stack.top() == goal)
//		{
//			stack.pop();
//			answerStack.push_back('-');
//		}
//		else
//		{
//			cout << "NO" << '\n';
//			return 0;
//		}
//	}
//	for (int i = 0; i < answerStack.size(); i++)
//	{
//		cout << answerStack[i] << '\n';
//	}
//}

//�ð� �ʰ� �� �Լ�_______________________________________________________________________________________
//������ �ʹ� ������ �ð��� �ʰ� �Ǿ���� �����

//int main()
//{
//	vector<int> stack;
//	vector<int> usedStack;
//	vector<char> answerStack;
//	bool wrongAnswer = false;
//	int trial;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int goal;
//		cin >> goal;
//
//		for (int j = 0; j < goal; j++) //���ϴ� ���ڸ� pop�Ҷ����� ������
//		{
//			bool skipNum = false;
//
//			for (int l = 0; l < usedStack.size(); l++) //�̹� ���� ���� �������� �ϴ� �Լ�
//			{
//				if ((j+1) == usedStack[l])//�̹� ���� �����Ͻ� j��� ���������� Ż��
//				{
//					skipNum = true;
//					break;
//				}
//			}
//			if (skipNum == false)
//			{
//				stack.push_back(j + 1);
//				usedStack.push_back(j + 1);
//				answerStack.push_back('+');
//			}
//			else
//				continue;
//		}
//
//		if (stack.back() == goal)
//		{
//			stack.pop_back();
//			answerStack.push_back('-');
//		}
//		else
//		{
//			wrongAnswer = true;
//		}
//	}
//	if (wrongAnswer)
//	{
//		cout << "NO" << endl;
//	}
//	else
//	{
//		for (int i = 0; i < answerStack.size(); i++)
//		{
//			cout << answerStack[i] << '\n';
//		}
//	}
//
//}
