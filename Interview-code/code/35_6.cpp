//#include"public.h"
//#include<string>
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//	int check(char ch[]);
//	string str = "I am string type.";
//	char ch[] = "I am char type";
//	cout << str << endl << ch << endl;
//	cout << "���롰����Ӣ�ģ�";
//	cin >> str;
//	if (str == "pig")
//	{
//		cout << "������ȷ��" << endl;
//		cout << "�õ��ʵĵ�һ����ĸΪ" << str[0] << endl;
//	}
//	else
//		cout << "ERROR INPUT!" << endl;
//
//	cout << "�����롰������Ӣ�ĵ��ʣ�";
//	cin >> ch;
//	if (check(ch) == 1)
//	{
//		cout << "������ȷ��" << endl;
//		cout << "�õ��ʵ�����ĸ�ǣ�" << ch[0] << endl;
//	}
//	else
//		cout << "ERROR INPUT!" << endl;
//	
//
//}
//
//int check(char ch[])
//{
//	bool choice = false;
//	char ch1[] = "dog";
//	for (int i = 0; i < strlen(ch1); i++)
//	{
//		if (ch[i] != ch1[i])
//		{
//			break;
//			choice = true;
//		}
//	}
//	if (choice == true)//�����
//		return 0;
//	else
//		return 1;
//
//}

#include"public.h"
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str = "I am string type.";
	char ch[] = "I am char type.";
	cout << "str:" << str << endl
		<< "ch:" << ch << endl;
	int checkInput(char ch[]);
	cout << "�����롰ѧ������Ӣ�ĵ��ʣ�";
	cin >> ch;
	if (strcmp(ch,"student")==0)
	{
		cout << "������ȷ��" << endl;
		cout << "�õ��ʵ�����ĸ�ǣ�" << ch[0] << endl;
	}
	else
		cout << "�������" << endl;

	cout << "�����롰��ʦ����Ӣ������";
	cin >> str;
	if (str == "teacher")
	{
		cout << "Right Input!" << endl;
		cout << "�õ��ʵ�����ĸ�ǣ�" << str[0] << endl;
	}
	else
		cout << "ERROR��INPUT��" << endl;

	return 0;

}

int checkInput(char ch[])
{
	bool checkBool = false;
	char ch1[] = "student";
	for (int i = 0; i < (strlen(ch1)); i++)
	{
		if (ch[i] != ch1[i])
		{
			checkBool = true;	//���߲����
			break;
		}
	}
	if (checkBool == true)
	{
		return 0;
	}
	else
		return 1;//��ʾ�������
}
