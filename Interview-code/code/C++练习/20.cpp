#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
typedef struct student
{
	char name[10];
	int score[3];//���ſ��Գɼ�
	float average[2];//����ƽ���ɼ�
}STU;

int main(void)
{
	STU stu[5];
	int i, j;
	float sum;
	printf("please input the students' score:\n");
	printf("����	A	B	C\n");
	//����ѧ��������
	for (i = 0; i<5; i++)
	{
		scanf_s("����������%s", &stu[i].name);
		for (j = 0; j<3; j++)
		{
			scanf_s("%d\n", &stu[i].score[j]);
		}
	}
	//����ѧ����ƽ���ɼ�
	printf("\nѧ����ƽ���ɼ�\n");
	for (i = 0; i<5; i++)
	{
		sum = 0;
		for (j = 0; j<3; j++)
		{
			sum += stu[i].score[j];
		}
		stu[i].average[0] = sum / 3;
		printf("%s%.2f", stu[i].name, stu[i].average[0]);
	}
	//����γ̵�ƽ���ɼ�
	printf("\n�γ̵�ƽ���ɼ�\n");
	for (j = 0; j<3; j++)
	{
		sum = 0;
		for (i = 0; i<5; i++)
		{
			sum += stu[i].score[j];
		}
		stu[i].average[1] = sum / 5;
		printf("%c�γ̵�ƽ����%.2f\n", j + 65, stu[i].average[1]);
	}

	
	return 0;
}