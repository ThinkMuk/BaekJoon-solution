//#include <iostream>
//using namespace std;
//
////최대공약수
////유클리드 호제법을 사용한 최대공약수 구하기
////최소공배수
////최소공배수는 구한 최대공약수에 원래 숫자들을 나눈 뒤, 최대공약수 x a나눈수 x b나눈수 로 풀면 나온다.
////거듭해서 오답이 나온 이유:
////유클리드를 이용해 최대공약수를 구하던 과정에서 큰 숫자가 a에 먼저 나와야 하는데 그 전까지는 그 우선순위를 만들어
////주지 않았음.
//
//int GCF(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//		return GCF(b, a % b);
//}
//int main()
//{
//	int a; int b;
//	int gcf;
//
//	cin >> a >> b;
//
//	if (a >= b)
//		gcf = GCF(a, b);
//	else
//		gcf = GCF(b, a);
//
//	cout << gcf << "\n" << (a * b) / gcf;
//}