#include<iostream>
#include<string>

using namespace std;

int main()
{
	char b[]= "I love Java";
	char *p = NULL;
	for (int i = 0; i < 5; i++)
	{
		p = &b[i];
		printf("%s", p);
		p++;
		printf("\n%s", p);
	}

	return 0;

}


