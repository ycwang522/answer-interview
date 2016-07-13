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
String::String(const char *const ptr)	//����һ���ַ�����Ҫ���ܹ�Ϊ�ַ����Զ������ڴ�ռ�
{
	len = strlen(ptr);
	p = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		p[i] = ptr[i];
	}
	p[len] = '\0';
}
String::String(const String &str)	//���ƹ��캯��
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


////һ��ǳ����������
//
//class A
//{
//public:
//	A(){ x = new int; *x = 5; }
//	A(const A&a)
//	{
//		x = a.x;	//ǳ����
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


//һ�����������
//class A
//{
//public:
//	A(){ p = new int; *p = 0; }//���ù��캯��
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