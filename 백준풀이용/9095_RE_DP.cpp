//#include <iostream>
//using namespace std;
//
////�Ȱ��� ���� ���α׷����ε� ��...
////���� ������� ���� �޴� �� �� �ٽ� Ǯ����� �ϱ⵵ �ϰ�
////���� �������� ���غ��� �ξ� �����ϰ� Ǯ �� ������ �ϴ�.
////�ٸ� �������� ���� Ǫ�°� � �־��µ� ���� ���� ���α׷����� ���θ� ���� �غ��߰ڴ� ��
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
//    for (int i = 4; i <= inputNum; i++) //������ �̸� �����α�. (�ߺ����� �ʱ� ����)
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