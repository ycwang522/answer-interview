//�麯��ʵ�ֶ�̬��һ���������ӡ�
#include<iostream>
using namespace std;
class A
{
public:
	virtual void foo()
	{
		cout << "A::foo() is called" << endl;
	}
};
class B :public A
{
	void foo()
	{
		cout << "B::foo() is called" << endl;
	}
};
int main()
{
	A *a = new B();
	a->foo();
	return 0;
}

