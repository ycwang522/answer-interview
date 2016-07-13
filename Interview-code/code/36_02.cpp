#include"public.h"

void changeLength(char str[], int length)
{
	if (str == NULL && length < 0)
		return;
	int originLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while (str[i]!='\0')
	{
		originLength++;	//ͳ��ԭ���ַ����ĳ���

		if (str[i] == ' ')
			++numberOfBlank;	//ͳ�ƿո������
		++i;
	}

	int newLength = originLength + 2 * numberOfBlank;	//�������ַ����ĳ���
//	char *p = new char[newLength];
	if (newLength > length)
		return;

	int indexOfNew = newLength;
	int indexOfOriginal = originLength;

	while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
	{
		if (str[indexOfOriginal] == ' ')
		{
			str[indexOfNew--] = '0';
			str[indexOfNew--] = '2';
			str[indexOfNew--] = '%';
		}
		else
			str[indexOfNew--] = str[indexOfOriginal];
		indexOfOriginal--;
	}

}


void changeLength(char str[], int length)
{
	int i = 0;
	if (str == NULL || length <= 0)
		return;
	int originLength = 0;
	int numberOfBlank = 0;
	while (str[i] != '\0')
	{
		originLength++;
		if (str[i] == ' ')
		{
			++numberOfBlank;
		}
		++i;
	}

	int newLength = originLength + numberOfBlank * 2;

	if (newLength > length)
		return;
	int indexOfOrigin = originLength;
	int indexOfNew = newLength;
	while (indexOfNew > indexOfOrigin && indexOfOrigin >= 0)
	{
		if (str[indexOfOrigin] == ' ')
		{
			str[indexOfNew--] = '0';
			str[indexOfNew--] = '2';
			str[indexOfNew--] = '%';
		}
		else
			str[indexOfNew--] = str[indexOfOrigin];
		indexOfOrigin--;
	}
}