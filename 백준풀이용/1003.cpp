//#include <iostream>
//using namespace std;
//
// 평소대로의 피보나치 함수를 이용해 정직하게 계수를 계산해 나가면 시간초과로 인해 문제를 실패하게 된다.
// 그래서 밑에 함수를 참고로 해서 패턴을 파악했고, 피보나치 함수의 패턴은
// 입력값이 0과1 인것을 제외하고
// 0의 개수는 이전의 1의 개수였고,
// 1의 개수는 이전의 0의개수+1의개수 였다.
// 이렇게 시간제한이 짧게 걸려있을때는 함수를 만들어 패턴을 본 뒤에 푸는것도 방법 중 하나인 것 같다.
// 
//int main()
//{
//    int trial;
//    cin >> trial;
//
//    for (int i = 0; i < trial; i++) {
//        int prevNode = 0;
//        int curNode = 0;
//        int temp;
//        int fibo;
//        cin >> fibo;
//        if (fibo == 0)
//            cout << "1 0\n";
//        else {
//            for (int j = 0; j < fibo; j++) {
//                if (j == 0)
//                    curNode++;
//                else {
//                    temp = prevNode;
//                    prevNode = curNode;
//                    curNode += temp;
//                }
//            }
//            cout << prevNode << " " << curNode << "\n";
//        }
//    }
//}
//____________________________________________(아래의 피보나치 함수를 이용해 패턴을 파악함)
//int zeroCount = 0;
//int oneCount = 0;
//
//int fibonacci(int n) 
//{
//    if (n == 0) {
//
//        zeroCount++;
//        return 0;
//    }
//    else if (n == 1) {
//        oneCount++;
//        return 1;
//    }
//    else {
//        return fibonacci(n-1) + fibonacci(n-2);
//    }
//}
//
//int main()
//{
//    int trial;
//    cin >> trial;
//    
//    for (int i = 0; i < trial; i++) {
//        zeroCount = 0;
//        oneCount = 0;
//        int fibo;
//        cin >> fibo;
//        fibonacci(fibo);
//        cout << zeroCount << " " << oneCount << "\n";
//    }
//}