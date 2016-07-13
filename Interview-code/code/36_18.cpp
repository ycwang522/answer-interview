#define _CRT_SECURE_NO_WARNINGS
#include"public.h"

//#define a 10
//
//void foo();
//
//void foo()
//{
//#undef a
//#define a 50
//}
//int main()
//{
//	printf("%d..", a);
//	foo();
//	printf("%d", a);
//	system("pause");
//}

//#include <stdio.h>  
//#include <stdlib.h>  
//int main()
//{
//	int a = 6336;
//	char *b = (char *)&a;
//	printf("%d", *b);
//	getchar();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int i, u[4], v[4], x, y = 10;
//	for (i = 0; i <= 3; i++) {
//		cin >> u[i];
//	}
//	v[0] = (u[0] + u[1] + u[2] + u[3]) / 7;
//	v[1] = u[0] / ((u[1] - u[2]) / u[3]);
//	v[2] = u[0] * u[1] / u[2] * u[3];
//	v[3] = v[0] * v[1];
//	x = (v[0] + v[1] + 2) - u[(v[3] + 3) % 4];
//	if (x > 10)
//		y += (v[2] * 100 - v[3]) / (u[u[0] % 3] * 5);
//	else
//		y += 20 + (v[2] * 100 - v[3]) / (u[v[0] % 3] * 5);
//	cout << x << "," << y << endl;
//	return 0;
//}

//int Recurse(int a, int b)
//{
//	if (a >= b)
//	{
//		if (a == b)
//			return a;
//		else
//			return 0;
//	}
//	else
//	{
//		return Recurse(a + 1, b - 1) + a + b;
//	}
//}
//
//int main()
//{
////	Recurse(8, 2012);
//	cout << Recurse(8, 2012) << endl;
//	system("pause");
//}

//int main()
//{
//	int k = 1000;
//	while(k>1)
//	{
// 		cout<< k<<'\t';
//		k = k / 2;
//	}
//	system("pause");
//}

//int main()
//{
//	int a[5] = { 0 };
//	int *p = NULL;
//	p = a;
//	*p = a[0];
//	p = &a[0];
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//int i = 0;
//int fun(int n)
//{
//	static int a = 2;
//	a++;
//	return(a * n);
//}
//
//
//int main()
//{
//	int k = 5;
//	{
//		int i = 2;
//		k += fun(i);
//	}
//	k += fun(i);
//	cout << k;
//	return(0);
//}

//#include <stdio.h>  
//void  fun(int  n, int *s) //第一次调用时，n=4,*s=x;
//	{
//	int  f;
//	if (n == 1)
//		*s = n + 1;
//	else 
//	{
//		fun(n - 1, &f);//第二次调用时，n-1=3,*s=f
//		//第三次调用时，n=2,*s=f,第四次调用时，
//		*s = f;
//	}
//}
//int main() 
//{
//	int  x = 0;
//	fun(4, &x);//实参为4和x的地址
//	printf("%d\n", x);
//	system("pause");
//}

//#include<stdio.h>
//int main()
//{
//	char c = '0';
//	printf("%d %d", sizeof(c), sizeof('0'));
//	return 0;
//}
//int main()
//{
//
//	int i = 1;
//	int j = i++;
//	if ((i>j++) && (i++ == j)) 
//		i += j;
//	cout << "i=" << i << endl << "j=" << j << endl;
//	return 0;
//}

//int main()
//{
//	char* s1 = "Hello world";
//	char s2[] = "Hello world";
//	s1[2] = 'E';     // 1
//	s2[2] = 'E';     // 2
//	*(s1 + 2) = 'E';  // 3
//	*(s2 + 2) = 'E';  // 4
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int f(int a)
//{
//	int b = 0;
//	int c = a + b;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//		k = f(a++);
//	printf(" % d\n", k);
//
//	return 0;
//}

//int main()
//{
//	int* pint = 0;
//	pint += 6;
//	cout << pint << endl;
//
//	system("pause");
//}

//#pragma pack(2)
//class BU
//{
//	int number;
//	union UBffer
//	{
//		char buffer[13];
//		int number;
//	}ubuf;
//	void foo(){}
//	typedef char*(*f)(void*);
//	enum{ hdd, ssd, blueray }disk;
//}bu;
//
//int main()
//{
//	cout << sizeof(bu) << endl;
//	system("pause");
//}

//class A
//{
//public:
//	A()
//	{
//		printf("0");
//	}
//	A(int a)
//	{
//		printf("1");
//	}
//	A& operator=(const A& a)
//	{
//		printf("2");
//		return*this;
//	}
//};
//
//int main()
//{
//	A al;
//	al = 10;
//	system("pause");
//}

//class A
//{
//public:
//	A()  {     }
//	~A() { cout << "~A" << endl; }
//};
//
//class B :public A
//{
//public:
//	B(A &a) :_a(a)
//	{
//
//	}
//	~B()
//	{
//		cout << "~B" << endl;
//	}
//private:
//	A _a;
//};
//
//int main(void)
//{
//	A a;       //很简单，定义a的时候调用了一次构造函数  
//	B b(a);
//}


int main()
{
	int i = 10, j = 10, k = 3;
	k *= i + j;
	cout << k << endl;

	system("pause");
}