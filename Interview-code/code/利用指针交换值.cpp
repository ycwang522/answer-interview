//��������int ��ָ����ָ���ֵ�����ò�����ú���������������ֵ��
#include<iostream>

void exchange(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main3()
{
	int a = 5;
	int b = 8; 
	std::cout << "����֮ǰ��a=" << a << " " << "b=" << b << std::endl;
	exchange(&a, &b);
	std::cout << "����֮��a=" << a << " " << "b=" << b << std::endl;
	return 0;

}