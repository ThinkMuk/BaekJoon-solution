//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// pair�� �Լ��� ���� �����.
//// 
//// stable sort�� �ּұ��� ���� ���� ���ĵǾ� �ִ°��� stable sort��� �ϰ�,
//// unstable sort�� �ּҰ� �������� �ʰ� �׳� ��� ���� ���̴� ���� �������� sort�� unstable sort��� ��.
//// stable sort �� �ϱ� ���ؼ��� ���� stable_sort()�� ����ؾ� ��.
// 
// 
//bool compare(pair<int, string>a, pair<int, string>b) {
//    return a.first < b.first;
//    //true (b�� �� Ŭ�ÿ�) sort�� �����Ѵ�.
//}
//
//int main()
//{
//    int trial;
//    vector<pair<int, string>> ageArray; //pair ����ϸ� �� ���Ϳ� int�� string���� ���ÿ� �� �� �ְ� �ȴ�.
//
//    cin >> trial;
//    for (int i = 0; i < trial; i++)
//    {
//        int age; string name;
//        cin >> age >> name;
//        ageArray.push_back(make_pair(age, name)); //make_pair�̶����� pair�� �� ���Ϳ� ���� push�� �� �ְ� ���ִ� �Լ�
//    }
//    stable_sort(ageArray.begin(), ageArray.end(), compare);
//    //stable_sort�� ����ϸ� stable sort�� ����ǰ�, unstable sort�� ����ҷ��� �׳� sort�Լ��� ����ϸ� ��
//
//    for (int i = 0; i < trial; i++)
//    {
//        cout << ageArray[i].first << " " << ageArray[i].second << "\n";
//    }
//}


////unstable sort�� ����__________________________________________________________________________________
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool compare(pair<int, string>a, pair<int, string>b) {
//    return a.first < b.first;
//}
//
//int main()
//{
//    int trial;
//    vector<pair<int, string>> ageArray;
//
//    cin >> trial;
//    for (int i = 0; i < trial; i++)
//    {
//        int age; string name;
//        cin >> age >> name;
//        ageArray.push_back(make_pair(age, name));
//    }
//    sort(ageArray.begin(), ageArray.end(), compare);
//
//    for (int i = 0; i < trial; i++)
//    {
//        cout << ageArray[i].first << " " << ageArray[i].second << "\n";
//    }
//}