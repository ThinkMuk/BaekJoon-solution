//#include <iostream>
//#include <vector>
//using namespace std;
//
////3중포문과 preNode, curNode를 사용해 전층에 있는 데이터를 가져와서 자료를 구하는 형식.
////처음으로 vector 함수에서 swap을 사용해봄
// 의문점: 메모리 소모가 커 보이는데 더 효율적인 방법은 없나?
//
//int main()
//{
//	int trial;
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int floor;
//		int address;
//		vector<int> preNode;
//		vector<int> curNode;
//		cin >> floor >> address;
//
//		if (floor == 0)
//			cout << address << "\n";
//		else
//		{
//			for (int b = 1; b <= address; b++)
//			{
//				preNode.push_back(b);
//				curNode.push_back(b);
//			}
//
//			for (int a = 1; a <= floor; a++) //층수 올라가는거
//			{
//				preNode.swap(curNode);
//				for (int j = 0; j < address; j++) //호수 하나씩 하나씩 구해나가는 과정
//				{
//					int temp = 0;
//					for (int k = 0; k < j+1; k++) //주소의 횟수만큼 curNode에 더해주는 과정
//					{
//						temp += preNode[k];
//					}
//					curNode[j] = temp;
//				}
//			}
//			cout << curNode[address - 1] << "\n";
//		}
//	}
//}