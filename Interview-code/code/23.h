//
//#include <stdlib.h>
////�������Ա����ݽṹ
//
//
//
//void swap(int a[], int i, int j)
//{
//	int temp = a[i];
//	a[i] = a[j];
//	a[j] = temp;
//}
//

////���ڵ�ð������
//void BubbleSort1(int a[],int length)
//{
//	int i, j;
//	for ( i = 0; i < length-1; i++)
//	{
//		for (j = length - 2; j >= i; j--)
//		{
//			if (a[j]>a[j+1])
//				swap(a, j, j+1);
//		}
//	} 
//}
//
////���ӶȺܸߵ�ð������
//void BubbleSort0(int a[], int length)
//{
//	int i, j;
//	for (i = 0; i < length-1; i++)
//	{
//		for (j = i + 1; j <length; j++)
//		{
//			if (a[i]>a[j])
//				swap(a, i, j);
//		}
//	}
//}
//
//
////�Ľ���ð�������㷨
////����flag״̬��
//
//typedef int status;
//void BubbleSort2(int a[], int length)
//{
//	int i, j;
//	status flag= true;
//	for (i = 0; i <length-1 && flag; i++)
//	{
//		for (j = length - 2; j >= i; j--)
//		{
//			if (a[j]>a[j + 1])
//			{
//				swap(a, i, j);
//				flag = true;
//			}
//		}
//	}
//}
//

#include<stdlib.h>
//Sort0

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void BubbleSort0(int a[],int length)
{
	int i, j;
	for (i = 0; i < length-2; i++)
	{
		for (j = i + 1; j <= length-1;j++)
		{
			if (a[i]>a[j])
				swap(a, i, j);
		}
	}
}

//Sort1
void BubbleSort1(int a[], int length)
{
	int i, j;
	for (i = 0; i < length - 1; i++)
	{
		for (j = length - 2; j >= i; j--)
		{
			if (a[j]>a[j + 1])
			{
				swap(a, j, j + 1);
			}
		}
	}
}


//sort2
typedef int status;
void BubbleSort2(int a[], int length)
{
	status flag = true;
	int i, j;
	for (i = 0; i < length - 1 && flag; i++)
	{
		flag = false;
		for (j = length - 2; j >= i; j--)
		{
			if (a[j]>a[j + 1])
			{
				swap(a, j, j + 1);
				flag = true;

			}
		}
	}
}




