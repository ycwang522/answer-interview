#define _CRT_SECURE_NO_WARNINGS
#include"public.h"


int FindSubString(char* pch)	//XYBCDCBABABA
{
	int   count = 0;
	char  * p1 = pch;	//p1ָ����ַ���
	while (*p1 != '\0')	//�����ַ���
	{
		if (*p1 == p1[1] - 1)	//���� //��ASC����У�p1ָ�뵱ǰָ����ַ���p1ָ�����һλ�������¹�ϵ��p1[0]+1=p1[1]
		{
			p1++;//p1->x,������p1++�Ľ����p1->y
			count++; //count=1,
		}
		else  {
			break;
		}
	}
	int count2 = count;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] + 1)	//�ݼ�
		{
			p1++;
			count2--;
		}
		else  {
			break;
		}
	}
	if (count2 == 0)
		return(count);
	return(0);
}
void ModifyString(char* pText)
{
	char  * p1 = pText;
	char  * p2 = p1;
	while (*p1 != '\0')
	{
		int count = FindSubString(p1);
		if (count > 0)
		{
			*p2++ = *p1;
			sprintf(p2, "%i", count);
			while (*p2 != '\0')
			{
				p2++;
			}
			p1 += count + count + 1;
		}
		else  
		{
			*p2++ = *p1++;
		}
	}
}
void main(void)
{
	char text[32] = "XYBCDCBABABA";
	ModifyString(text);
	printf(text);
}