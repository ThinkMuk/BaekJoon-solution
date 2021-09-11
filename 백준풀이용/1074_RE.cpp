//#include <iostream>
//#include <math.h>
//using namespace std;
//
//// 알고리즘 사용: **분할 정복** , 재귀
//// 참고: https://donggoolosori.github.io/2020/09/22/boj-1074-Z/
//// 
//// 오늘 처음으로 분할정복에 관련된 알고리즘을 풀어보았다.
//// 분할 정복은 간단하게 말하자면, 정돈이 안된 데이터 모음집을 풀어놓고 차례대로 맞추면서 풀어나가는 알고리즘을 얘기한다.
//// 풀이를 보고 난 뒤, 먼저 재귀를 이용한 분할정복은 큰 것부터 차례대로 훑고, 원하는 좌표의 함수가 그 분면에 존재하면
//// 들어가서 재귀로 더 자세하게 파고 들어가는 함수를 이용했다는것을 이해했다.
//// 솔직히 스스로 짜서 만든 코딩은 아니였고, 이해를 해서 만든거기때문에 다시 한번 스스로 해 봐야 한다고 생각한다..
//// 분할 정복에 관련된 문제들도 만날때마다 신중하게 잘 기억해서 풀어봐야 할 듯 하다.
// 
// 
//int boardSize, goalY, goalX;
//int ans = 0;
//
//void Z(int y, int x, int size)
//{
//    if (y == goalY && x == goalX)
//    {
//        cout << ans << '\n';
//        return;
//    }
//
//    // goalY,goalX 가 현재 사분면에 존재한다면
//    if ( y <= goalY && goalY < (y + size) &&  x <= goalX && goalX < (x + size) )
//    {
//        // 1사분면 탐색
//        Z(y, x, size / 2);
//        // 2사분면 탐색
//        Z(y, x + size / 2, size / 2);
//        // 3사분면 탐색
//        Z(y + size / 2, x, size / 2);
//        // 4사분면 탐색
//        Z(y + size / 2, x + size / 2, size / 2);
//    }
//    else //존재하지 않으면 그 위치는 이미 다 훑은걸로 간주
//    {
//        ans += size * size;
//    }
//}
//int main()
//{
//    cin >> boardSize >> goalY >> goalX;
//    //여기서 (1<<boardSize)는 이진법으로 나타내는 제곱의 방법이다. 고로 (2^boardSize) 라고 봐도 됨
//    //자세한건 https://donggoolosori.github.io/2020/09/22/boj-1074-Z/ 댓글 참고
//    Z(0, 0, pow(2, boardSize));
//}