//#include <iostream>
//#include <vector>
//#include <algorithm>
//
////최대값인것을 선택해야하는 것이기 때문에 target으로 받은 수를 조건으로 거는것이 아닌, 모든 경우들을 다 흝어봤는지에 초점을 맞춰
////조건을 거는것이 맞다.
//
//using namespace std;
//
//long long BinarySearch(vector<long long>& arr, long long start, long long end, int target) 
//{
//    long long maxLen = (start + end) / 2;
//    long long sum = 0;
//    
//    while (start <= end) //모든것을 검사하다 넘어가졌을시 탈출
//    {
//        sum = 0;
//        maxLen = (start + end) / 2;
//        for (int i = 0; i < arr.size(); i++) 
//        {
//            sum += arr[i] / maxLen;
//        }
//        //sum이 target보다 작으면 오른쪽 절반 범위 탐색
//        if (target > sum) 
//        {
//            end = maxLen - 1;
//        }
//        //sum이 target보다 크거나 같으면 왼쪽 절반 범위 탐색
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
//    //이진탐색을 위한 정렬
//    sort(arr.begin(), arr.end());
//
//    cout << BinarySearch(arr, 1, arr[arr.size() - 1], targetNum);
//}