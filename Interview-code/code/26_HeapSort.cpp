#define MAXSIZE 100
#include "26.h"
//时间复杂度为O(nlogn)
typedef struct
{
	double data;
	double length;
	int r[MAXSIZE];
}Sqlist;

void HeapAdjust(Sqlist *L, int s, int m)
{
	int j, temp;
	temp = L->r[s];
	for (j = s * 2; j <= m; j*=2)
	{
		if (j<m  && L->r[j] < L->r[j + 1])
		{
			++j;
		}
		if (temp >= L->r[j])
		{
			break;
		}
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[j] = temp;
}

void swap(Sqlist *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void HeapSort(Sqlist *L)
{
	for (int i = L->length / 2; i > 0; i--)
	{
		HeapAdjust(L, i, L->length);
	}

	for (int i=L->length; i >1; i--)
	{
		swap(L, 1, i);
		HeapAdjust(L, 1, i - 1);
	}
}