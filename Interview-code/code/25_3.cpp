/*
***********************************************
**Name��Wang Yongchun
**Data:2016-3-24 21:06:34
**Readme:�ӱ�׼�豸��ȡһ������������������������ηŵ�array��vector
		Ȼ�������������������ȡ��ֵ���ܺ͡�
		���ܺͼ�ƽ��ֵ�������׼����豸��
vertirion��vector
***********************************************
*/

#include<vector>
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

#define SIZE 10

int main()
{
	//int a[SIZE];
	int test;
	int cnt = 1;

	std::vector<int> ivec;
	std::cout << &ivec << endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "�������" << cnt << "����:";
		std::cin >> test;
		ivec.push_back(test);
		++cnt;
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
	
		int num = ivec[i];
		std::cout << num << endl;
		sum += num;		
	}
	cout << "���еĺ�Ϊ" << sum << endl;
	cout << "���е�ƽ��ֵΪ" << sum / SIZE << endl;
	system("pause");
}