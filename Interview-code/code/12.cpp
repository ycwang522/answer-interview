#include<iostream>
class People
{
private:
	char *name;
	int age;
public:
	void setname(char*);
	void setage(int);
	void display();
};

void People::setname(char *name)
{
	this->name=name;
}

void People::setage(int age)
{
	this->age = age;
}

void People::display()
{
	std::cout << name << "的年龄是" << age;
}

class Student :public People	//派生类
{
private:
	float score;
public:
	Student(char*, int, float);
	void display1();

};

Student::Student(char *name, int age, float score)
{
	this->setname(name);	//由于name和age是基类中的私有成员变量
	//派生类中的函数成员不能直接访问他们，因此调用基类中的成员函数来访问。
	this->setage(age);
	this->score = score;
}

void Student::display1()
{
	this->display();
	std::cout << ",的成绩是" << score << std::endl;
}

int main()
{
	Student stu("小明", 15, 96);
	stu.display1();
	return 0;
}