// ��Ŀ����
//
// д��һ������
// ����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ�
// Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд
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


/*��Ŀ����
 д��һ������
 ����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ�
 Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд��*/
//
//======================AUTHOR:ycwang================

#include<iostream>

using std::cin;
using std::cout;
using std::endl;


int Number_Char(char a[], char b)
{
	char *p = a;	//����һ��ָ���ַ�����ָ��
	int number = 0;	//��������������b�ĳ���
	if (a == NULL)	//�ж��ַ����Ƿ�Ϊ�մ�
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
