#include"26.h"
#define MAXSIZE 10
//时间复杂度为：

void MergeSort(Sqlist *L)
{
	Msort(L->r, L->r, 1, L->length);
}

void Msort(int SR[], int TR1[], int s, int t)
{
	int m;
	int TR2[MAXSIZE + 1];
	if (t == s)
		TR1[s] = SR[s];
	else
	{
		m = (t + s) / 2;
		Msort(SR, TR2, s,  m);
		Msort(SR, TR2, m + 1, t);
		Merge(TR2, TR1, s, m, t);

	}
}

void Merge(int SR[], int TR[], int i, int m, int n)
{
	int j,l,k;
	for (j = m + 1, k = i; j <= n && i <= m; k++)
	{
		if (SR[i] < SR[j])
			TR[k] = SR[i++];
		else
		{
			TR[k] = SR[j++];
		}

		if (i < m)
		{
			for (l = 0; l = m - i; l++)
			{
				TR[k + 1] = SR[i + 1];
			}
		}

		if (j < n)
		{
			for (l = 0; l = m - j; l++)
			{
				TR[k + 1] = SR[j + 1];
			}
		}
	}
}