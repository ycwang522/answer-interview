#include"public.h"

#define TRUE 1
#define FALSE 0

int find_char(char **strings, char value)
{
	char *string;	//当前正在查找的字符串

	while ((string = *strings++) != NULL)
	{
		while (*strings != '\0')
		{
			if (*string++ == value)
			{
				return TRUE;
			}
		}
	}

	return FALSE;
}

int main()
{
	//int a[5] = { 1, 2, 3, 4, 5 };
	//printf("\t%x\n", a);
	//cout << "\t"<<sizeof(a) << endl;
	//cout << *(a+1) << endl;
	//printf("\t%x\n", &a);
	//cout << (int *)(&a + 1) << endl;
	//

	//cout << a << endl;
	//cout << &a << endl;
	//cout << &a[0] << endl;

	//return 0;
	//
	//int array[10], *ap;
	//for (ap = array; ap < array + 10; ap++)
	//	*ap = 0;

	int a[2][3] = { 1, 2, 3, 4,5,6 };
	cout << a << endl;
	cout << sizeof(a) << endl;
	cout << (*(a+1)) << endl;
	//char message[] = "message";
	//char *message1 = "message";
	//cout << sizeof(message) << endl;
	//cout << sizeof(message1) << endl;
	system("pause");
}

