//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////�ִ밪�ΰ��� �����ؾ��ϴ� ���̱� ������ target���� ���� ���� �������� �Ŵ°��� �ƴ�, ��� ������ �� �y��ô����� ������ ����
////������ �Ŵ°��� �´�.
//
//using namespace std;
//
//long long BinarySearch(vector<long long>& arr, long long start, long long end, int target) 
//{
//    long long maxLen = (start + end) / 2;
//    long long sum = 0;
//    
//    while (start <= end) //������ �˻��ϴ� �Ѿ������ Ż��
//    {
//        sum = 0;
//        maxLen = (start + end) / 2;
//        for (int i = 0; i < arr.size(); i++) 
//        {
//            sum += arr[i] / maxLen;
//        }
//        //sum�� target���� ������ ������ ���� ���� Ž��
//        if (target > sum) 
//        {
//            end = maxLen - 1;
//        }
//        //sum�� target���� ũ�ų� ������ ���� ���� ���� Ž��
//        else if (sum >= target) 
//        {
//            start = maxLen + 1;
//        }
//    }
//    return end;
//}
//
//int main() 
//{
//    int num, targetNum = 0;
//    long long sum = 0;
//    vector<long long> arr;
//
//    cin >> num >> targetNum;
//
//    for (int i = 0; i < num; i++)
//    {
//        long long temp = 0;
//        cin >> temp;
//        arr.push_back(temp);
//        sum += temp;
//    }
//    //����Ž���� ���� ����
//    sort(arr.begin(), arr.end());
//
//    cout << BinarySearch(arr, 1, arr[arr.size() - 1], targetNum);
//}