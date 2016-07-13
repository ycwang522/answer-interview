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
//	cout << "输入“猪”的英文：";
//	cin >> str;
//	if (str == "pig")
//	{
//		cout << "输入正确！" << endl;
//		cout << "该单词的第一个字母为" << str[0] << endl;
//	}
//	else
//		cout << "ERROR INPUT!" << endl;
//
//	cout << "请输入“狗”的英文单词：";
//	cin >> ch;
//	if (check(ch) == 1)
//	{
//		cout << "输入正确！" << endl;
//		cout << "该单词的首字母是：" << ch[0] << endl;
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
//	if (choice == true)//不相等
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
	cout << "请输入“学生”的英文单词：";
	cin >> ch;
	if (strcmp(ch,"student")==0)
	{
		cout << "输入正确！" << endl;
		cout << "该单词的首字母是：" << ch[0] << endl;
	}
	else
		cout << "输入错误！" << endl;

	cout << "请输入“老师”的英文名：";
	cin >> str;
	if (str == "teacher")
	{
		cout << "Right Input!" << endl;
		cout << "该单词的首字母是：" << str[0] << endl;
	}
	else
		cout << "ERROR　INPUT！" << endl;

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
			checkBool = true;	//两者不相等
			break;
		}
	}
	if (checkBool == true)
	{
		return 0;
	}
	else
		return 1;//表示两者相等
}
