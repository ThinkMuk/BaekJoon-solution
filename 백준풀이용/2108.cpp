//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
// �������� ������������ ����°���� �ߺ��Ǵ� ��츦 �� �ľ��ؼ� ü�������� ����°��� ����.
// �迭�� 2�� ����� ���� ���� ��ġ�� ��ġ�صΰ� ��
// ����, cmath�� �̿��� round�� ���� �Ǹ� ù°�ڸ����� �ݿø��� ����
// �ι�°�� �ߺ��Ǵ� ���� ��½�ų���� bool�� ����� ù��° �߽߰� true�� ����� �ι�°�� ��µǰ� ����
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
//	//1��
//	ans1 = round(ans1 / trial);
//
//	//2��
//	ans2 = array[array.size() / 2];
//
//	//3��
//	int sameCount = 1;
//	for (int i = 0; i < trial; i++) //�������
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
//	//�ߺ�Ȯ��
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
//	//4��
//	ans4 = array.back()-array.front();
//
//	cout << ans1 << "\n" << ans2 << "\n" << ans3 << "\n" << ans4;
//}