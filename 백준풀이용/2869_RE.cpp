//#include <iostream>
//using namespace std;
//
////요구하는 숫자가 뒤에는 너무 커져 while문을 이용하면 시간초과가 나는 문제였다.
////while문으로는 푸는것을 성공했지만
////아직까지 day를 출력하는 공식은 왜 저렇게 됐는지 이해가 잘 되지 않는다 ...
////...안되면 외워야지
////(전체나무-오르는거리) / (오르는거리-떨어지는거리) 이다. 잘 기억해둬야할듯
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long long climb;
//	long long fall;
//	long long tree;
//
//	cin >> climb >> fall >> tree;
//
//	long long day = 1;
//
//	day += (tree - climb) / (climb - fall);
//
//	if ((tree - climb) % (climb - fall) != 0) //나머지는 모두
//		day++;
//	if (climb >= tree) //예외처리
//		cout << "1";
//	else
//		cout << day; //예외처리 통과시 정답 출력
//}
//		
//	//가능한 짓이긴 한데 이렇게 하면 시간초과가 발생함 *애초에 while문 사용 못하게 해둔거임
//	//long long temp = 0;
//	//while (1)
//	//{
//	//	temp += climb;
//
//	//	if (temp >= tree)
//	//		break;
//
//	//	temp -= fall;
//	//	day++;
//	//}
//	//cout << day;
