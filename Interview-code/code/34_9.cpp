#include"public.h"

//1
/*
void func(int x = 0, int y = 0);

void func(int x, int y)
{
	cout << x << "\t" << y << endl;
}
class rectangular
{
public:
	rectangular() :width(3), length(5){ cout << "the area is " << width*length << endl; }

	int area()
	{
		return width*length;
	}
private:
	int width;
	int length;
};
int main()
{
	int *p = new int;
	cout << p << endl;
	*p = 10;
	int *p1;
	p1 = p;
	*p1 = 11;
	delete p;
		system("pause");
	func();
	func(3);
	
	rectangular b;
	system("pause");
}
*/

//2
/*
class A
{
public:
	A(int i,int j) 
	{
		member = i; 
		number = j; 
	}
	A(A&rhs)
	{ 
		member = rhs.member;
		number = rhs.number; 
	}
	void print()
	{
		cout << member << "\t" << number << endl;
	}

private:
	int member;
	int number;
};

int main()
{
	A a(2,4);
	a.print();
	A b(a);
	b.print();

	system("pause");
}*/

//3
/*
class A
{
public:
	A(int a, int b){ m = a; n = b; cout << "Complete the constructor!" << endl; }
	void print(){ cout << "The multiple is " << m*n << endl; }
	void set(int c, int d){ m = c; n = d; cout << "The value is reset!" << endl; }
private:
	int m, n;
	
};

int main()
{
	A a(2, 5);
	a.print();
	a.set(3, 9);
	a.print();

	system("pause");
}*/

//4
/*
class number
{
public:
	number() { num = 1; }
	~number(){}
	int getnumber() const 
	{ 
		return num; 
	}
	void reset(int n) { num = n; }
	void cpp() { ++num; }

	void operator++(){ ++num; }

private:
	int num;
};

int main2()
{
	number i;
	cout << i.getnumber() << endl;
	i.cpp();
	cout << i.getnumber() << endl;
	++i;
	cout << i.getnumber() << endl;
	system("pause");
}
*/

//5
/*
class complex
{
public:
	complex()
	{ 
		real = 0; 
		imag = 0; 
	}
	complex(double r, double i)
	{ 
		real = r; 
		imag = i;
	}
	complex operator+(complex &c2);	//申明+重载
	void display();


private:
	double real;
	double imag;
};

complex complex::operator+(complex &c2)
{
	complex c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}

void complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}

int main()
{
	complex c1(3, 4), c2(5, -8), c3;
	c3 = c1 + c2;
	cout << "c1=";
	c1.display();
	cout << "c2=";
	c2.display();
	cout << "c3=";
	c3.display();

	system("pause");
}
*/

//6
/*
//运算符重载
class complex
{
public:
	complex()	//default constructor
	{
		real = 0;
		imag = 0;
	}

	complex(double real1, double imag1)	//overload the constructor
	{
		real = real1;
		imag = imag1;
	}

	complex operator+(complex &c2)
	{
		complex c3;
		c3.real = real + c2.real;
		c3.imag = imag + c2.imag;
		return c3;
	}

	void display()
	{
		cout << "(" << real << "," << imag << "i)" << endl;
	}

private:
	double real;
	double imag;
}; 


int main()
{
	complex c1(1, 1), c2(-1, 2), c3;
	c3 = c1 + c2;	
	//在编译器中，解释为：c1.operator+(c2)，即c1对象调用operator+（）函数，函数的实参为c2。
	cout << "c1=";
	c1.display();
	cout << "c2=";
	c2.display();
	cout << "c3=";
	c3.display();

	system("pause");
	}
*/