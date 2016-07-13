#include<stdio.h>
#include<time.h>

int *middata(int a[], int n)
{
	int *p = NULL;
	int mid = a[0];
	p = a;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<mid)
		{
			mid = a[i];
			p = &a[i];
		}
	}
	printf("\n最小的数是%d", *p);
	return p;
}

int main()
{
	while (1)
	{
		int a[10];
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			a[i] = rand() % 100;
			printf("\n%d", a[i]);
		}
		int *px = middata(a, 10);

		system("pause");
	}
}