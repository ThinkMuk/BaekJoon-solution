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

//시간 초과 된 함수_______________________________________________________________________________________
//포문을 너무 돌려서 시간이 초과 되어버린 경우임

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
//		for (int j = 0; j < goal; j++) //원하는 숫자를 pop할때까지 돌리기
//		{
//			bool skipNum = false;
//
//			for (int l = 0; l < usedStack.size(); l++) //이미 사용된 수는 지나가게 하는 함수
//			{
//				if ((j+1) == usedStack[l])//이미 사용된 숫자일시 j사용 포문에서도 탈출
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
