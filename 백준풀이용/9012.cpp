//#include <iostream>
//#include <string>
//using namespace std;
//
// 잘 짠 코딩이라고 말은 못하겠다....
// 괄호가 열려야지만 괄호가 만들어진다는 것을 이용해 count가 만약에 마이너스로 가면 실패로 뜨게 만듦
// 2개의 NO가 뜨지 않게 하기 위해 overlap이라는 함수를 만들어 중복으로 프린팅되지 않게 만듦
// else로 마지막에 닫혀야 좋은 풀이라고 하던데 else if 로 끝내서 조금 찝찝하긴 함...ㅠ
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