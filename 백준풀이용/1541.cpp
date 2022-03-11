//#include <iostream>
//#include <string>
//using namespace std;
//
//// 마이너스가 보이면 뒤에 전체를 괄호쳐서 다 빼버리는 식으로 하면 최솟값이 나오는 문제이다.
//// p.s.
//// 오랜만에 하니까 상당히 쉬운 문제였는데도 고민하는데 시간이 걸렸다
//// 다시 군대가기 전까지 심심할때마다 다시 하나씩 풀어봐야겠다
// 
//int main() 
//{
//  ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//    string input;
//
//    int result = 0;
//    string num;
//    bool isMinus = false;
//
//    cin >> input;
//
//    for (int i = 0; i <= input.size(); i++)
//    {
//
//        if (input[i] == '-' || input[i] == '+' || i == input.size()) {
//            if (isMinus) {
//                result -= stoi(num);
//                num = "";
//            }
//            else {
//                result += stoi(num);
//                num = "";
//            }
//        }
//        else {
//            num += input[i];
//        }
//        if (input[i] == '-') {
//            isMinus = true;
//        }
//    }
//
//    cout << result;
//
//    return 0;
//}
