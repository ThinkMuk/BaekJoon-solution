//#include <iostream>
//using namespace std;
// 
// DP문제)
// 초반에 작은 숫자들을 미리 하나씩 직접 꼼꼼히 계산해서
// 주어진 데이터로 패턴을 찾아 풀이를 하는게 핵심인 것 같다
// 
// 여전히 DP문제는 어려워서 큰일이다 연습 많이 해야지 ㅠ
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int sol[1001] = { 0, };
//    sol[1] = 1;
//    sol[2] = 2;
//
//    for (int i = 3; i <= n; i++)
//    {
//        sol[i] = (sol[i - 1] + sol[i - 2]) % 10007;
//    }
//    cout << sol[n];
//
//    return 0;
//}