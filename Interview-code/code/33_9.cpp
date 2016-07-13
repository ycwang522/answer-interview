#include<stdio.h>
#include<string>
#define _CRT_SECURE_NO_WARNINGS 1
int FindSubString(char* pch)
{
	int   count = 0;
	char  * p1 = pch;	//pch = "ACCDEFFAG"
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] - 1)	//*p1 == p1[1] - 1;如果p1指向B，第二个元素，那么p1[1] == ‘C’ -1 ，该程序统计相邻的字符递增。
		{
			p1++;
			count++;
		}
		else  
		{
			break;	//从一开始就相邻，中间如果不相邻则断掉。
		}
	}
	int count2 = count;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] + 1)	//再统计相邻的逆序个数，比如CBA这样。
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