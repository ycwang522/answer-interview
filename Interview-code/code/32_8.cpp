//指针与数组
#include<iostream>
using namespace std;

int main()
{
	char ch1[] = "abc";
	char ch2[] = "abc";
	cout << "ch1=" << &ch1 << endl << "ch2=" << &ch2 << endl;
	const char ch3[] = "abc";
	const char ch4[] = "abc";
	cout << "ch3=" << ch3 << endl << "ch4=" << ch4 << endl;

	char *ptr5 = "abc";
	char *ptr6 = "abc";
	cout << "ptr5=" << ptr5 << endl << "ptr6=" << ptr6 << endl;

	const char *ptr7 = "abc";

	const char *ptr8 = "abc";
	cout << "ptr7=" << ptr7 << endl << "ptr8=" << ptr8 << endl;


	std::cout << (ch1 == ch2) << std::endl;
	std::cout << (ch3 == ch4) << std::endl;
	std::cout << (ptr5 == ptr6) << std::endl;
	std::cout << (ptr7 == ptr8) << std::endl;
}