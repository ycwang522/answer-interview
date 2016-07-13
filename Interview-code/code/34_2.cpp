#include<iostream>

using namespace std;

class A
{
public:
	virtual void func1()
	{
		cout << "class A::func1()" << endl;
	}
	virtual void func2()
	{
		cout << "class A::func2()" << endl;
	}
};

class B:public A
{
	void func1()
	{
		cout << "class B::func1()" << endl;
	}
	void func2()
	{
		cout << "class B::func2()" << endl;
	}
};

int main()
{
	A *pa = new B;
	pa->func1();
	delete pa;
	system("pause");
}

//执行过程，首先取出pa指针指向的对象的虚表指针，这个值就是虚表的地址，由于调用的函数B::func1（）是第一个虚函数，
//所以取出vtbl第一个表项里的值，这个值就是B::fun1()的地址，最后调用这个函数。
//因此只要vptr不同，指向的vtbl就不同，而不同的vtbl里装着对应类的虚函数地址
//完成多态。

//虚函数执行时额外的信息：vptr，虚表指针


//有一个简单的基类

#pragma once
#include<iostream>
using namespace std;
class Base
{
public:
	Base(int);
	virtual ~Base(void);	//virtual_1

	int getIBase() const;	//common_1
	static int instanceCount();// static_1
	virtual void print() const;	//virtual_2

protected:

	int iBase;	//common_2
	static int count;	//static_2
};

char *strcat(char *desk,const char *src);