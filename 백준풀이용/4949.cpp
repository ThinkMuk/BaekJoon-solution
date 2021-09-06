//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// 다른 괄호 이론들은 다 이전 문제들에서 해봤지만
//// 이번에 특히나 고생했던것은 ( [ ) ] 처럼 먼저 다른 괄호가 닫혀버리면 예외처리를 해주는 상황.
//// 벡터를 활용해 '(' 열린괄호 가 나오게 되면 1을 집어넣고 ')' 가 나오게 될 때 동일한 1이 안나오면
//// false값을 주는것을 이용해 서로 짝을 맞춰줌.
//// 
//// ***********************************************************************************
//// 지금 사실 생각해보니 다른 예외처리들도 벡터로 해결하면 더 편할듯 함
//// 다음에 풀때는 그냥 int를 사용 안하고 벡터로만 해도 쉽게 풀릴듯 합니당.
//// ***********************************************************************************
// 
//int main()
//{
//	while (1)
//	{
//		string input;
//		int smallBracket = 0; //작은 괄호 감지기
//		int bigBracket = 0; //큰 괄호 감지기
//		bool TF = true; //이게 true 여아지만 yes를 출력함
//		vector<int> twin; //괄호가  ( [ ) ] 이렇게 되지 않기 위한 방지용
//
//		getline(cin,input); //띄어쓰기까지 입력받는 방법 getline
//
//		if (input == ".") //.만 입력했을때 종료 (띄어쓰기. 은 안됨)
//			break;
//		else
//		{
//			for (int i = 0; i < input.length(); i++) //한글자 한글자씩 내려가기
//			{
//				if (input[i] == '(')
//				{
//					twin.push_back(1); // 1은 작은 괄호를 의미함
//					smallBracket++;
//				}
//				else if (input[i] == ')')
//				{
//					smallBracket--;
//					if (smallBracket < 0) //만약 짝이 안맞는 괄호가 나왔을시 ex) )가 먼저 나온 괄호
//					{
//						TF = false;
//						break;
//					}
//
//					int temp1 = twin.back();
//					twin.pop_back();
//
//					if (temp1 != 1) //벡터 가장 뒤에 있는게 작은괄호 표시가 아니게 되면 false
//					{
//						TF = false;
//						break;
//					}
//				}
//
//				if (input[i] == '[') //대괄호 파트. 작은괄호와 동일함.
//				{
//					twin.push_back(2);
//					bigBracket++;
//				}
//				else if (input[i] == ']')
//				{
//					bigBracket--;
//					if (bigBracket < 0)
//					{
//						TF = false;
//						break;
//					}
//
//					int temp2 = twin.back();
//					twin.pop_back();
//
//					if (temp2 != 2)
//					{
//						TF = false;
//						break;
//					}
//				}
//			}
//
//			//만약 끝까지 0이 아니게 되면 괄호가 다 끝나지 않았다는 뜻이지 false를 출력
//			if (smallBracket != 0 || bigBracket != 0) 
//				TF = false;
//
//			if (TF == true)
//				cout << "yes\n";
//			else
//				cout << "no\n";
//		}
//	}
//}


//벡터로 기억해내기
//작은괄호는 1, 큰괄호는 2
//
//temp에 먼저 집어넣은 1을 기억,
//(로 진입할때 1 벡터에 삽입
//
//	그 다음에 대괄호 '[' 가 들어오면 2를 삽입
//	vector 현황 : 1, 2
//
//	닫을때는 항상 우선순위 검사
//	)나 ] 가 나오면 pop을 함
//
//	)를 뽑을때 1이 안나오면 실패
//]를 뽑을때 2가 안나오면 실패