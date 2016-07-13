#include"26.h"

void QuickSort(Sqlist *L)
{
	;
}

void Qsort(Sqlist *L, int low, int high)
{
	int pivotkey;
	if (low < high)
	{
		pivotkey=QsortPartition(L,low,high);
		
		Qsort(L, low, pivotkey);
		Qsort(L, pivotkey + 1, high);

	}

}

int  QsortPartition(Sqlist *L,int low,int high)
{
	int pivotkey = L->r[low];
	while (low <high)
	{
		while (low<high && L->r[high]>=pivotkey)
		{
			high--;
		}
		swap(L, low, high);
		while (low<high && L->r[low]<=pivotkey)
		{
			low++;
		}
		swap(L, low, high);
	}
	return high;

}