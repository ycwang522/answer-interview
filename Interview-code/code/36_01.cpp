#include"public.h"

using std::string;

void logCall(const string &funcName);
class Customer
{
public:
	Customer(const Customer &rhs);	//���ƹ��캯��
	Customer & operator=(const Customer& rhs);	//copy assignment ������

private:
	string name;
};

Customer::Customer(const Customer& rhs) :name(rhs.name)
{
	logCall("Customer copy constructor!");	//���ƹ��캯��ʵ��
}

Customer& Customer::operator=(const Customer &rhs)	//copy assignment ʵ��
{
	logCall("copy assignment !");
	name = rhs.name;
	return *this;	//EC�����10�������������ʱ������һ��ָ��ָ��*this�����á�
}

class PriorityCustomer:public Customer
{
public:
	PriorityCustomer(const PriorityCustomer &rhs);
	PriorityCustomer &operator=(const PriorityCustomer &rhs);
private:
	int priority;
};

PriorityCustomer::PriorityCustomer(const PriorityCustomer &rhs) :priority(rhs.priority)
{
	logCall("priorityCustomer constructed!");
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer &rhs)
{
	priority = rhs.priority;
	return *this;
}


PriorityCustomer::PriorityCustomer(const PriorityCustomer&rhs) :Customer(rhs), priority(rhs.priority)
{
	;	//������Ϊ������г�ʼ�������Ρ�
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer &rhs)
{
	Customer::operator=(rhs);
	priority = rhs.priority;
	return *this;
}

