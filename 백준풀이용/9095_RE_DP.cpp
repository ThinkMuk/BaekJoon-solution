//#include <iostream>
//using namespace std;
//
////똑같은 동적 프로그래밍인데 음...
////아직 어려움을 많이 겪는 듯 함 다시 풀어봐야 하기도 하고
////많은 문제들을 접해봐야 훨씬 수월하게 풀 수 있을듯 하다.
////다른 동적들은 쉽게 푸는게 몇개 있었는데 역시 동적 프로그래밍은 공부를 많이 해봐야겠다 ㅠ
//
//int inputNum;
//int storeNum[11]; //N<11
//
//int sol()
//{
//    storeNum[1] = 1; //1
//    storeNum[2] = 2; //1+1, 2
//    storeNum[3] = 4; //1+1+1, 1+2, 2+1, 3
//
//    for (int i = 4; i <= inputNum; i++) //사전에 미리 만들어두기. (중복되지 않기 위함)
//        storeNum[i] = storeNum[i - 1] + storeNum[i - 2] + storeNum[i - 3];
//
//    return storeNum[inputNum];
//}
//
//int main()
//{
//    cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//    int trial;
//    cin >> trial;
//
//    for (int i = 0; i < trial; i++)
//    {
//        cin >> inputNum;
//        cout << sol() << "\n";
//    }
//}