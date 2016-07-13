#include"public.h"
#include<string>
#include<fstream>
using std::string;

/*
int main()
{
	string str1 = "I'm fine,Thank you!";
	string str2 = "How are you?";
	cout << "str1:" << str1 << endl
		<< "str2:" << str2 << endl;
	cout << endl;
	str1.swap(str2);
	cout << "str1:" << str1 << endl
		<< "str2:" << str2 << endl;

	return 0;
}
*/

/*
int main()
{
	int getLength(const char *p);
	char ch1[15] = "Hello world!";
	char *p = "My name is C++";
	int lengthch1=getLength(ch1);
	int lengthp = getLength(p);
	cout << lengthch1 << endl
		<< lengthp << endl;
	return 0;
}

int getLength(const char *p)
{
	int count = 0;
	while (*p)
	{
		p++;
		count++;
	}
	return count;
}
*/

using std::ostream;
class A
{
public:
	A(int a, int b) :x(a), y(b){}
	int x;
	int y;
};
ostream &operator << (ostream &c, const A &a)
{
	c << "("<<a.x<<",";
	c << a.y<<"i)";
	return c;
}

int main()
{
	A a(3, 4), b(5, 6);
	cout << a << b << endl;
}