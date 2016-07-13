#include"public.h"

char fun(char x, char y)
{
	if (x)
		return(y);
}


int main()
{
	int a = '¦È', b = '1', c = '2';
	printf("%c\n", fun(fun(a, b), fun(b, c)));
	system("pause");
}