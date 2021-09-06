//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////lower-bound와 upper-bound 이론을 이용한 풀이
//// 이진탐색도 많이 부족하니 계속 꾸준하게 연습할것 (또 까먹은듯 저번에 풀고)
//// lower-bound 와 upper-bound 해설은 아래 참조: (+ 코드 다시 리뷰하기 너무 대충 넘어간듯)
////https://hwan-shell.tistory.com/300 해설
// 아래 오류가 난 이진탐색 풀이도 이유가 뭔지 다시 보면 세겨넣기
//
//int main() {
//    int T;
//    int N, M, K, H;
//    int X, Y;
//    //int answer = 0;
//
//    cin >> T;
//    vector<int> v(T);
//
//    for (int i = 0; i < T; i++)
//        scanf("%d", &v[i]);
//
//    sort(v.begin(), v.end());
//    cin >> T;
//
//    vector<int> answer(T);
//    for (int i = 0; i < T; i++) {
//        cin >> K;
//        auto upper = upper_bound(v.begin(), v.end(), K);
//        auto lower = lower_bound(v.begin(), v.end(), K);
//
//        answer[i] = upper - lower;
//    }
//
//    for (auto n : answer)
//        cout << n << " ";
//
//    return 0;
//}


//이진탐색으로 풀었음에도 불구하고 지금 이거 존1나 막혀서 머가리 터질것같다 보류
//틀린 부분은 sArray에서 동일한 숫자를 받으면 이미 계산하고 사라진 숫자라 0으로 뜨게 된다
//이것만 고치면 정답으로 나올듯 하다.
//해결방법: 
//sArray에서 찾을때마다 사라지게 하지 않고 sArray 자체를 pair vector로 만들어서 int,bool 로 선언해준다.
//한번 만날때 false로 바꾼뒤로 다 훑고 answer[i]가 하나 넘어갈때마다 다시 sArray의 bool을 true로 만들어주고 하면
//중복되는 숫자를 해결할 수 있게 된다.
// 
// ** 아래는 틀린 코드임
// 
//vector<int> fArray;
//vector<int> sArray;
//
//int binary_search(int first, int last, int goal) //주소, 주소, 값
//{
//    if (first > last)
//        return 0;
//    else
//    {
//        int middle = (first + last) / 2;
//
//        if (fArray[middle] == goal)
//         {
//            fArray.erase(fArray.begin() + middle);
//            return 1;
//		   }
//        else if (fArray[middle] < goal)
//            return binary_search(middle+1, last, goal);
//        else
//            return binary_search(first, middle-1, goal);
//    }
//
//}
//
//int main()
//{
//    int fTrial;
//    cin >> fTrial;
//
//    for (int i = 0; i < fTrial; i++)
//    {
//        int temp;
//        cin >> temp;
//        fArray.push_back(temp);
//    }
//
//    int sTrial;
//    cin >> sTrial;
//    int* answer = new int[sTrial];
//
//    for (int i = 0; i < sTrial; i++) //answer배열에 0다 채워넣기
//    {
//        answer[i] = 0;
//    }
//
//    for (int i = 0; i < sTrial; i++)
//    {
//        int temp;
//        cin >> temp;
//        sArray.push_back(temp);
//    }
//
//    sort(fArray.begin(), fArray.end());
//
//    int i = 0;
//    while(1)
//    {
//        if (i >= sArray.size())
//            break;
//
//
//        int temp = fArray.size() - 1;
//        if (binary_search(0, temp, sArray[i])) //
//            answer[i]++;
//        else
//            i++;
//    }
//
//    for (int i = 0; i < sTrial; i++)
//    {
//        cout << answer[i] << ' ';
//    }
//
//}