//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arrayInput;
//	cin >> arrayInput;
//
//	int* arr = new int[arrayInput];
//
//	for (int i = 0; i < arrayInput; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max;
//	int min;
//
//	for (int i = 0; i < arrayInput; i++)
//	{
//		if (i == 0)
//		{
//			max = arr[i];
//			min = arr[i];
//		}
//		else
//		{
//			if (max < arr[i])
//				max = arr[i];
//			if (min > arr[i])
//				min = arr[i];
//		}
//	}
//	cout << min << " " << max;
//}