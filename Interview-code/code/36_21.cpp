#include"public.h"
// #include<Windows.h>
// #include<stdlib.h>

//class Point3D
//{
//public:
//	Point3D(){};
//	Point3D(int a, int b, int c)
//	{
//		x = a;
//		y = b;
//		z = c;
//	}
//
//	int getx(){ return x; }
//	int gety(){ return y; }
//	int getz(){ return z; }
//
//	~Point3D(){};
//	//����Ԫ�����ķ�ʽ����
//	
//	friend Point3D operator *(const Point3D &, const Point3D &);
//	friend Point3D operator +(const Point3D &, const Point3D &);
//	friend Point3D operator -(const Point3D &, const Point3D &);
//
//	//�Գ�Ա�����ķ�ʽ����
//	Point3D operator *(const Point3D &);
//	Point3D operator +(const Point3D &);
//	Point3D operator -(const Point3D &);
//
//private:
//	int x, y, z;
//};
//
//Point3D operator*(const Point3D &lhs, const Point3D &rhs)
//{
//	Point3D c;
//	c.x = lhs.x*rhs.x;
//	c.y = lhs.y*rhs.y;
//	c.z = lhs.z*rhs.z;
//	return c;
//}
//Point3D operator+(const Point3D &lhs, const Point3D &rhs)
//{
//	Point3D c;
//	c.x = lhs.x+rhs.x;
//	c.y = lhs.y+rhs.y;
//	c.z = lhs.z+rhs.z;
//	return c;
//}
//Point3D operator-(const Point3D &lhs, const Point3D &rhs)
//{
//	Point3D c;
//	c.x = lhs.x-rhs.x;
//	c.y = lhs.y-rhs.y;
//	c.z = lhs.z-rhs.z;
//	return c;
//}
//
//
//
////�Գ�Ա�����ķ�ʽ����
//Point3D Point3D::operator *(const Point3D &rhs)
//{
//	Point3D m;
//	m.x = rhs.x * x;
//	m.y = rhs.y * y;
//	m.z = rhs.z * z;
//	return m;
//}
//Point3D Point3D::operator+(const Point3D &rhs)
//{
//	Point3D n;
//	n.x = rhs.x + x;
//	n.y = rhs.y + y;
//	n.z = rhs.z + z;
//	return n;
//}
//Point3D Point3D::operator-(const Point3D &rhs)
//{
//	Point3D p;
//	p.x = x - rhs.x;
//	p.y = y - rhs.y;
//	p.z = z - rhs.z;
//	return p;
//}
//
//
//
//int main()
//{
//	Point3D a(0, 1, 2), b(1, 2, 3);
//	Point3D temp1,temp2,temp3;
//	cout << "����Ԫ�����ķ�ʽ����" << endl;
//
//	temp1 = a*b;
//	temp2 = a + b;
//	temp3 = a - b;
//	
//	cout << "(" << temp1.getx() << "," << temp1.gety() << "," << temp1.getz() << ")" << endl;
//	cout << "(" << temp2.getx() << "," << temp2.gety() << "," << temp2.getz() << ")" << endl;
//	cout << "(" << temp3.getx() << "," << temp3.gety() << "," << temp3.getz() << ")" << endl;
//
//
//	cout << "���Ա�����ķ�ʽ����" << endl;
//
//	Point3D temp4, temp5, temp6;
//	Point3D c(1, 2, 3), d(3, 2, 1);
//	temp4 = c*d;
//	temp5 = c.operator-(d);
//	temp6 = c + d;
//	cout << "(" << temp4.getx() << "," << temp4.gety() << "," << temp4.getz() << ")" << endl;
//	cout << "(" << temp5.getx() << "," << temp5.gety() << "," << temp5.getz() << ")" << endl;
//	cout << "(" << temp6.getx() << "," << temp6.gety() << "," << temp6.getz() << ")" << endl;
//
//	system("pause");
//}


//#define N 100	//�������Ĵ�С
//
//
//int count = 0;	//����������Ŀ��
//
//int produce_item()
//{
//	;
//}
//int remove_item()
//{
//	;
//}
//
//void Comsume_item(int)
//{
//
//}
//
//void Insert_item(int)
//{
//	;
//}
//
//void wakeup(int)
//{
//	;
//}
//
//void(*f)(void);
//
//void producer(void)
//{
//	int item;
//	int consumer;
//	while (TRUE)
//	{		
//		item = produce_item();	//����������һ����Ʒ����鵱ǰ����������Ʒ������ʼ״̬��
//		//��Ʒ��Ϊ0
//		if (count == N)	//�����������N����Ŀʱ���ý������ߣ�����CPU���������������Ʒ����������sleep
//			Sleep(10e9);//10e9�ڸô����������
//		Insert_item(item);
//		//�������������Ʒ��δ������������������Ʒ������countִ��++����
//		count += 1;
//		if (count == 1)//������һ����Ʒ֮����Ʒ������Ϊ1����˵�������֮ǰ��ƷΪ0��
//			wakeup(consumer);//�������п���ȥ˯���ˣ���ִ�н��������ߵĶ���
//	}
//}
//
//
//void consumer(void)
//{
//	int producer;
//	int item;
//	while (TRUE)
//	{
//		if (count == 0)			//�����ߵ�����������Ʒ����Ϊ0ʱȥ˯��
//			Sleep(100);
//		item = remove_item();	//������������Ʒ��Ϊ0ʱ��ȡ��һ����Ʒ
//		count -= 1;				//ִ��count--����
//		if (count == N - 1)		//���ȡ��һ��֮����N-1������ȡ֮ǰ��N�������п����������ڷ���֮��ȥ˯���ˣ�����������
//			wakeup(producer);
//		Comsume_item(item);
//	}
//}
//
//int main()
//{
//	f = producer;
//}

//#define N 10
//typedef int semaphore;
//semaphore mutex = 1;
//semaphore empty = N;	//��ʼʱȫ�����ǿ�
//semaphore full = 0;		//��ʼʱ������û����Ʒ
//
//int down(semaphore  *s)
//{
//	*s -= 1;
//	return *s;
//}
//int up(semaphore *s)
//{
//	*s += 1;
//	return *s;
//}
//
//void producer(void)
//{
//	int item;
//	while (TRUE)
//	{
//		item = produce_item();
//		down(&empty);
//		down(&mutex);
//		Insert_item(item);
//		up(&mutex);
//		up(&full);
//	}
//}
//
//void comsumer(void)
//{
//	int item;
//	while (TRUE)
//	{
//		down(&full);
//		down(&mutex);
//		item = remove_item();
//		up(&mutex);
//		up(&empty);
//		Comsume_item(item);
//	}
//}

//#include<string>
//
//using std::string;
//
//int main()
//{
//	//string str1 = "hello world";
//	string a[] = { "a","b","c" };
//	char ch[] = "hello world";
//	bool c;
//	cout << sizeof(c) << endl;
//
//	cout << "sizeof(str1)=" << sizeof(a) << endl << "sizeof(ch)=" << sizeof(ch) << endl;
//
//	system("pause");
//
//	struct s1
//	{
//		int i : 8;
//		int j : 4;
//		double b;
//		int a : 3;
//	};
//	struct s2
//	{
//		int i;
//		int j;
//		double b;
//		int a;
//	};
//	struct s3
//	{
//		int i;
//		int j;
//		int a;
//		double b;
//	};
//	struct s4
//	{
//		int i : 8;
//		int j : 4;
//		int a : 3;
//		double b;
//	};
//	cout << sizeof(s1) << endl;   // 24
//	cout << sizeof(s2) << endl;   // 24
//	cout << sizeof(s3) << endl;   // 24
//	cout << sizeof(s4) << endl;   // 16
//	s4 s5;
//	cout << &s5<< endl;
//}