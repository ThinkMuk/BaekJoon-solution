//#include <iostream>
//#include <queue>
//#include <cstdlib>
//using namespace std;
//
////priority_queue ���: 
////
////������ vector�� Ǯ���� �˰��� �θ��ٰ� ���� ���� ó���� �� ���ؼ� ����ʰ� ����, �� �ڿ� ��ġ�� �ð��ʰ��� ����...
////�˰��� ������ �켱���� ť (priority_queue) �� ����ؼ� Ǯ��� �ϴ� ��������.
////���� ����ϴµ� �ͼ����� �ʾƼ� ���� ����� ���� ���� �Ͱ� Ȱ���� �� �� �� ����. ��� ���� ���ΰ� ���� �����־���..
////�������� ���� ���� �����ε� ���� �� ���� �Ӵ�. ������ �ؾ߰ڴ� ��
// 
//int main() 
//{
//    int trial;
//    cin >> trial;
//
//    //<data tape, container type, ���� ����> (�� ������� �� �����־� �� �� ����)
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



////vector ���: �ð��ʰ� ��
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
//				//cout << outTemp << "\n"; //����
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