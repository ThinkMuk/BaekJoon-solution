//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////�����ϰ� for���� ���� ���� �ð����⵵�� n^2���� ������ ����
////Ž���ϴ� �������� �����ϸ� ����Ž���� �̿��� logn���� �����
////����, �ӵ��� ������ �ϱ� ���ؼ� endl; ��� "\n"�� ����ϰ�
////�Ʒ��� ���̴� sync_with_stdio(0); cin.tie(0)�� ����� cin�� �ӵ��� ������ �Ѵ�.
//
//vector<int> mainArray;
//
//int BinarySearch(int min, int max, int target)
//{
//	if (min > max)
//		return 0;
//	else
//	{
//		int mid = (min + max) / 2;
//
//		if (mainArray[mid] == target)
//			return 1;
//		else if (mainArray[mid] > target)
//			return BinarySearch(min, mid - 1, target);
//		else
//			return BinarySearch(mid + 1, max, target);
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0); //cin�� �ӵ��� ���� �� ���Խ��Ѿ���
//
//	int trial;
//	cin >> trial;
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		mainArray.push_back(temp);
//	}
//
//	sort(mainArray.begin(), mainArray.end());
//
//	int input;
//	cin >> input;
//	for (int i = 0; i < input; i++)
//	{
//		int temp;
//		cin >> temp;
//		cout << BinarySearch(0, trial - 1, temp) << "\n";
//	}
//}