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
	cout << "����һ��������";
	cin >> k;
	int j=val(k);
	cout << "��׳˵�ֵΪ��"<<j << endl;
	return 0;
}

