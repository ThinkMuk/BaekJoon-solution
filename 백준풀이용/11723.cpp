//#include <iostream>
//#include <cstring>
//using namespace std;
//
// ��Ʈ����ŷ�� �̿��� ���� �����ؾ� �ߴ� �������� ó������ map ���̺귯���� ����ϸ�
// �����ϰ� �� �� ���� �� ���Ƽ� ����ߴ�. (������ �ð��ʰ��� ���� �ٸ� ������� Ǯ����)
// �������� ������ �� ����� �׳� �����ϰ� array�� bool �������� �־�ΰ�, �Է� �޴� ���ڰ� �����ϸ� 1�� ����,
// �ƴҽ� 0�� �����ϴ� ������� �ߴ��� �����ߴ�.
// ���� �������µ� ��ٸ�� �ƽ���.
// 
// ��Ʈ����ŷ�� ���Ŀ� �ٽ� ���� �� �� �� ������ ���� �� �� ����.
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

// ó�� map�� ����� Ǯ���� �ڵ� (�ð��ʰ��� ����)

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