//#include <iostream>
//#include <queue>
//using namespace std;
//
// 1927���� minHeap ������ ����Ǵ� �����̴�.
// �⺻���� priority_queue�� �ִ����� ��Ÿ���� ������ �־�, priority_queue<int, vector<int> �� �����ϸ�
// �ٷ� �ִ����� �ڷᱸ���� �ϼ��� �ȴ�.
// *������, �ּ����� �����ų���� priority_queue<int, vector<int>, greater<int>> minHeap; ������ �����ؾ� �Ѵ�.
// �ð��ʰ��� �̸� ������Ű�� ���� 13,14,15�ٿ� �����ִ� �ڵ带 ����Ͽ���.
// �ڵ��鿡���� ���� ����������, priority_queue��� �ڷᱸ������ �ٽ� �����ϸ鼭
// Ǯ��� ������ �� �� ����.
// 
//int main()
//{
//	ios_base::sync_with_stdio(false); 
//	cin.tie(NULL); 
//	cout.tie(NULL);
//
//	priority_queue<int, vector<int>> maxHeap;
//	int trial;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		int temp;
//		cin >> temp;
//		if (temp == 0) {
//			if (maxHeap.empty())
//				cout << 0 << "\n";
//			else {
//				cout << maxHeap.top() << "\n";
//				maxHeap.pop();
//			}
//		}
//		else {
//			maxHeap.push(temp);
//		}
//	}
//
//	return 0;
//}