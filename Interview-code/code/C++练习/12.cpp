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
	std::cout << name << "��������" << age;
}

class Student :public People	//������
{
private:
	float score;
public:
	Student(char*, int, float);
	void display1();

};

Student::Student(char *name, int age, float score)
{
	this->setname(name);	//����name��age�ǻ����е�˽�г�Ա����
	//�������еĺ�����Ա����ֱ�ӷ������ǣ���˵��û����еĳ�Ա���������ʡ�
	this->setage(age);
	this->score = score;
}

void Student::display1()
{
	this->display();
	std::cout << ",�ĳɼ���" << score << std::endl;
}

int main()
{
	Student stu("С��", 15, 96);
	stu.display1();
	return 0;
}