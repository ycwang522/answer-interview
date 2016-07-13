//const成员变量和const成员函数

#include<iostream>
using namespace std;

class A
{
public:
	A(int v) : val(v)  {}
	void print_val()
	{
		cout << "non-const value:" << val << endl;
	}
	void print_val() const
	{
		cout << "const value:" << val << endl;
	}

private:
	const int val;
};

int main()
{
	A b(100);
	b.print_val();

	const A a(15);
	a.print_val();
}