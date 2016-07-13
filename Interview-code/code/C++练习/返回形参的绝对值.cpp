/*
**编写一个函数，返回其形参的绝对值。
*/
#include<iostream>

using namespace std;

int abs(int number)
{
	if (number < 0)
	{
		return -number;
	}
	else
		return number;
}


int main2()
{
	int number = 1256989;
	abs(number);
	std::cout << abs(number) << std::endl;
	return 0;
}