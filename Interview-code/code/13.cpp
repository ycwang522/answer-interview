#include<iostream>
#include<limits.h>

int main()
{
	std::cout << "整型的最大数为：" << INT_MAX << std::endl<<"整型的最小数为："<<INT_MIN
		<<"\nUINT_MAX="<<UINT_MAX;
	std::cout << "long型的最大数为：" << LONG_MAX << std::endl << "long型的最小数为：" << LONG_MIN
		<< "\nULONG_MAX=" << ULONG_MAX;
	return 0;
}