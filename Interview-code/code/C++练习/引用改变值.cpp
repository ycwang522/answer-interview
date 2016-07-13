//ÒıÓÃ
#include<iostream>

using namespace std;

void exchange(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main5()
{
	int a = 5;
	int b = 6;
	std::cout << "a=" << a << " " << "b=" << b << std::endl;
	exchange(a, b);
	std::cout << "a=" << a << " " << "b=" << b << std::endl;
	return 0;
}