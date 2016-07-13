//数组的长度
//数组与指针

#include<stdio.h>
#include<stdlib.h>

int getsize(int a[])
{
	return sizeof(a);
}


int main()
{
	int b[5] = { 1, 2, 4, 5, 6 };
	int size1 = sizeof(b);
	printf("%d", size1);

	int *b1 = b;
	int size2 = sizeof(b1);
	printf("\n%d", size2);

	int size3 = getsize(b);
	printf("\n%d\n", size3);

	return 0;
}