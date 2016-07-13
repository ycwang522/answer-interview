#include<iostream>
#include<stdint.h>
using std::cout;
using std::endl;

struct Date
{
	char a;
	int b;
	int64_t c;
	char d;
};

int main()
{
	Date data[2][10];
	cout << &data[1][5] << endl;
	cout << &data[1][5].b << endl;
}