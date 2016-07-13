#include<stdio.h>

void fun(int i)
{
	static int value = i++;
	value = i++;
	printf("%d\n", value);
}

int main()
{

	fun(5);
	fun(1);
	fun(2);

	return 0;
}