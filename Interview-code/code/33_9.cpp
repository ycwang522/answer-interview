#include<stdio.h>
#include<string>
#define _CRT_SECURE_NO_WARNINGS 1
int FindSubString(char* pch)
{
	int   count = 0;
	char  * p1 = pch;	//pch = "ACCDEFFAG"
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] - 1)	//*p1 == p1[1] - 1;���p1ָ��B���ڶ���Ԫ�أ���ôp1[1] == ��C�� -1 ���ó���ͳ�����ڵ��ַ�������
		{
			p1++;
			count++;
		}
		else  
		{
			break;	//��һ��ʼ�����ڣ��м������������ϵ���
		}
	}
	int count2 = count;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] + 1)	//��ͳ�����ڵ��������������CBA������
		{
			p1++;
			count2--;
		}
		else  
		{
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
		else  {
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