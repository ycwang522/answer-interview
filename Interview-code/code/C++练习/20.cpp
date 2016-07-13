#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
typedef struct student
{
	char name[10];
	int score[3];//三门考试成绩
	float average[2];//两个平均成绩
}STU;

int main(void)
{
	STU stu[5];
	int i, j;
	float sum;
	printf("please input the students' score:\n");
	printf("姓名	A	B	C\n");
	//输入学生的数据
	for (i = 0; i<5; i++)
	{
		scanf_s("输入姓名：%s", &stu[i].name);
		for (j = 0; j<3; j++)
		{
			scanf_s("%d\n", &stu[i].score[j]);
		}
	}
	//计算学生的平均成绩
	printf("\n学生的平均成绩\n");
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
	//计算课程的平均成绩
	printf("\n课程的平均成绩\n");
	for (j = 0; j<3; j++)
	{
		sum = 0;
		for (i = 0; i<5; i++)
		{
			sum += stu[i].score[j];
		}
		stu[i].average[1] = sum / 5;
		printf("%c课程的平均分%.2f\n", j + 65, stu[i].average[1]);
	}

	
	return 0;
}