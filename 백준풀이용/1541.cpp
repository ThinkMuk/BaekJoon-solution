//#include <iostream>
//#include <string>
//using namespace std;
//
//// ���̳ʽ��� ���̸� �ڿ� ��ü�� ��ȣ�ļ� �� �������� ������ �ϸ� �ּڰ��� ������ �����̴�.
//// p.s.
//// �������� �ϴϱ� ����� ���� �������µ��� ����ϴµ� �ð��� �ɷȴ�
//// �ٽ� ���밡�� ������ �ɽ��Ҷ����� �ٽ� �ϳ��� Ǯ����߰ڴ�
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
