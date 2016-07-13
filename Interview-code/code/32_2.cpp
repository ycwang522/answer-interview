#include < stdio.h>
char * a = "you", b[] = "welcome # you # to # China!";
main()
{
	int i, j = 0; char *p;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (*a == b[i])
		{
			p = &b[i];
			for (j = 0; a[j] != '\0'; j++)
			{
				if (a[j] != *p)
					break;
				p++;
			}
			if (a[j] != '\0')
				break;
		}
	}
	printf("%s\n", p);
}