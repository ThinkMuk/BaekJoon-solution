//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
// map을 활용해 검색을 하는 문제를 해보았다.
// 도감 list를 다 받아두고 검색하는 과정에서 int 와 string이 모두 섞여있어서,
// 도감 list를 받는 값부터 우선 모두 string으로 통일시킨 뒤 받았다
// 또한, key를 입력받으면 find 하는 형식이 map의 형식이라 2개의 map을 만들어두고
// 만약 한곳에 존재하지 않을시, 숫자 (string 형식)이 보관되어 있는 곳을 search하도록 코딩했다.
// 
// * find를 해서 받는거는 map에 위치를 받는것이기 때문에 auto 함수형으로 일단 받고, 그 뒤에 출력을 할 수 있도록
// 했다.
// 
//map<string, string> namePokemon;
//map<string, string> numPokemon;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int insertNum, outNum;
//	cin >> insertNum >> outNum;
//
//	for (int i = 1; i <= insertNum; i++)
//	{
//		string temp;
//		string tempI = to_string(i);
//		cin >> temp;
//		namePokemon.insert(make_pair(temp, tempI));
//		numPokemon.insert(make_pair(tempI, temp));
//	}
//
//	for (int i = 0; i < outNum; i++)
//	{
//		string temp;
//		cin >> temp;
//		if (namePokemon.find(temp) == namePokemon.end()) {
//			if (numPokemon.find(temp) == numPokemon.end()) {
//				continue;
//			}
//			else {
//				auto iter = numPokemon.find(temp);
//				cout << iter->second << "\n";
//			}
//		}
//		else {
//			auto iter = namePokemon.find(temp);
//			cout << iter->second << "\n";
//		}
//	}
//
//	return 0;
//}