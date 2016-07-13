#define _CRT_SECURE_NO_WARNINGS 
#include"public.h"

//void getmemory(char *&p)
//{
//	p = (char *)malloc(10 * sizeof(char));
//}

//int main()
//{
//	char *str = NULL;
//	getmemory(str);
//	strcpy(str, "hello,world");
//	printf(str);
//	return 0;
//}

//int func1(int i = 1,int j = 2)
//{
//
//	return i + j;
//}
//
//int main()
//{
//	cout << func1(3) << endl;
//	system("pause");
//}

int f(int x)
{
	return ((x > 2) ? x*f(x - 1) : 3);
}
int main()
{
	/*int m[4] = { 0 };
	int n[4] = { 1 };
	for (int i = 0; i < 4; ++i)
	{
		cout << m[i] << endl;
		
	}
	for (int i = 0; i < 4; ++i)
	{
		cout << n[i] << endl;

	}*/

	cout << f(f(2)) << endl;
	return 0;
}