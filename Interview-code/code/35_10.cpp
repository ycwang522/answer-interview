#include"public.h"


class String
{
public:
	String();
	String(const char *const ptr);
	String(const String &str);
	char operator[](int length)const;
	int getLen(){ return  len; }

private:
	int len;
	char *p;
};

String::String()
{
	len = 0;
	p = new char[1];
	*p = '\0';
}
String::String(const char *const ptr)	//传入一个字符串，要求能够为字符串自动分配内存空间
{
	len = strlen(ptr);
	p = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		p[i] = ptr[i];
	}
	p[len] = '\0';
}
String::String(const String &str)	//复制构造函数
{
	len = str.getLen();
	p = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';


}
char String::operator[](int length)const
{
	if (length > len)
		return p[len - 1];
	else
		return p[length];
}
int main()
{
	String s;
	cout << s.getLen() << endl;
	String str1("Hello");
	cout << sizeof(str1) << endl;
	cout << str1.getLen() << endl;
	system("pause");
	return 0;

}


////一个浅拷贝的例子
//
//class A
//{
//public:
//	A(){ x = new int; *x = 5; }
//	A(const A&a)
//	{
//		x = a.x;	//浅拷贝
//	}
//	void reset(int a)
//	{
//		*x = a;
//	}
//	void print()
//	{
//		cout << *x << endl;
//	}
//private:
//	int *x;
//};
//
//int main()
//{
//	A *a=new A();
//	a->print();
//	A b(*a);
//	a->reset(15);
//	b.print();
//	b.reset(25);
//	a->print();
//	system("pause");
//}


//一个深拷贝的例子
//class A
//{
//public:
//	A(){ p = new int; *p = 0; }//设置构造函数
//	A(const A&a)
//	{
//		p = new int;
//		*p = *(a.p);
//	}
//	void reset(int a)
//	{
//		*p = a;
//	}
//	void print()
//	{
//		cout << *p << endl;
//	}
//
//private:
//	int *p;
//};
//
//int main()
//{
//	A *a = new A();
//	a->print();
//	A b(*a);
//	a->reset(15);
//	b.print();
//	b.reset(25);
//	a->print();
//	delete a;
//	return 0;
//}