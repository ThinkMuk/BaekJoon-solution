#include <iostream>
using namespace std;

int main()
{
	int tempCount[501];
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		int count = 0;
		int temp = i;

		while (true)
		{
			if (temp % 5 == 0) {
				count++;
				temp /= 5;
			}
			else
				break;
		}
		tempCount[i] = count;
	}
	int answer = 0;

	for (int i = 1; i <= num; i++) 
	{
		answer += tempCount[i];
	}

	cout << answer << '\n';
	return 0;
}