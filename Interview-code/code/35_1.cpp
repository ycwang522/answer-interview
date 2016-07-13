#include"public.h"

/*
class A
{
public:
	A()
	{
		p = new int;
		*p = 5;//default constructor
		cout << "调用默认构造函数" << endl;
	}
	A(const A &a)
	{
		cout << "调用复制构造函数" << endl;
		p = new int;
		*(p) = *(a.p);
	}
	void reset(int a)
	{
		*p = a;
	}
	void print()
	{
		cout << *p << endl;
	}
	~A()
	{
		delete p;
		p = NULL;
		cout << "析构函数被调用" << endl;
	}

private:
	int *p;
};

int main()
{
	A *a = new A();
	a->print();
	A b(*a);
	a->reset(10);
	b.print();
	b.reset(20);
	a->print();
	delete a;
	system("pause");
}
*/

//深层复制构造函数
/*
class A
{
public:
	A(){ p = new int; *p = 5; }
	~A(){ delete p; p = NULL; }
	A(const A &rhs)	//深层复制构造函数
	{
		p = new int;	//新开辟一段int空间
		*(p) = *(rhs.p);//将参数中地址对应的值存入新开辟的空间中
	}
	void print()const
	{
		cout << *p << endl;
	}
	void reset(int a)
	{
		*p = a;
	}
private:
	int *p;
};

int main()
{
	A *a = new A();
	a->print(); 
	A b(*a);//调用复制构造函数
	b.print();
	b.reset(10);
	a->print();
	a->reset(15);
	b.print();

	system("pause");


	}*/

/*
class num
{
public:
	num()
	{
		n = 0;
	}
	num(int a)
	{
		n = a;
	}
	void print()const
	{
		cout << n << endl;
	}
	void reset(int b)
	{
		n = b;
	}
	int getnum()
	{
		return n;
	}
	num equal(const num &rhs)
	{
		n = rhs.n;
		return *this;
	}



private:
	int n;
};

int main()
{
	num one(1), two(2);
	one.print();
	two.print();
	one = one.equal(two);
	one.print();
	system("pause");
}
*/

/*
class num
{
public:
	num(){ p = new int; *p = 0; }
	num(int a){ p = new int; *p = a; }
	num(const num &rhs){ p = new int; *p = *(rhs.p); }//复制构造函数，开辟新空间
	void print()const { cout << *p << endl; }
	void reset(int m){ *p = m; }
	num equal(const num &rhs){ p = new int; *p = *(rhs.p); return *this; }
	int getnumber(){ return *p; }
	num operator=(const num &rhs){ p = new int; *p = *(rhs.p); return *this; }


private:
	int *p;
};

int main()
{
	num *one = new num(3);
	one->print();
	num two;
	two.print();
	two = two.equal(*one);
	two.print();
	delete one;
	two.print();

	num *a = new num(6);
	a->print();
	num b;
	b = *a;
	b.print();
	system("pause");
	}*/

/*
class num
{
public:
	num(){ number = 0; }
	num(int a){ number = a; }
	void print(){ cout << number; }
private:
	int number;
};

int main()
{
	num a;
	int x = 100;
	a = x;
	a.print();
	system("pause");
	}*/

//多重继承
/*
class father
{
private:
	int tall;
public:
	father(){ tall = 0; }
	father(int f){ tall = f; }
	void setFatherTall(int a){ tall = a; }
	void printFather()const { cout << "身高="<<tall << endl; }
};

class mother
{
private:
	int height;
public:
	mother() { height = 0; }
	mother(int h){ height = h; }
	void setMotherHeight(int b){ height = b; }
	void printMother()const { cout << "体重=" << height << endl; }
};

class son:public father,public mother
{
private:
	int age;
public:
	son(){ age = 0; }
	son(int a){ age = a; }
	void setSonAge(int c){ age = c; }
	void print()const { printFather(); printMother(); cout << "年龄=" << age << endl; }

};

int main()
{
	son a;
	a.print();
	a.setFatherTall(178);
	a.setMotherHeight(50);
	a.setSonAge(24);
	a.print();

	system("pause");

}
*/