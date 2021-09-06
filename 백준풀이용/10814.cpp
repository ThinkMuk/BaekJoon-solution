//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// pair의 함수에 대해 배워봄.
//// 
//// stable sort는 주소까지 같이 같게 정렬되어 있는것을 stable sort라고 하고,
//// unstable sort는 주소가 동일하지 않고 그냥 사람 눈에 보이는 값만 같아지는 sort를 unstable sort라고 함.
//// stable sort 를 하기 위해서는 직접 stable_sort()를 사용해야 함.
// 
// 
//bool compare(pair<int, string>a, pair<int, string>b) {
//    return a.first < b.first;
//    //true (b가 더 클시에) sort를 진행한다.
//}
//
//int main()
//{
//    int trial;
//    vector<pair<int, string>> ageArray; //pair 사용하면 한 벡터에 int와 string값이 동시에 들어갈 수 있게 된다.
//
//    cin >> trial;
//    for (int i = 0; i < trial; i++)
//    {
//        int age; string name;
//        cin >> age >> name;
//        ageArray.push_back(make_pair(age, name)); //make_pair이란것은 pair이 된 벡터에 같이 push할 수 있게 해주는 함수
//    }
//    stable_sort(ageArray.begin(), ageArray.end(), compare);
//    //stable_sort를 사용하면 stable sort가 진행되고, unstable sort를 사용할려면 그냥 sort함수를 사용하면 됨
//
//    for (int i = 0; i < trial; i++)
//    {
//        cout << ageArray[i].first << " " << ageArray[i].second << "\n";
//    }
//}


////unstable sort의 예시__________________________________________________________________________________
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