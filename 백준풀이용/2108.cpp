//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
// 생각보다 쉬워보였지만 세번째에서 중복되는 경우를 잘 파악해서 체계적으로 만드는것이 관건.
// 배열을 2개 만들어 서로 같은 위치에 위치해두게 함
// 또한, cmath를 이용해 round를 쓰게 되면 첫째자리에서 반올림을 해줌
// 두번째로 중복되는 수를 출력시킬려고 bool을 사용해 첫번째 발견시 true로 만들고 두번째때 출력되게 만듦
// 
//int main()
//{
//	int trial;
//	vector<int> array;
//	vector<int> count;
//	double ans1 = 0;
//	int ans2 = 0;
//	int ans3 = 0;
//	int ans4 = 0;
//	bool comp = false;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		ans1 += temp;
//
//		array.push_back(temp);
//	}
//
//	sort(array.begin(), array.end());
//
//	//1번
//	ans1 = round(ans1 / trial);
//
//	//2번
//	ans2 = array[array.size() / 2];
//
//	//3번
//	int sameCount = 1;
//	for (int i = 0; i < trial; i++) //여기수정
//	{
//		if (trial == 1)
//		{
//			count.push_back(1);
//		}
//		else 
//		{
//			if (i + 1 == trial-1 && array[i] == array[i + 1])
//			{
//				count.push_back(0);
//				count.push_back(sameCount+1);
//				break;
//			}
//			else if (i + 1 == trial-1 && array[i]!=array[i+1])
//			{
//				count.push_back(sameCount);
//				count.push_back(1);
//				break;
//			}
//			else if (array[i] == array[i + 1])
//			{
//				sameCount += 1;
//				count.push_back(0);
//			}
//			else
//			{
//				count.push_back(sameCount);
//				sameCount = 1;
//			}
//		}
//	}
//
//	int compare;
//	for (int i = 0; i < trial; i++)
//	{
//		if (i == 0)
//		{
//			compare = count[i];
//			ans3 = array[i];
//		}
//		else if (compare < count[i])
//		{
//			compare = count[i];
//			ans3 = array[i];
//		}
//	}
//	//중복확인
//	for (int i = 0; i < trial; i++)
//	{
//		if (compare == count[i])
//		{
//			if (comp == false)
//				comp = true;
//			else
//			{
//				ans3 = array[i];
//				break;
//			}
//		}
//	}
//
//
//	//4번
//	ans4 = array.back()-array.front();
//
//	cout << ans1 << "\n" << ans2 << "\n" << ans3 << "\n" << ans4;
//}