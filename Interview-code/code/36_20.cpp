#define _CRT_SECURE_NO_WARNINGS
#include"public.h"

//class Point
//{
//public:
//	Point(double xx, double yy)
//	{
//		x = xx;
//		y = yy;
//	}
//	void GetXY();
//	friend double Distance(Point &a, Point &b);
//private:
//	double x, y;
//};
//
//void Point::GetXY()
//{
//	cout << x << "," << y << endl;
//}
//
//double Distance(Point &a, Point &b)
//{
//	double length;
//	length = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
//	return length;
//}

//int main()
//{
//	printf("My name is 15%%!\n");
//}

//int main()
//{
//	int i = 10;
//	int j = 1;
//	const int *p1;//(1)
//	int const *p2 = &i; //(2)
//	p2 = &j;//(3)
//	int *const p3 = &i;//(4)
//	*p3 = 20;//(5)
//	*p2 = 30;//(6)
//	p3 = &j;//(7)
//	return 0;
//}

//float distance()
//{
//	char a='a';
//	int b = 1;;
//	long c=2;
//	double d=2.10;
//
//	return b;
//}
//
//int main()
//{
//	distance();
//	return 0;
//}
//
//template<typename myT, class myT>class C4{};

//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		cout << "*";
//	}
//	return 0;
//}

//class A
//{
//public:
//	void f()
//	{
//		printf("A\n");
//	}
//};
//
//class B : public A
//{
//public:
//	virtual void f()
//	{
//		printf("B\n");
//	}
//};
//
//int main()
//{
//	A *a = new B;
//	a->f();
//	delete a;
//	return 0;
//}

//struct st_t
//{
//	int status;
//	short *pdata;
//	char errstr[32];
//};
//
//int main()
//{
//	/*cout << sizeof(st_t) << endl;
//	float a = 9.1;
//	float b = 1.2;
//	a / b;
//	a%b;
//	a++;
//	a != 0;*/
//	float a = 1.25;
//	a++;
//	cout << a << endl;
//	system("pause");
//}

//st_t st[16];
//char *p = (char *)(st[2].errstr + 32);
//printf("%d", (p - (char *)(st)));

//void print(char *);
//void main()
//{
//	char str[] = "Geneius";
//	print(str);
//}
//void print(char *s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}

//class Base
//{
//public:
//	virtual void f()
//	{
//		cout << "Base::f()" << endl;
//	}
//	virtual void g()
//	{
//		cout << "Base::g()" << endl;
//	}
//	virtual void h()
//	{
//		cout << "Base::h()" << endl;
//	}
//};
//
//int main()
//{
//	typedef void(*Fun)(void);//声明一函数指针
//	Base b;
//	Fun pFun = NULL;	//声明一函数指针
//
//	cout << "虚函数表地址：" << (int *)(&b) << endl;
//	cout << "虚函数表-第一个函数地址：" << (int *)*(int *)(&b) << endl;
//	//(int *)(&b)将对象的地址强制转换成int类型的地址，得到虚函数表的地址
//	//对该虚函数表地址再次取址得到第一个函数的地址。
//
//	pFun = (Fun)*((int *)*(int *)(&b));
//	pFun();
//	pFun = (Fun)*((int*)*(int*)(&b) + 1);
//	pFun();
//	system("pause");
//}

//typedef int ElemType;
//typedef struct BitNode
//{
//	ElemType data;
//	struct BitNode *lchild, *rchild;
//}BitNode,*BitTree;	//定义二叉树结点 
//
////排序所用的数据结构
//#define MAXSIZE 10
//typedef struct
//{
//	int r[MAXSIZE + 1];
//	int length;
//}Sqlist;
//
//void swap(Sqlist *L, int i, int j)
//{
//	int temp = L->r[i];
//	L->r[i] = L->r[j];
//	L->r[j] = temp;
//}
//
//void Bubble0(Sqlist *L)
//{
//	for (int i = 1; i < L->length; i++)
//	{
//		for (int j = i + 1; j <= L->length; j++)
//		{
//			if (L->r[i]>L->r[j])
//				swap(L, i, j);			
//		}
//	}
//}
//
//void Bubble1(Sqlist *L)
//{
//	for (int i = 1; i < L->length; i++)
//	{
//		for (int j = L->length-1; j >= i; j--)
//		{
//			if (L->r[j] > L->r[j+1])
//				swap(L, j, j+1);
//		}
//	}
//}
//
////堆排序
//
//void HeapSort(Sqlist *L)
//{
//	int i;
//	for (i = L->length / 2; i > 0; i--)
//		HeapSort(L, i, L->length);
//
//}
//
////快排
//void QuickSort(Sqlist *L)
//{
//	Qsort(L, 1, L->length);
//}
//
//void Qsort(Sqlist *L, int low, int high)
//{
//	int pivot;
//	if (low < high)
//	{
//		pivot = Partition(L, low, high);
//
//		Qsort(L, low, pivot - 1);
//		Qsort(L, pivot + 1, high);
//
//	}
//}
//
//int Partition(Sqlist *L, int low, int high)
//{
//	int pivotkey = L->r[low];
//	while (low < high)
//	{
//		while (low < high && L->r[high] >= pivotkey)
//			high--;
//		swap(L, low, high);
//		while (low < high && L->r[low] <= pivotkey)
//			low++;
//		swap(L, low, high);
//	}
//	return low;
//}

//#include <stdio.h>
//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int i, n = 0;
//	float x = 1, y1 = 2.1 / 1.9, y2 = 1.9 / 2.1;
//	for (i = 1; i < 22; i++)
//		x = x * y1;
//	while (x != 1.0)
//	{
//		x = x * y2; n++;
//	}
//	printf("%d \n", n);
//}

//C++在内存中的对象模型
//class Parent
//{
//public:
//	int iParent;
//	Parent() :iParent(10) {}
//	virtual void f(){ cout << "Parent::f()" << endl; }
//	virtual void g(){ cout << "Parent::g()" << endl; }
//	virtual void h(){ cout << "Parent::h()" << endl; }
//};
//
//class Child :public Parent
//{
//public:
//	int iChild;
//	Child() :iChild(100){}
//	virtual void f(){ cout << "Child::f()" << endl; }
//	virtual void g_child(){ cout << "Child::g_Child()" << endl; }
//	virtual void h_child(){ cout << "Child::h_Child()" << endl; }
//};
//
//class Grachild :public Child
//{
//public:
//	int iGrachild;
//	Grachild() :iGrachild(1000){}
//	virtual void f(){ cout << "Grachild::f()" << endl; }
//	virtual void g_child(){ cout << "Grachild::g_child()" << endl; }
//	virtual void h_grachild(){ cout << "Grachild::h_grachild()" << endl; }
//};
//
//int main()
//{
//	typedef void(*Fun)(void);
//
//	Fun pFun = NULL;
//	Grachild iGra;
//	int** pVtab = (int **)&iGra;
//
//	cout << "[0] Grachild::_vptr->" << endl;
//	for (int i = 0; /*(Fun)pVtab[0][i] != 0*/i<6; i++)
//	{
//		pFun = (Fun)pVtab[0][i];
//		cout << "    [" << i << "]";
//		pFun();
//	}
//	cout << "[1] Parent.iparent = " << (int)pVtab[1] << endl;
//	cout << "[2] Child.iChild = " << (int)pVtab[2] << endl;
//	cout << "[3] Grachild.iGra = " << (int)pVtab[3] << endl;
//
//	system("pause");
//}

//struct Test
//{
//	Test(int){};
//	Test(){};
//	void fun(){ cout << "I'm fun()" << endl; };
//};
//
//void main()
//{
//	Test a(1);
//	a.fun();
//	Test b();
//	//b.fun();
//	system("pause");
//}

//int main(void) 
//{
//	http://www.taobao.com
//	cout << "welcome to taobao" << endl;
//	goto http;
//	return 0;
//}

//int main()
//{
//	char *p1; 
//	double *p2;
//	p1 = (char *)0x800000;
//	p2 = (double *)0x800000;
//	char *a = p1 + 2;
//	double *b = p2 + 2;
//	
//	return 0;
//}

//int func(char *ch)
//{
//	int num = 0;
//	num = strlen(ch);
//	return num;
//}
//
//int main()
//{
//	char *ch = "iamagoodstudent";
//	func(ch);
//	cout << func(ch) << endl;
//	return 0;
//}



//int main()
//{
//	char *p = "hello world";
//	p[0] = 'H';
//	printf("%s\n", p);
//	return 0;
//}


//#include<limits.h>
//int main()
//{
//	printf("%d", (INT_MAX + 1)<0);
//	system("pause");
//	//
//}

//void getmemory(char *p1)
//{
//	p1 = (char *)malloc(100 * sizeof(char));
//}
//
//int main()
//{
//	char *p = NULL;
//	getmemory(p);
//	strcpy(p, "hello world");
//	printf(p);
//	system("pause");
//}

//int main()
//{
//	char a = 'H';
//	a = (a > 'A'&&a <= 'Z') ? (a + 32) : a;
//	printf("%c", a);
//	return 0;
//}


//class Base
//{
//public:
//	virtual ~Base() = 0;
//
//};
//
//Base::~Base()
//{
//	cout << "~Base() is called" << endl;
//}
//
//class Derived :public Base
//{
//public:
//	Derived(int x1, int y1) :X(x1), Y(y1)
//	{
//		p = new int[y1];
//	}
//
//	~Derived()
//	{
//		cout << "~Derived() is called" << endl;
//		if (p)
//		{
//			delete p;
//			p = NULL;
//		}
//	}
//
//private:
//	int X, Y;
//	int *p;
//
//};
//
//int main()
//{
//	Derived ider(1,2);
//	Base *ibs =&ider;
//	delete ibs;
//	system("pause");
//}

//int main()
//{
//	int weight[] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
//	int validate[] = { 6, 2, 0, 5, 2, 4, 1, 9, 9, 1, 0, 5, 0, 7, 0, 4, 7 };
//	int sum = 0;
//	for (int i = 0; i < 17; i++)
//	{
//		sum = sum + weight[i] * validate[i];
//	}
//	int y = sum % 11;
//	cout << y << endl;
//}

//#include <stdio.h > 
//int main()
//{
//	/*double x = 2.0, y;
//	if (x<0.0)
//		y = 0.0;
//	else if ((x<5.0) && (!x)) 
//		y = 1.0 / (x + 2.0);
//	if (x<10.0)
//		y = 1.0 / x;
//	else
//	{
//		y = 10.0;
//	}
//	printf("％f\n", y);*/
//
//	double a = 1.0, b = 2.0;
//	printf("%f", (a / b));
//}

//int main()
//{
//	int x = 127;
//	short y = -9;
//	cout << &y << endl;
//	int z = x + y;
//
//	cout << x << endl << y << endl << z << endl;
//	system("pause");
//}

//int main(int argc, char *argv[])
//{
//	int count;
//	printf("%d个命令行参数", argc - 1);
//	for (count = 1; count < argc; count++)
//	{
//		printf("%d %s", count, argv[count]);
//
//	}
//	return 0;
//}

//class A
//{
//public:
//	~A();
//};
//A::~A()
//{
//	cout << "delete A" << endl;
//}
//
//class B :public A
//{
//public:
//	~B();
//};
//
//B::~B()
//{
//	cout << "delete B" << endl;
//}
//
//int main()
//{
//	A *pa = new B();
//	delete pa;
//	system("pause");
//}



//大小写转换

//char fun(char *c)
//{
//	if (*c <= 'Z'&& *c >= 'A')
//		*c -= 'A' - 'a';	//A - a = -32  *c=*c+32，传入的是大写时，会将大写转换成小写
//	return *c;
//}
//
//int main()
//{
//	char s[81], *p = s;
//	gets(s);
//	while (*p)
//	{
//		*p = fun(p);
//		putchar(*p);
//		p++;
//	}
//	printf("\n");
//}

//char fun(char *s)
//{
//	if (*s <= 'Z'&& *s >= 'A')
//		*s += 'a' - 'A';
//	return *s;
//}
//
//int main()
//{
//	char c[81], *p = c;
//	gets(c);
//	while (*p)
//	{
//		*p = fun(p);
//		putchar(*p);
//		p++;
//	}
//	return 0;
//}


int main()
{
	char c[10];
	cin >> c;
	cout << c << endl;
	system("pause");
}

