//#include <iostream>
//#include <queue>
//#include <cstdlib>
//using namespace std;
//
////priority_queue 사용: 
////
////저번에 vector로 풀려고 똥고집 부리다가 문제 이해 처음에 잘 못해서 출력초과 나고, 그 뒤에 고치니 시간초과가 났다...
////알고보니 무조건 우선순위 큐 (priority_queue) 를 사용해서 풀어야 하는 문제였다.
////아직 사용하는데 익숙하지 않아서 자주 사용해 봐야 몸에 익고 활용을 잘 할 것 같다. 계속 개념 봐두고 사용법 익혀둬야지..
////생각보다 아주 쉬운 문제인데 오래 끈 내가 밉다. 열심히 해야겠다 ㅠ
// 
//int main() 
//{
//    int trial;
//    cin >> trial;
//
//    //<data tape, container type, 정렬 기준> (이 선언법도 잘 익혀둬야 할 것 같다)
//    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > numArray;
//
//    for (int i = 0; i < trial; i++)
//    {
//        int temp;
//        cin >> temp;
//
//        if (temp != 0) {
//            numArray.push({ abs(temp), temp });
//        }
//        else {
//            if (numArray.empty())
//                cout << 0 << "\n";
//            else {
//                cout << numArray.top().second << "\n";
//                numArray.pop();
//            }
//        }
//    }
//
//    return 0;
//}



////vector 사용: 시간초과 남
//
//bool absSort(int a, int b)
//{
//	if (abs(a) == abs(b)) {
//		return a < b;
//	}
//	else {
//		return abs(a) < abs(b);
//	}
//}
//
//int main()
//{
//	vector<int> numArray;
//	vector<int> answer;
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		if (temp == 0) {
//
//			if (numArray.empty()) {
//				answer.push_back(0);
//				//cout << "0\n";
//			}
//			else {
//				int outTemp = numArray.front();
//				numArray.erase(numArray.begin());
//				answer.push_back(outTemp);
//				//cout << outTemp << "\n"; //수정
//			}
//
//		}
//		else {
//			numArray.push_back(temp);
//			sort(numArray.begin(), numArray.end(), absSort);
//		}
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i];
//		if (i != answer.size() - 1) {
//			cout << "\n";
//		}
//	}
//
//	return 0;
//}