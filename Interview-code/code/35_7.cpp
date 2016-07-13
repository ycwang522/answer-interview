#define  _CRT_SECURE_NO_WARNINGS
#include"public.h"
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char ch1[] = "what is your name?";
	char ch2[] = "My name is Jane!";
	cout << "ch1:" << ch1 << endl
		<< "ch2" << ch2 << endl;
	strcpy(ch1, ch2);
	cout << "ch1:" << ch1 << endl
		<< "ch2" << ch2 << endl;

	string str1 = "what is your name?";
	string str2 = "My name is Jane!";
	cout << "ch1:" << str1 << endl
		<< "ch2" << str2 << endl;
	str1 = str2;
	cout << "ch1:" << str1 << endl
		<< "ch2" << str2 << endl;
	return 0;

}