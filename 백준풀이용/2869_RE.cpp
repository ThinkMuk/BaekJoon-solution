//#include <iostream>
//using namespace std;
//
////�䱸�ϴ� ���ڰ� �ڿ��� �ʹ� Ŀ�� while���� �̿��ϸ� �ð��ʰ��� ���� ��������.
////while�����δ� Ǫ�°��� ����������
////�������� day�� ����ϴ� ������ �� ������ �ƴ��� ���ذ� �� ���� �ʴ´� ...
////...�ȵǸ� �ܿ�����
////(��ü����-�����°Ÿ�) / (�����°Ÿ�-�������°Ÿ�) �̴�. �� ����ص־��ҵ�
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	long long climb;
//	long long fall;
//	long long tree;
//
//	cin >> climb >> fall >> tree;
//
//	long long day = 1;
//
//	day += (tree - climb) / (climb - fall);
//
//	if ((tree - climb) % (climb - fall) != 0) //�������� ���
//		day++;
//	if (climb >= tree) //����ó��
//		cout << "1";
//	else
//		cout << day; //����ó�� ����� ���� ���
//}
//		
//	//������ ���̱� �ѵ� �̷��� �ϸ� �ð��ʰ��� �߻��� *���ʿ� while�� ��� ���ϰ� �صа���
//	//long long temp = 0;
//	//while (1)
//	//{
//	//	temp += climb;
//
//	//	if (temp >= tree)
//	//		break;
//
//	//	temp -= fall;
//	//	day++;
//	//}
//	//cout << day;
