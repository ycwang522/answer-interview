/*
������
����������м�ʱ����
*/

#include<stdio.h>
#include"23.h"
#include<time.h>
#define LENGTH 10
int main()
{
	
	clock_t start, finish;
	start = clock();

	srand(unsigned(time(0)));

	int a[LENGTH];

	printf("����ǰ��");
	for (int k = 9; k >=0; k--)
	{
//		a[k] = rand()%10000;
		a[k] = k + 1;
		printf("%d ", a[k]);
	}
	



	BubbleSort1(a,LENGTH);
	
	printf("\n�����");
	for (int i1 = 0; i1 < 10; i1++)
	{
		printf("%d ", a[i1]);
	}

	finish = clock();
	printf("����ʱ%.3lf��", ((double)finish - start) / 1000);
	return 0;
}