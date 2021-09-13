//#include <iostream>
//#include <map>
//using namespace std;
//
// vector의 pair을 이용해 자료를 정리할려 했지만 아무래도 찾아서 출력하는 과정에서 시간이 많이 들어갔는지
// 시간초과가 나버렸다...
// 그래서 찾아보니 map이라고 라이브러리중에 친절하게 만들어주는게 있었다.
// 근데 글을 찾아보니 map도 자료의 생성, 삭제에 꽤 많은 시간이 걸린다고 한다. (그럼 벡터는 얼마나 더 걸린거지..?)
// 나중에 다시 훑어볼때 map 라이브러리를 직접 뜯어서 어떻게 구조가 되어있는지 살펴보아야 할 것 같다.
// 그리고 cin.tie(NULL) 이랑 ios::sync_with_stdio(false)는 필연적으로 많이 필요한가보다 좀 외워두는 습관을
// 들여둬야 할 듯 하다.
// 
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	map<string,string> saveWeb;
//	int saveTrial;
//	int outTrial;
//
//	cin >> saveTrial >> outTrial;
//
//	for (int i = 0; i < saveTrial; i++)
//	{
//		string tempWeb, tempPS;
//		cin >> tempWeb >> tempPS;
//		saveWeb[tempWeb] = tempPS;
//	}
//
//	for (int i = 0; i < outTrial; i++)
//	{
//		string tempWeb;
//		cin >> tempWeb;
//		
//		cout << saveWeb[tempWeb] << "\n";
//	}
//}


//--------------------------------------(vector에서 pair 함수를 사용 했을때의 예시) 하지만 시간 초과 났음.
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	vector<pair<string, string>> saveWeb;
//	int saveTrial;
//	int outTrial;
//
//	cin >> saveTrial >> outTrial;
//
//	for (int i = 0; i < saveTrial; i++)
//	{
//		string tempWeb, tempPS;
//		cin >> tempWeb >> tempPS;
//		saveWeb.push_back(make_pair(tempWeb, tempPS));
//	}
//
//	for (int i = 0; i < outTrial; i++)
//	{
//		string tempWeb;
//		cin >> tempWeb;
//		for (int j = 0; j < saveWeb.size(); j++)
//		{
//			if (saveWeb[j].first == tempWeb)
//				cout << saveWeb[j].second << "\n";
//		}
//	}
//}