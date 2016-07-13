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

//ִ�й��̣�����ȡ��paָ��ָ��Ķ�������ָ�룬���ֵ�������ĵ�ַ�����ڵ��õĺ���B::func1�����ǵ�һ���麯����
//����ȡ��vtbl��һ���������ֵ�����ֵ����B::fun1()�ĵ�ַ�����������������
//���ֻҪvptr��ͬ��ָ���vtbl�Ͳ�ͬ������ͬ��vtbl��װ�Ŷ�Ӧ����麯����ַ
//��ɶ�̬��

//�麯��ִ��ʱ�������Ϣ��vptr�����ָ��


//��һ���򵥵Ļ���

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