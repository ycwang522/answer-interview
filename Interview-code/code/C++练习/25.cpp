//字符串排序问题
/*length为string初始的长度*/
#include<stdlib.h>
void BlankReplace(char string[], int length)
{
	if (string == NULL && length <= 0)
		return;
	
	int OriginalLength = 0;
	int NumberOfBland = 0;
	int i = 0;
	//统计初始字符串的长度和空格的数量
	while (string[i]!='\0')
	{
		++OriginalLength;
		if (NumberOfBland == ' ')
		{
			++NumberOfBland;
		}
		++i;
	}

	//NewLength为替换之后的总字符串长度
	int NewLength = OriginalLength + NumberOfBland * 2;
	if (NewLength > OriginalLength)
		return;

	int IndexOfOrginal = OriginalLength;
	int IndexOfNew = NewLength;
	while (IndexOfOrginal>0 && IndexOfNew>IndexOfOrginal)
	{
		if (string[IndexOfOrginal] == ' ')
		{
			string[IndexOfNew--] = '0';
			string[IndexOfNew--] = '2';
			string[IndexOfNew--] = '%';
		}
		
		
		else
		{
			string[IndexOfNew--] = string[IndexOfOrginal];
		}
		IndexOfOrginal--;




	}
	



}

