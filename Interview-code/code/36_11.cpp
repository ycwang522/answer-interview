#include"public.h"

//
//class A
//{
//public:
//	void FuncA()
//	{
//		printf("FuncA called\n");
//	}
//	virtual void FuncB()
//	{
//		printf("FuncB called\n");
//	}
//};
//class B : public A
//{
//public:
//	void FuncA()
//	{
//		A::FuncA();
//		printf("FuncAB called\n");
//	}
//	virtual void FuncB()
//	{
//		printf("FuncBB called\n");
//	}
//};
//void main(void)
//{
//	B  b;
//	A  *pa;
//	pa = &b;
//	A *pa2 = new A;
//	pa->FuncA();// £¨ 3£©
//	pa->FuncB();// £¨ 4£©
//	pa2->FuncA(); //£¨ 5£©
//	pa2->FuncB();
//	delete pa2;
//}
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	A(int a) :i(a){ cout << "A" << endl; }
//private:
//	int i;
//};
//int main()
//{
//	A a(4);
//	A b(5);
//	A c[3];
//	A *p[2] = { &a, &b };
//	system("pause");
//}
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	char c[2][5] = { "6938", "8254" }, *p[2];
//	int s = 0;
//	for (int i = 0; i < 2; i++)
//		p[i] = c[i];
//	cout << c[0][0] << endl;;
//	cout << c[0][1] << endl;
//	cout << c[0][2] << endl;
//	cout << p[0][3] << endl;
//	cout << p[1][0] << endl;
//	cout << p[1][1] << endl;
//	cout << p[1][2] << endl;
//	cout << p[1][3] << endl;
//	for (int i = 0, j = 0; i <4; i++, j += 2)
//	{
//		if (j>3)
//		{
//			j = 0;
//		}
//		s = 10 * s + (p[i / 2][j] - '0');
//	}
//	cout << s << endl;
//	return 0;
//}
//int main()
//{
//	int **a[3][4]={0,1,2,3,4,5,6,7,8,9,10};
//	char **b[3][4];
//	double **c[3][4];
//	cout << sizeof(a) << endl
//		<< sizeof(b) << endl
//		<< sizeof(c) << endl;
//
//	system("pause");
//}

//int main()
//{
//	char s[] = "123", *p;
//	p = s;
//	printf("%c", *p++);
//	system("pause");
//}

//int main()
//{
//	char a[] = "xyz", b[] = { 'x', 'y', 'z' };
//	cout << strlen(a) << "\t" << strlen(b) << endl;
//	if (strlen(a) > strlen(b))
//		printf("a > b\n");
//	else
//		printf("a <= b\n");
//	system("pause");
//}
//
//struct mybitfields
//{
//	unsigned short a : 4;
//	unsigned short b : 5;
//	unsigned short c : 7;
//} test;
//
//void main(void)
//{
//	int i;
//	test.a = 2;
//	test.b = 3;
//	test.c = 0;
//
//	i = *((short *)&test);
//	printf("%d\n", i);
//
//}
//int main()
//{
//	const int a = 10;
//	cout << &a << endl;
//	int *p = (int *)(&a);
//	cout << p << endl;
//	*p = 20;
//	cout << "a = " << a << ", *p = " << *p << endl;
//	system("pause");
//	return 0;
//}

//char* getMem(void) 
//{
//	char p[] = "hello world";
//	p[5] = 0x0;
//	return p;
//}
//void test(void) {
//	char *s = 0x0;
//	s = getMem();
//	printf(s);
//}
//
//int main()
//{
//	int a[][2] = { 1, 2, 3, 4 };
//	
//	system("pause");
//}

#include <iostream>
using namespace std;
class A
{
public:
	void print()
	{
		cout << "A:print()";
	}
};
class B : protected A
{
public:
	void print()
	{
		cout << "B:print()";
	}
};
class C : public B
{
public:
	void print()
	{
		A::print();
	}
};
int main()
{
	C b;
	b.print();
	char s[80]; s = { 'A', 'B', 'C' }
}