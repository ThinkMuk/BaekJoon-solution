//#include <iostream>
//#include <map>
//using namespace std;
//
// vector�� pair�� �̿��� �ڷḦ �����ҷ� ������ �ƹ����� ã�Ƽ� ����ϴ� �������� �ð��� ���� ������
// �ð��ʰ��� �����ȴ�...
// �׷��� ã�ƺ��� map�̶�� ���̺귯���߿� ģ���ϰ� ������ִ°� �־���.
// �ٵ� ���� ã�ƺ��� map�� �ڷ��� ����, ������ �� ���� �ð��� �ɸ��ٰ� �Ѵ�. (�׷� ���ʹ� �󸶳� �� �ɸ�����..?)
// ���߿� �ٽ� �Ⱦ�� map ���̺귯���� ���� �� ��� ������ �Ǿ��ִ��� ���캸�ƾ� �� �� ����.
// �׸��� cin.tie(NULL) �̶� ios::sync_with_stdio(false)�� �ʿ������� ���� �ʿ��Ѱ����� �� �ܿ��δ� ������
// �鿩�־� �� �� �ϴ�.
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


//--------------------------------------(vector���� pair �Լ��� ��� �������� ����) ������ �ð� �ʰ� ����.
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