//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////lower-bound�� upper-bound �̷��� �̿��� Ǯ��
//// ����Ž���� ���� �����ϴ� ��� �����ϰ� �����Ұ� (�� ������� ������ Ǯ��)
//// lower-bound �� upper-bound �ؼ��� �Ʒ� ����: (+ �ڵ� �ٽ� �����ϱ� �ʹ� ���� �Ѿ��)
////https://hwan-shell.tistory.com/300 �ؼ�
// �Ʒ� ������ �� ����Ž�� Ǯ�̵� ������ ���� �ٽ� ���� ���ֱܳ�
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


//����Ž������ Ǯ�������� �ұ��ϰ� ���� �̰� ��1�� ������ �Ӱ��� �����Ͱ��� ����
//Ʋ�� �κ��� sArray���� ������ ���ڸ� ������ �̹� ����ϰ� ����� ���ڶ� 0���� �߰� �ȴ�
//�̰͸� ��ġ�� �������� ���õ� �ϴ�.
//�ذ���: 
//sArray���� ã�������� ������� ���� �ʰ� sArray ��ü�� pair vector�� ���� int,bool �� �������ش�.
//�ѹ� ������ false�� �ٲ۵ڷ� �� �Ȱ� answer[i]�� �ϳ� �Ѿ������ �ٽ� sArray�� bool�� true�� ������ְ� �ϸ�
//�ߺ��Ǵ� ���ڸ� �ذ��� �� �ְ� �ȴ�.
// 
// ** �Ʒ��� Ʋ�� �ڵ���
// 
//vector<int> fArray;
//vector<int> sArray;
//
//int binary_search(int first, int last, int goal) //�ּ�, �ּ�, ��
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
//    for (int i = 0; i < sTrial; i++) //answer�迭�� 0�� ä���ֱ�
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