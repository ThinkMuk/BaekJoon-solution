//#include <iostream>
//#include <string>
//using namespace std;
//
////분해합은 생성자와 각 자릿수를 모두 더한 숫자인데,
////각 자릿수를 모두 더한 수는 그렇게 큰 수가 아닙니다.
////
////그러니까 123, 456은 6자리 숫자이기 때문에
////각 자릿수는 가장 커봐야 9 + 9 + 9 + 9 + 9 + 9 일겁니다.
////즉 9 x 6자리 = 54라는 것이지요.
////그렇다면 생성자는 123, 456 - 54 보다 항상 크거나 같을 수 밖에 없습니다.
////결국 123, 402 부터 123, 456 중에서만 생성자를 찾으면 되는 것이지요.
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
//		//만약 숫자를 찾다가 원래 숫자를 넘어서게 되면 정답이 나오는것은 불가능 (즉, 0을 출력)
//		else if (tempInput > input)
//		{
//			cout << "0";
//			break;
//		}
//		else
//			tempInput++;
//	}
//}



// ))+++++++++++++ 추가
// 
//이 방법은 가장 큰 수를 구해내는 법
// 정답이 없을때 0이 나오게 하는 예외처리는 아직 못함
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