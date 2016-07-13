#include<iostream>
#include<stdlib.h>
#include<array>
#include<vector>

using namespace std;
int val(int m)
{
	int s = 1;
	for (int i = 1; i <= m; i++)
	{
		s = s*i;
		
	}
	return s;

}

int main6()
{
	int k;
	cout << "输入一个整数：";
	cin >> k;
	int j=val(k);
	cout << "其阶乘的值为："<<j << endl;
	return 0;
}

