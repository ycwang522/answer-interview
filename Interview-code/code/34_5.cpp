#include<stdio.h>
#include<string>

int main()
{
	char *str1 = "0123456789";
	printf("%d",strlen(str1));

	return 0;
}

int strlen(char *string)
{
	int length = 0;
	while (*string++ != '\0')
		length += 1;
	return length;
}