#define _CRT_SECURE_NO_WARNINGS
#include"public.h"

int main()
{
	char ccString1[] = "Is Page Fault??";
	cout << &ccString1[0]<<endl;
	char ccString2[] = "No Page Fault??";
	cout << &ccString2[0] << endl;
	strcpy(ccString1, "No");
	if (strcmp(ccString1, ccString2) == 0)
		cout << ccString2;
	else
		cout << ccString1;
	system("pause");
}