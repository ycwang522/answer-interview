// 题目描述
//
// 写出一个程序
// 接受一个有字母和数字以及空格组成的字符串，和一个字符
// 然后输出输入字符串中含有该字符的个数。不区分大小写
//
//=====================ycwang=============

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int Number_Char(string s, char ch)
{
	int number = 0;
	if (s.empty())
		return 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ch)
		{
			++number;
		}
		else
			;
	}
	
	return number;
}

int main()
{
	string str;
	cin >> str;
	char ch;
	cin >> ch;
	int LengthOfChar = Number_Char(str,ch);
	cout << LengthOfChar << endl;
	return 0;
}


/*题目描述
 写出一个程序
 接受一个有字母和数字以及空格组成的字符串，和一个字符
 然后输出输入字符串中含有该字符的个数。不区分大小写。*/
//
//======================AUTHOR:ycwang================

#include<iostream>

using std::cin;
using std::cout;
using std::endl;


int Number_Char(char a[], char b)
{
	char *p = a;	//定义一个指向字符串的指针
	int number = 0;	//保留，用作保存b的长度
	if (a == NULL)	//判断字符串是否为空串
		return 0;

	while (*p)
	{
		if (*p == b)
		{
			++number;
			++p;
		}
		else
			++p;
	}
	return number;
}

int main()
{
	char ch[400] = {};
	cin >> ch;
	char ch1;
	cin >> ch1;
	int LengthOfChar = Number_Char(ch, ch1);
	cout << LengthOfChar << endl;
	return 0;
}
