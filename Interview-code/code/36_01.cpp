#include"public.h"

using std::string;

void logCall(const string &funcName);
class Customer
{
public:
	Customer(const Customer &rhs);	//复制构造函数
	Customer & operator=(const Customer& rhs);	//copy assignment 操作符

private:
	string name;
};

Customer::Customer(const Customer& rhs) :name(rhs.name)
{
	logCall("Customer copy constructor!");	//复制构造函数实现
}

Customer& Customer::operator=(const Customer &rhs)	//copy assignment 实现
{
	logCall("copy assignment !");
	name = rhs.name;
	return *this;	//EC条款第10条，重载运算符时，返回一个指向指向*this的引用。
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
	;	//担负起为基类进行初始化的重任。
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer &rhs)
{
	Customer::operator=(rhs);
	priority = rhs.priority;
	return *this;
}

