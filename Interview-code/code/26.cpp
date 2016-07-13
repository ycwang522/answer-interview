
typedef struct
{
	double data;
	int length;
	int r[50];
}Sqlist;

void HeapAdjust(Sqlist *L, int s, int m)
{
	int temp, j;
	temp = L->r[s];
	for (j = 2 * s; j <= m; j *= 2)
	{
		if (j<m && L->r[j]<L->r[j+1])
		{
			++j;
		}
		if (temp>=L->r[j])
		{
			break;
		}
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = temp;
}

void swap(Sqlist *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

//对顺序表进行堆排序
void HeapSort(Sqlist *L)
{
	for (int i = L->length / 2; i > 0; i--)
	{
		HeapAdjust(L, i, L->length);
	}

	for (int i = L->length; i > 1; i--)
	{
		swap(L, 1, i);//将堆顶记录和未经过排序子序列的最后一个记录交换
		HeapAdjust(L, 1, i - 1);
	}
}