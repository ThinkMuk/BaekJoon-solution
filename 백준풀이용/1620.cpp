//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
// map�� Ȱ���� �˻��� �ϴ� ������ �غ��Ҵ�.
// ���� list�� �� �޾Ƶΰ� �˻��ϴ� �������� int �� string�� ��� �����־,
// ���� list�� �޴� ������ �켱 ��� string���� ���Ͻ�Ų �� �޾Ҵ�
// ����, key�� �Է¹����� find �ϴ� ������ map�� �����̶� 2���� map�� �����ΰ�
// ���� �Ѱ��� �������� ������, ���� (string ����)�� �����Ǿ� �ִ� ���� search�ϵ��� �ڵ��ߴ�.
// 
// * find�� �ؼ� �޴°Ŵ� map�� ��ġ�� �޴°��̱� ������ auto �Լ������� �ϴ� �ް�, �� �ڿ� ����� �� �� �ֵ���
// �ߴ�.
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