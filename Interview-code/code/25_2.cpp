/*
***************************************
Author:Wang Yongchun
data:2016-3-24 17:22:13
Readme:�ӱ�׼�豸��ȡһ������������������������ηŵ�array��vector
		Ȼ�������������������ȡ��ֵ���ܺ͡�
		���ܺͼ�ƽ��ֵ�������׼����豸��
vertirion��array
***************************************
*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>

#define SIZE 10

using namespace std;

int main()
{
	int a[SIZE];
	int test;
	int cnt = 1;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "�������" << cnt << "����:";
		std::cin >> test;
		a[i] = test;
		++cnt;
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += a[i];	
	}

	cout << "���еĺ�Ϊ" << sum << endl;
	cout << "���е�ƽ��ֵΪ" << sum / SIZE << endl;
}
