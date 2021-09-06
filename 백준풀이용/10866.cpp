//#include <iostream>
//#include <deque>
//using namespace std;
//
// deque라는 자료구조에 대해 배워봄
// 
//int main()
//{
//	int trial;
//	deque<int> array;
//
//	cin >> trial;
//
//	for (int i = 0; i < trial; i++)
//	{
//		string command;
//		cin >> command;
//
//		if (command == "push_front")
//		{
//			int temp;
//			cin >> temp;
//			array.push_front(temp);
//		}
//		else if (command == "push_back")
//		{
//			int temp;
//			cin >> temp;
//			array.push_back(temp);
//		}
//		else if (command == "pop_front")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << array.front() << "\n";
//				array.pop_front();
//			}
//		}
//		else if (command == "pop_back")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << array.back() << "\n";
//				array.pop_back();
//			}
//		}
//		else if (command == "size")
//		{
//			cout << array.size() << "\n";
//		}
//		else if (command == "empty")
//		{
//			cout << array.empty() << "\n";
//		}
//		else if (command == "front")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << array.front() << "\n";
//			}
//		}
//		else if (command == "back")
//		{
//			if (array.empty())
//				cout << "-1\n";
//			else
//			{
//				cout << array.back() << "\n";
//			}
//		}
//		else
//		{
//			cout << "WRONG COMMAND\n";
//		}
//	}
//}