#include"public.h"

void RightShiftCycle(int array1[], int shift,int ArraySize)
{
	int i, j, temp;;
	for (int i = 0; i < shift; i++)
	{
		temp = array1[ArraySize-1];
		for (j = ArraySize - 1; j >= 0; j--)
		{
			array1[j] = array1[j-1];
		}
		array1[0] = temp;
	}
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	cout << "转换前" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i]<<"\t";
	}
	int length = 5;
	int shift = 2;
	RightShiftCycle(a, shift,5);
	cout << endl;
	cout << "转换后" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a[i]<<"\t";
	}
}