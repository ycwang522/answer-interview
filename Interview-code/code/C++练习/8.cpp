#include<iostream>

int jiecheng(int number)
{
	int ret = 1;
	for (int i = 1; i <= number; i++)
	{ 
		ret = ret*i;
	}
	return ret;
}

int jiecheng2(int number)
{
	int ret = 1;
	while (number>1)
	{
		ret *= number--;
	}
	return ret;
}

int main8()
{
	std::cout << "Please enter a int number:";
	int m;
	std::cin >> m;
	std::cout << "��׳˵Ľ��Ϊ��" << jiecheng(m) << std::endl;
	std::cout << "��׳˵Ľ��Ϊ��" << jiecheng2(m) << std::endl;
	return 0;
}