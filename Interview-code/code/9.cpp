#include<iostream>
using namespace std;

char a[] = "ABCDEF"; 
char b[] = { 'A', 'B', 'C', 'D', 'E', 'F' };

class Car
{
public:
	std::string color;
	std::string engine;
	float gas_tank;
	
};
Car car1, car2;

//变量类型的赋值，当赋值是
//设计一个女仆
//属性（身材、相貌）和方法（拖地、洗碗、洗菜）	、、属性-变量，方法-模板

class Student
{
public:
	int age;
	char name;
	double score;
public:	//方法一、可以将类函数（方法）定义于类里，在类中定义时，不需要在前边加上类名予以限定。
	void say();
	//{
	//	std::cout << "what are you nonshane?" << age << name << score<<std::endl;
	//}
};

void Student::say()
{
	std::cout << "what are you nonshane?" << age << name << score << std::endl;

}


//class MyClass
//{
//public:
//	MyClass();
//	~MyClass();
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass::~MyClass()
//{
//}

/*
int main(void)
{
	int m = 5;
	cout << &m << endl;
	if (m++>5)
		cout << m << endl;	
	
	else cout << --m;
	cout << m << endl;
	return 0;
}
*/

/*
void swap_int(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << a << " " << b << endl;
	swap_int(&a, &b);
	cout << a << " " << b << endl;
}
*/

/*
int main()
{
	const int i = 0;
	int *j = (int *)&i;
	cout << "j的地址为："<<&j;
	*j = 1;
	printf("%d,%d", i, *j);
}
*/

/*
size_t cout_()
{
static size_t ctr= 0;
return ++ctr;
}

int main()
{
for (int i = 0; i != 10; i++)
{
std::cout << cout_() << std::endl;
}
return 0;
}
*/

/*
**CPP 6.7
局部静态变量的使用

using namespace std;


int main()
{
for (int i = 0; i != 10; i++)
cout << diaoyong() << endl;
system("pause");
return 0;
}
*/

/*
void change(int *p1,int *p2)
{
int temp = *p1;
*p1 = *p2;
*p2 = temp;
//	cout << *p1 << " " << "p2" << endl;
}
void main()
{
int a = 10;
cout << "a的地址是：" << &a << endl;
int b = 20;
cout << "交换之前：a=" << a << "  b=" << b << endl;
change(&a, &b);
cout << "交换之前：a=" << a << "  b=" << b;
system("pause");
}
*/

/*
static int a = 1;	//定义全局静态变量
void fun1(void)
{
a = 2;
}
void fun2(void)
{

int a = 3;
}
void fun3(void)
{
static int a = 4;	//静态局部变量只对定义它的函数体始终可见，函数体执行完过后虽然还存在，但无法被其他函数调用了。
}

int main( )
{
printf("%d\n", a);
fun1();
printf("%d\n", a);
fun2();
printf("%d\n",a);
fun3();
printf("%d\n", a);
}
*/

/*
using namespace std;
static int a = 1;
static int b ;
//cout << b << " " << a << endl;
void fun(void)
{
a += 3;
static int a = 4;
a += 2;
b++;
cout << b << " " << a << endl;
int b = 10;
cout << b << " " << a << endl; //
}
int main()
{
static int a = 9;
b++;
cout << b << " " << a << endl;
fun();
cout << b << " " << a << endl;
fun();
cout << b << " " << a << endl;
}
*/

/*
void change(int*a, int&b, int c)
{
c = *a;
b = 30;
*a = 20;
}
int main()
{
int a = 10, b = 20, c = 30;
printf("%d, %d, %d\n", a, b, c);
change(&a, b, c);
printf("%d, %d, %d", a, b, c);
return 0;
}
*/