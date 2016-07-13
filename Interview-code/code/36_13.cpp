#include"public.h"

static int a = 1;

void fun1()
{
	a = 2;
}
void fun2()
{
	int a = 3;
}
void fun3()
{
	static int a = 4;
}
int main()
{
	cout << a << endl;
	fun1();
	cout << a << endl;
	fun2();
	cout << a << endl;;
	fun3();
	cout << a << endl;
	system("pause");
}
