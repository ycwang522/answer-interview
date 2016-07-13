#include<iostream>

class Student
{
private:
	char *name;
	int age;
	float score;
public:
	Student(char *, int, float);
	friend void display(Student&);	//将display函数申明为友元函数
};

Student::Student(char *name, int age, float score)	//构造函数的定义
{
	this->name = name;
	this->age = age;
	this->score = score;
}

//普通成员函数
void display(Student &stu)
{
	std::cout << stu.name << "的年龄是" << stu.age << ",成绩是" << stu.score << std::endl;
}

int main()
{
	Student stu("小明", 15, 93);
	display(stu);
	return 0;
}

