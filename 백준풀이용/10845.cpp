//#include <iostream>
//#include <queue>
//using namespace std;
//
// 자료구조중 queue라는것에 대해 배워봄
// 
//int main()
//{
//	int trial;
//	queue<int> array;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		string command;
//		cin >> command;
//
//		if (command == "push")
//		{
//			int temp;
//			cin >> temp;
//			array.push(temp);
//		}
//		else if (command == "pop")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//			{
//				int temp = array.front();
//				array.pop();
//				cout << temp << "\n";
//			}
//		}
//		else if (command == "size")
//		{
//			cout << array.size() << "\n";
//		}
//		else if (command == "empty")
//		{
//			if (array.empty())
//				cout << "1" << "\n";
//			else
//				cout << "0" << "\n";
//		}
//		else if (command == "front")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//				cout << array.front() << "\n";
//		}
//		else if (command == "back")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//				cout << array.back() << "\n";
//		}
//		else
//		{
//			cout << "WRONG COMMAND\n";
//		}
//	}
//}