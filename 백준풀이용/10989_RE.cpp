//#include <iostream>
//using namespace std;
//
// 메모리 초과가 떴음.
// 사실 너무 쉬운 수준에 비해 정답률이 낮길래 엄청 의심해봄
// 근데 메모리랑 시간이랑 난...아직도 자료구조에 빠삭하지 못해 잘 모르겠음
// 자료구조에서의 시간복잡도랑 공간복잡도에 대해서 확실하게 더 공부해야겠다는 생각을
// 들게 해줬음.
// 
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int trial;
//	int count[10001] = { 0, };
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		count[temp]++;
//	}
//
//	for (int i = 0; i < 10001; i++)
//		for (int j = 0; j < count[i]; j++)
//			cout << i << "\n";
//}