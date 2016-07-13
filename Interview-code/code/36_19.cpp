#define _CRT_SECURE_NO_WARNINGS
#include "public.h"

// #include <stdio.h>
//void fun(char ** p)
//{
//	int i;
//	for(i = 0; i<4; i ++)
//		printf("% s", p[i]);
//}
//int main()
//{
//	char *s[6] = { "ABCD", "EFGH", "IJKL", "MNOP", "QRST", "UVWX" };
//	fun(s);
//	printf("\n");
//}


//int main()
//{
//	int s[2][3] = { 0 }, (*p)[3], i, j;
//	p = s;
//	i = j = 1;
//	s[i][j];
//}

//#include <stdio.h>
//int main()
//{
//	long long a = 1, b = 2, c = 3;
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}

//class A
//{
//public:
//	A(int i)
//	{
//		n = i;
//	}
//	void show()
//	{
//		cout << A::n;
//		n++;
//	}
//private:
//	int n;
//};
//
////int A::n = 0;
//int main()
//{
//	int i;
//	A *a[5];
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = new A(i);
//		a[i]->show();
//		cout << endl;
//	}
//
//	system("pause");
//}

//class A
//{
//public:
//	static void show()
//	{
//		cout << A::it<<endl;
//		it++;
//	}
//
//private:
//	static int it;
//};
//int A::it = 0;
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		A::show();
//	}
//	system("pause");
//}

//class A
//{
//public:
//	static void show()
//	{
//		cout << A::a << endl;
//		++a;
//	}
//private:
//	static int a;
//};
////
//int A::a = 0;
//
//int main()
//{
//	A a, b, c;
//	A::show();
//	A::show();
//	A::show();
//
//	system("pause");
//}

//class Base
//{
//public:
//	virtual int foo(int x)
//	{
//		return x * 10;
//	}
//
//	int foo(char x[14])
//	{
//		return sizeof(x) + 10;
//	}
//
//};
//
//class Derived :public Base
//{
//	int foo(int x)
//	{
//		return x * 20;
//	}
//
//	virtual int foo(char x[10])
//	{
//		return sizeof(x) + 20;
//	}
//};
//
//int main()
//{
//	
//	Derived iDerived;
//	Base *iBase = &iDerived;
//
//	char x[10];
//	printf("%d", iBase->foo(100) + iBase->foo(x));
//
//	system("pause");
//}

//char *f(char *str, char ch)
//{
//	char *it1 = str;
//	char *it2 = str;
//	while (*it2 != '\0')	//从前往后遍历it2中的元素
//	{
//		while (*it2 == ch)	//如果it2指向的元素与给定元素相等，it2往前移动
//		{
//			it2++;
//		}
//		*it1++ = *it2++;
//		/**it1 = *it2;
//		it1++;
//		it2++;*/
//
//		/*it1++;
//		it2++;
//		*it1 = *it2;*/
//	}
//	return str;
//}
//
//void main()
//{
//	char *a = new char[10];
//	strcpy(a, "abcdcccd");
//	cout << f(a, 'c');
//
//
//}

//int main()
//{
//	int i = 10;
//	int const *p = &i;
//	p++;
//	printf("%d", *p);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	unsigned char i = 1;
//	cout << &i << endl;
//	i -= 4;
//	printf("%d", i);
//
//	system("pause");
//}