#include"public.h"

/*
class num
{
public:
	num()
	{
		number = 0;
		cout << "默认构造函数执行" << endl;
	}
	num(int i)	
	{ 
		number = i; 
		cout << "构造函数执行" << endl;
	}
	~num()
	{
		cout << "析构函数执行" << endl;
	}


	int getnumber()const
	{
		return number;
	}
	void reset(int n)
	{
		number = n;
	}
	num operator++()
	{
		++number;
		num temp;
		temp.reset(number);
		return temp;
	}

	void display()
	{
		cout << number << endl;
	}
private:
	int number;
};

int main()
{
	num n1;
	n1.display();
	n1.reset(1);
	n1.display();
	n1.operator++();
	n1.display();
	++n1;
	n1.display();

	num x = ++n1;
	n1.display();

	system("pause");
}
*/
/*
class addition
{
public:
	addition()
	{
		n1 = 0;
		cout << "构造函数执行" << endl;
	}
	addition(const addition& add1)	//复制构造函数
	{
		this->n1 = add1.n1;
		cout << "复制构造函数执行" << endl;
	}
	addition(int m)
	{
		n1 = m;
		cout << "构造函数1执行" << endl;
	}
	~addition(){ cout << "析构函数执行" << endl; }
	int getnum()const { return n1; }
	void set(int n){ n1 = n; }
	void add(){ n1++; }

	const addition &operator++()
	{
		++n1;
		return *this;
	}
	const addition operator++(int )
	{
		addition temp(*this);
		++n1;
		return temp;
	}

	
private:
	int n1;
};
*/
/*
class add
{
public:
	add(){ number = 0; cout << "default constructor" << endl; }
	add(int ad){ number = ad; cout << "constructor" << endl; }
	~add()
	{
		cout << "destructor" << endl;
	}
	int addition(const add&m)
	{
		return (number + m.number);
	}

	int operator+(add &rhs)
	{
		return number + rhs.number;
	}

	void print()
	{
		cout << number << endl;
	}

private:
	int number;
};

int main()
{
	add a(5), b(6);
	add c;
	c = a + b;
	c.print();

	system("pause");
}
*/
/*
class A
{
public:
	A(int m, int n) :i(m), j(n){}
	void set(int p, int q)
	{
		i = p;
		j = q;
	}
	void print();

private:
	int i;
	int j;
};

void A::print()
{
	cout << i*j << endl;
}
int main()
{
	A *a = new A(2, 3);
	a->print();
	a->set(8,9);
	a->print();

	system("pause");
	}*/

class A
{
public:
	A()	//constructor
	{
		p = new int;
		*p = 5;
	}
	~A()
	{
		delete p;
		cout << "调用析构函数" << endl;
	}
	A(const A&a)
	{
		cout << "复制构造函数被调用" << endl;
		p = a.p;
	}
	void print()
	{
		cout << "The private is " << *p << endl;
	}
	void set(int a)
	{
		cout << "set函数被调用" << endl;
		*p = a;
	}
	
private:
	int *p;
};

int main()
{
	A *a = new A();
	cout << "a:"; a->print(); cout << endl;

	A b(*a);
	a->set(32);
	b.print();
	b.set(108);
	a->print();
//	delete a;
	return 0;
	

	
}