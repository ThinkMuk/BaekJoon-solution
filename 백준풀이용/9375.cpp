#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int trial;
	cin >> trial;
	//
	for (int i = 0; i < trial; i++)
	{
		int answer = 1;
		int inputClothes;
		string input1, input2;
		vector<pair<string, int>> clothes;
		cin >> inputClothes;

		for (int i = 0; i < inputClothes; i++)
		{
			cin >> input1 >> input2;

			if (clothes.size() == 0)
			{
				clothes.push_back(make_pair(input2, 1));
				continue;
			}

			for (int j = 0; j < clothes.size(); j++)
			{
				if (input2 == clothes[j].first)
				{
					clothes[j].second++;
					break;
				}
				if (j == clothes.size() - 1)
					clothes.push_back(make_pair(input2, 0));
			}
		}
		for (int i = 0; i < clothes.size(); i++)
			answer *= (clothes[i].second + 1);


		cout << answer - 1 << "\n";
	}

}