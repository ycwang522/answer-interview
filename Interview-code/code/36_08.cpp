#include"public.h"

#define MAXSIZE 100
typedef struct
{
	int r[MAXSIZE + 1];
	int length;
}Sqlist;

void swap(Sqlist *L, int i, int j)	//½»»»Ëã·¨
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void BubbleSort0(Sqlist *L)
{
	if (L == 0)
		return;
	for (int i = 0; i < L->length - 1; i++)
	{
		for (int j = i + 1; j < L->length; j++)
		{
			if (L->r[i]>L->r[j])
			{
				swap(L, i, j);
			}
		}
	}
}

void BubbleSort1(Sqlist *L)
{
	if (L == NULL)
		return;
	for (int i = 0; i < L->length-1; i++)
	{
		for (int j = L->length-1; j >= i; j--)
		{
			if (L->r[j]>L->r[j + 1])
				swap(L, j, j + 1);
		}
	}
}

int main()
{
	Sqlist *LP=new Sqlist();
	LP->r[0] = 5;
	LP->r[1] = 4;
	LP->r[2] = 3;
	LP->r[3] = 2;
	LP->r[4] = 1;
	LP->length = 5;
	cout << "ÅÅÐòÇ°:";
	for (int i = 0; i < 5; i++)
	{
		cout << LP->r[i] << '\t';
	}
	BubbleSort0(LP);
	cout << "\nÅÅÐòºó:";
	for (int i = 0; i < 5; i++)
	{
		cout << LP->r[i] << '\t';
	}


	//*******************************
	/*******************************/
	Sqlist *LPP = new Sqlist();
	for (int i = 0; i < 20; i++)
	{
		LPP->r[i] = 20 - i;
	}
	LPP->length = 20;
	cout << "\nÅÅÐòÇ°:";
	for (int i = 0; i < 20; i++)
	{
		cout << LPP->r[i]<<'\t';
	}
	BubbleSort1(LPP);
	cout << "\nÅÅÐòºó:";
	for (int i = 0; i < 20; i++)
	{
		cout << LPP->r[i]<<'\t';
	}

	system("pause");
}