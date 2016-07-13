#include<iostream>
using namespace std;

int  a = 4;
int  &f(int  x)
{
	a = a + x;	//function个：传入的参数加4
	return  a;
}
int main(void)
{
	cout << &a << endl;
	int t = 5;
	cout << f(t) << endl; //f(t)=5+4=9
	f(t) = 20;          //a=20
	cout << f(t) << endl;	//t=5 a=20 a+x=25 
	t = f(t);             //再代一次，a=25 t=5 f(t)=20  t=30 a=30
	cout << f(t) << endl;	//30+30

	system("pause");
}  
