////1157번___________________________________________________________________
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{ //대문자 소문자도 구별해야함
//	string input{ NULL };
//	int i{ 0 };
//
//	//구별하는 박스
//	char box[26] = {NULL};
//	int AlphabetCount[26] = { 0, };
//	//인풋을 입력
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
//		if (input[i] == NULL) { break; } //더이상 구별할게 없으면 탈출
//		//아닐시
//		else {
//			//여기서 input[i]에 있는 문자를 상자에 집어넣을거임
//			int count{ 0 }; //카운트는 항상 처음에 초기화
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
//	int temp{ 0 }; //중복횟수를 검사하는거
//	int result{ 0 }; //알파벳을 나타내줄 결과값
//	bool printQuestion = false;
//	for (int count1 = 0; count1 < 26; count1++) //이제 누가 큰건지 검사하는거
//	{
//		if (temp < AlphabetCount[count1]) //값이 더 큰게 나올시 새로 업데이트
//		{
//			temp = AlphabetCount[count1];
//			result = count1;
//		}
//		else if (temp == AlphabetCount[count1]) //만약 서로 같은게 나오면
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