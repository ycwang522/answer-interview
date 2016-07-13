#define _CRT_SECURE_NO_WARNINGS

#include"public.h"

//int main(int argc, char *argv[])
//{
//	char *s = "abcdefg";
//	s += 2;
//	fprintf(stderr, "%d\n", s);
//	return 0;
//}

//void fun(char *s)
//{
//	char a[10];
//	strcpy(a, "STRING");
//	s = a;
//}
//int main()
//{
//	char *p = "PROGRAM";
//	fun(p);
//	printf("%s\n ", p);
//}

//int fun(int a)
//{
//	a = (1 << 5) - 1;
//	return a;
//}
//
//int main()
//{
//	cout << fun(21) << endl;
//	system("pause");
//}
class A
{
public:
	A()
	{
		printf("A ");
	}
	/*virtual*/
	virtual ~A()
	{
		printf("deA ");
	}
};

class B
{
public:
	B()
	{
		printf("B ");
	}
	~B()
	{
		printf("deB ");
	}
};

class C : public A, public B
{
public:
	C()
	{
		printf("C ");
	}
	~C()
	{
		printf("deC ");
	}
};
int main()
{
	A *a = new C();
	delete a;
	return 0;
}