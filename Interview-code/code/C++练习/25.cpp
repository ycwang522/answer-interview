//�ַ�����������
/*lengthΪstring��ʼ�ĳ���*/
#include<stdlib.h>
void BlankReplace(char string[], int length)
{
	if (string == NULL && length <= 0)
		return;
	
	int OriginalLength = 0;
	int NumberOfBland = 0;
	int i = 0;
	//ͳ�Ƴ�ʼ�ַ����ĳ��ȺͿո������
	while (string[i]!='\0')
	{
		++OriginalLength;
		if (NumberOfBland == ' ')
		{
			++NumberOfBland;
		}
		++i;
	}

	//NewLengthΪ�滻֮������ַ�������
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

