//交换两个int 型指针所指向的值，调用并检验该函数，输出交换后的值。
#include<iostream>

void exchange(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main3()
{
	int a = 5;
	int b = 8; 
	std::cout << "交换之前：a=" << a << " " << "b=" << b << std::endl;
	exchange(&a, &b);
	std::cout << "交换之后：a=" << a << " " << "b=" << b << std::endl;
	return 0;

}