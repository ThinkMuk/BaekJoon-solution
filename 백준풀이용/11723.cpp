//#include <iostream>
//#include <cstring>
//using namespace std;
//
// 비트마스킹을 이용해 원래 구현해야 했던 문제지만 처음에는 map 라이브러리를 사용하면
// 수월하게 할 수 있을 것 같아서 사용했다. (하지만 시간초과가 떠서 다른 방법으로 풀이함)
// 다음으로 생각해 낸 방법은 그냥 간단하게 array에 bool 형식으로 넣어두고, 입력 받는 숫자가 존재하면 1을 저장,
// 아닐시 0을 저장하는 방식으로 했더니 성공했다.
// 쉬운 문제였는데 어리바리까서 아쉽다.
// 
// 비트마스킹은 추후에 다시 쓰게 될 때 더 유심히 보면 될 것 같다.
// 
//int main() 
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    string temp = "";
//    int trial, temp1;
//    bool arr[21] = { 0 };
//
//    cin >> trial;
//    for (int i = 0; i < trial; i++) 
//    {
//        cin >> temp;
//
//        if (temp == "add") {
//            cin >> temp1;
//            if (arr[temp1] == 0) {
//                arr[temp1] = 1;
//            }
//        }
//        else if (temp == "remove") {
//            cin >> temp1;
//            if (arr[temp1] == 1) {
//                arr[temp1] = 0;
//            }
//
//        }
//        else if (temp == "check") {
//            cin >> temp1;
//            if (arr[temp1] == 0) {
//                cout << "0\n";
//            }
//            else {
//                cout << "1\n";
//            }
//        }
//        else if (temp == "toggle") {
//            cin >> temp1;
//            if (arr[temp1] == 1) {
//                arr[temp1] = 0;
//            }
//            else {
//                arr[temp1] = 1;
//            }
//        }
//        else if (temp == "all") {
//            for (int j = 1; j <= 20; j++) 
//                arr[j] = 1;
//        }
//        else if (temp == "empty") 
//            memset(arr, 0, sizeof(arr));
//    }
//
//    return 0;
//}

// 처음 map을 사용해 풀이한 코드 (시간초과가 났음)

//#include <iostream>
//#include <map>
//using namespace std;
//
//map<int, int> m;
//int trial;
//string temp;
//int temp1;
//
//
//void add(int num)
//{
//	if (m.find(num) == m.end()) {
//		m.insert(make_pair(num, 0));
//	}
//}
//void remove(int num)
//{
//	if (m.find(num) != m.end()) {
//		m.erase(num);
//	}
//}
//
//void check(int num)
//{
//	if (m.find(num) != m.end()) {
//		cout << 1 << "\n";
//	}
//	else
//		cout << 0 << "\n";
//}
//
//void toggle(int num)
//{
//	if (m.find(num) != m.end()) {
//		m.erase(num);
//	}
//	else
//		m.insert(make_pair(num, 0));
//}
//
//void all()
//{
//	m.empty();
//
//	for (int i = 1; i <= 20; i++)
//		m.insert(make_pair(i, 0));
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		cin >> temp;
//
//		if (temp == "add") {
//			cin >> temp1;
//			add(temp1);
//		}
//		else if (temp == "remove") {
//			cin >> temp1;
//			remove(temp1);
//		}
//		else if (temp == "check") {
//			cin >> temp1;
//			check(temp1);
//		}
//		else if (temp == "toggle") {
//			cin >> temp1;
//			toggle(temp1);
//		}
//		else if (temp == "all") {
//			all();
//		}
//		else if (temp == "empty")
//			m.clear();
//	}
//
//	return 0;
//}