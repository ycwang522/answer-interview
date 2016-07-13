#include<iostream>

class Student
{
private:
	char *name;
	int age;
	float score;
public:
	Student(char *, int, float);
	friend void display(Student&);	//��display��������Ϊ��Ԫ����
};

Student::Student(char *name, int age, float score)	//���캯���Ķ���
{
	this->name = name;
	this->age = age;
	this->score = score;
}

//��ͨ��Ա����
void display(Student &stu)
{
	std::cout << stu.name << "��������" << stu.age << ",�ɼ���" << stu.score << std::endl;
}

int main()
{
	Student stu("С��", 15, 93);
	display(stu);
	return 0;
}

