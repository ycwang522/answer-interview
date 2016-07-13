#include<iostream>

using namespace std;

struct Calen
{
	int year;
	int month;
	int day;
	void display1();
};

void Calen::display1()
{
	std::cout << year << "年" << month << "月" << day << "日" << std::endl;
}

class Calen2
{
private:
	int month;
	int year;
	int day;
public:
	void display2();
	Calen2();
	Calen2(int ye, int mon, int da) //带参数的构造函数
	{
		year = ye;
		month = mon;
		day = da;
	}
};

void Calen2::display2()
{
	std::cout << year << "年" << month << "月" << day << "日" << std::endl;
}

void main()
{
	Calen ca1;
	ca1.day = 20;
	ca1.month = 03;
	ca1.year = 2016;
	ca1.display1();
	Calen2 ca2(2016, 03, 9);
	ca2.display2();
	//return 0;
}
