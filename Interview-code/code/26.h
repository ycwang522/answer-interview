
typedef struct
{
	double data;
	int length;
	int r[50];
}Sqlist;

void swap(Sqlist *L, int i, int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void HeapSort(Sqlist *L, int s, int m)
{
	int temp, j;
	temp = L->r[s];
	for (j = 2 * s; j <= m; j *= 2)
	{
		if (L->r[j]<L->r[j+1])
		{
			++j;
		}
		if (temp>L->r[j])
		{
			break;
		}
		L->r[s] = L->r[j];
		s = j;
	}
	L->r[s] = temp;

}