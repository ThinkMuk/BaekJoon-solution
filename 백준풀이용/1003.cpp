//#include <iostream>
//using namespace std;
//
// ��Ҵ���� �Ǻ���ġ �Լ��� �̿��� �����ϰ� ����� ����� ������ �ð��ʰ��� ���� ������ �����ϰ� �ȴ�.
// �׷��� �ؿ� �Լ��� ����� �ؼ� ������ �ľ��߰�, �Ǻ���ġ �Լ��� ������
// �Է°��� 0��1 �ΰ��� �����ϰ�
// 0�� ������ ������ 1�� ��������,
// 1�� ������ ������ 0�ǰ���+1�ǰ��� ����.
// �̷��� �ð������� ª�� �ɷ��������� �Լ��� ����� ������ �� �ڿ� Ǫ�°͵� ��� �� �ϳ��� �� ����.
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
//____________________________________________(�Ʒ��� �Ǻ���ġ �Լ��� �̿��� ������ �ľ���)
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