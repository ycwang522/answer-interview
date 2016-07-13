//派生类的定义

#include<iostream>
#include<string>
#include<vector>

using namespace std;


typedef string elemType;
class Stack
{
public:
	virtual ~Stack();

	virtual bool pop(elemType&) = 0;				//弹出
	virtual bool push(const elemType&) = 0;			//压入
	virtual bool peek(int index, elemType&) = 0;	//判断是否到栈顶

	virtual int top() const = 0;						//
	virtual int size() const = 0;						//求长度

	virtual bool empty() const = 0;						//判断是否为空
	virtual bool full() const = 0;						//判断是否为满
	virtual void print(ostream & = cout) const = 0;		//打印

};

ostream& operator << (ostream &os, const Stack &rhs)
{
	rhs.print();
	return os;
}


class LIFO_Stack:public Stack
{
	LIFO_Stack(int capacity = 0) :_top(0)
	{
		if (capacity)
			_stack.reserve(capacity);
	}

	int size() const { return _stack.size(); }
	bool empty() const { return ! _top; }
	bool full() const { return size() >= _stack.max_size(); }	//判断栈满
	int top() const { return _top; }
	void print(ostream &os = cout)const;

	bool pop(elemType &elem);
	bool push(const elemType &elem);
	bool peek(int, elemType&){
		return false;
	}


private:
	int _top;
	vector<elemType>_stack;
};

bool LIFO_Stack::pop(elemType &elem)	//弹出元素的算法
{
	if (empty())
		return false;
	elem = _stack[--_top];
	_stack.pop_back();
	return true;
}


bool LIFO_Stack::push(const elemType &elem)
{
	if (full())
		return false;
	_stack.push_back(elem);
	++_top;
	return true;
}

void LIFO_Stack::print(ostream &os)const
{
	vector<elemType>::const_reverse_iterator
		rit = _stack.rbegin(),
		rend = _stack.rend();
	os << "\n\t";
	while (rit != rend)
	{
		os << *rit++ << endl;
	}
	os << endl;
}
