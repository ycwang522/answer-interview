//虚函数表

#include"public.h"

class B
{
	virtual void f()
	{
		cout << "Base::f" << endl;
	}
	virtual void g()
	{
		cout << "Base::g" << endl;
	}
	virtual void h()
	{
		cout << "Base::h" << endl;
	}
};

int main()
{
	B b;
	typedef void(*fun)(void);
	fun Pfun = NULL;
	cout << "虚函数表地址：" << (int *)(&b) << endl;
	cout << "虚函数表第一个函数地址" << (int *)*(int *)(&b)<<endl;
	Pfun = (fun)*((int *)*(int *)(&b));
	Pfun();
	system("pause");
}