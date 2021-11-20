#include <iostream>
#include <queue>
using namespace std;

//�⺻���� priority_queue �� �ִ����� ��Ÿ���� ������ �ִ�. �׸��� �̸� �����ϱ� ���ؼ�
// priority_queue<int, vector<int>> q; �� ���� ������� ������ �Ѵ�.
// ������, �������� �䱸�ϴ� �ּ����� ������� ����� �ҷ���
// �Ʒ��� ���� ������� ȣ���� �ؾ� �ּ����� �������� ����� �ȴ�.
// 
// priority queue, �׸��� �ּ��� �ִ����� ���� �ڼ��� ������ �����Ű�� ������ �Ʒ� �ּҷ� ���� �����ϸ� ���� �� ����.
// https://breakcoding.tistory.com/123
// 
// ****
// ó���� �ð��ʰ��� ����.
// �̸� �ذ��ϱ� ���ؼ��� int main��
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// �� ��� ������ �����ִ� ����� �ܿ����°͵� �ϳ��� ����� �� �� ����.

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> minHeap;
	int trial;

	cin >> trial;

	for (int i = 0; i < trial; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (minHeap.empty())
				cout << 0 << "\n";
			else {
				cout << minHeap.top() << "\n";
				minHeap.pop();
			}
		}
		else {
			minHeap.push(temp);
		}
	}
}