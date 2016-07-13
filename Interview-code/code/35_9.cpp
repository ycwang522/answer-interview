//ÖØÔØ<<ÔËËã·û
#include"public.h"
#include<fstream>
using std::ostream;

class A
{
public:
	A(int x, int y) :a(x), b(y)
	{}
private:
	int a;
	int b;
	friend ostream &operator<<(ostream &c, const A &d);
};
ostream &operator<<(ostream &c, const A &d)
{
	c << "(" << d.a << ",";
	c << d.b << "i)";
	return c;
}
int main()
{
	A a(2, 3);
	A b(4, 5);
	cout << a << endl << b << endl;
	return 0;
}