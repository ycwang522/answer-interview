#include"26.h"
//时间复杂度为O（n^2）
void Bubble0(Sqlist *L)
{
	for (int i = 0; i < L->length - 1; i++)
		for (int j = i + 1; j < L->length; j++)
		{
			if (L->r[i]>L->r[j])
				swap(L, i, j);
		}
}


void Bubble1(Sqlist *L)
{
	for (int i = 0; i < L->length - 1; i++)
		for (int j = L->length - 2; j >= i; j--)
		{
			if (L->r[j]>L->r[j + 1])
				swap(L, j, j + 1);
		}
}


void Bubble2(Sqlist *L)
{
	bool flag = true;
	for (int i = 0; i < L->length - 1 && flag; i++)
		flag = false;
		for (int j = L->length - 2; j >= i; j--)
		{
			if (L->r[j] > L->r[j + 1])
			{
				swap(L, j, j + 1);
				flag = true;
			}
			
		}
}


void Merge(int SR[], int TR[], int i, int m, int n)
{
	int j, k, l;
	for (j = m + 1, k = i; i <= m && j <= n; k++)
	{
		if (SR[i] < SR[j])
			TR[k] = SR[i++];
		else
			TR[k] = SR[j++];
	}
	if (i < m)
	{
		for (l = 0; l < m - i; l++)
			TR[k + 1] = SR[i + 1];
	}

	if (j < n)
	{
		for (l = 0; l = n - j; l++)
			TR[k + 1] = SR[j + 1];
	}
}