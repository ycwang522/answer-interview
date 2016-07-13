/*
***************************************
Author:Wang Yongchun
data:2016-3-24 17:22:13
Readme:从标准设备读取一串整数，并将读入的整数依次放到array及vector
		然后遍历这两种容器，求取数值的总和。
		将总和及平均值输出至标准输出设备。
vertirion：array
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
		std::cout << "请输入第" << cnt << "个数:";
		std::cin >> test;
		a[i] = test;
		++cnt;
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += a[i];	
	}

	cout << "数列的和为" << sum << endl;
	cout << "数列的平均值为" << sum / SIZE << endl;
}
