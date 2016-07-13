#include<iostream>

//构造函数的应用
class Student
{
private:
	char *name;
	int age;
	float score;
public:
	Student(char *, int, float);
	void say();

};

Student::Student(char *name1, int age1, float score1)
{
	name = name1;
	age = age1;
	score = score1;
}

void Student::say()
{
	std::cout << "name:" << name << std::endl << "age:" << age << std::endl << "score:" << score << std::endl;
}

int main10()
{

	Student stu("xiaoming", 15, 93);
	stu.say();
	return 0;
}

/*
class Student
{
private:			//定义私有变量
	int age;
	char *name;		//!@#$%^&*()字符串定义成指针的形式
	float score;
public:				//申明接口函数
	void setname(char  *name1);

	void setage(int age1);

	void setscore(float score1);

	void say();

};

void Student::setname(char *name1)
{
	name = name1;
}

void Student::setage(int age1)
{
	age = age1;
}
void Student::setscore(float score1)
{
	score = score1;
}
void Student::say()
{
	std::cout << "name:" << name << std::endl << "age:" << age << std::endl << "score:" << score << std::endl;

}

int main()
{
	Student stu;
	stu.setage(16);
	stu.setname("xiaoming");
	stu.setscore(92.5f);
	stu.say();

}
*/