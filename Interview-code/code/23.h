//
//#include <stdlib.h>
////定义线性表数据结构
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

////正宗的冒泡排序
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
////复杂度很高的冒泡排序
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
////改进的冒泡排序算法
////增加flag状态字
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




