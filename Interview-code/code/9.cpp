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

//�������͵ĸ�ֵ������ֵ��
//���һ��Ů��
//���ԣ���ġ���ò���ͷ������ϵء�ϴ�롢ϴ�ˣ�	��������-����������-ģ��

class Student
{
public:
	int age;
	char name;
	double score;
public:	//����һ�����Խ��ຯ������������������������ж���ʱ������Ҫ��ǰ�߼������������޶���
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
	cout << "j�ĵ�ַΪ��"<<&j;
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
�ֲ���̬������ʹ��

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
cout << "a�ĵ�ַ�ǣ�" << &a << endl;
int b = 20;
cout << "����֮ǰ��a=" << a << "  b=" << b << endl;
change(&a, &b);
cout << "����֮ǰ��a=" << a << "  b=" << b;
system("pause");
}
*/

/*
static int a = 1;	//����ȫ�־�̬����
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
static int a = 4;	//��̬�ֲ�����ֻ�Զ������ĺ�����ʼ�տɼ���������ִ���������Ȼ�����ڣ����޷����������������ˡ�
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