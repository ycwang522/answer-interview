#include<stdlib.h>
#include<string.h>

void test2()
{
	char string[10], str1[10];
	int i;
	for (i = 0; i<10; i++)
	{
		str1[i] = 'a';
	}
	str1[9] = '\0';
	strcpy(string, str1);
} 