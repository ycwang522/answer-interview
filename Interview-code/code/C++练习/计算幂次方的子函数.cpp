/*
**������int���βεĺ���
**������һ�������ĵڶ����������ݵ�ֵ
*/
#include<iostream>

int power(int n1, int n2)
{
	int s1 = 1;
	for (int m = 0; m < n2; m++)
	{
		
		s1 = n1*s1;;
	}
	return s1;
}

void main1()
{
	int a = 5;
	int b = 4;
	power(a, b);
	std::cout << power(a, b) << std::endl;

}


