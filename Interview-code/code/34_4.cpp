#include"public.h"

struct A
{
	A();
	~A();
	int m1;
	int m2;
};

struct B:A
{
	B();
	~B();

	int m1;
	char m2;
	static int m3;
};

struct C
{
	C();
	virtual ~C();
	int m1;
	short m2;
};

int main()
{
	cout << "sizeof(A):" << sizeof(A) << "\n"
		<< "sizeof(B)" << sizeof(B) << "\n"
		<< "sizeof(C)" << sizeof(C) << endl;

	system("pause");
}