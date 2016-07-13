//基类和继承

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class num_sequence
{
public:
	num_sequence()	{}
	virtual ~num_sequence()  {}	//将析构函数声明为虚函数

	virtual int elem(int pos) const = 0;	//在该类中，该函数无意义，声明为pure virtual
	virtual const char *what_i_am() const = 0;//返回确切的数列类型
	static int max_elems()	//类中的static在编译时就存在，类中的静态成员不能调用非静态成员
	{
		return _max_elems;
	}
	virtual ostream& print(ostream &os = cout) const = 0;

protected:
	const static int _max_elems = 1024;
	virtual void gen_elems(int pos)const = 0;	//产生直到pos位置的元素
	bool check_int(int pos)const;	
};

bool num_sequence::check_int(int pos)const	//检查pos是否为有效值
{
	if (pos<0 || pos>_max_elems)
	{
		cerr << "!! invalid position:" << pos
			<< " Cannot honor request!" << endl;
		return false;
	}
	return true;
}

ostream& operator << (ostream &os, const num_sequence &ns)
{
	return ns.print(os);
}


class Fibonacci :public num_sequence
{
public:
	Fibonacci(int length = 1, int beg_pos = 1) :_length(length), _beg_pos(beg_pos) {}	//
	virtual int elem(int pos) const;
	virtual const char *what_i_am()const { return "Fibonacci"; }
	virtual ostream& print(ostream &os = cout) const;
	int length() const   { return _length; }
	int beg_pos() const  { return _beg_pos; }

protected:
	int _length;
	int _beg_pos;
	virtual void gen_elems(int pos) const;
	static vector<int> _elems;
};

int Fibonacci::elem(int pos) const
{
	if (!check_int(pos))
		return 0;
	if (pos > _elems.size())
		Fibonacci::gen_elems(pos);

	return _elems[pos - 1];
}

void Fibonacci::gen_elems(int pos) const
{
	if (_elems.empty())
	{
		_elems.push_back(1);
		_elems.push_back(1);
	}

	if (_elems.size() <= pos)
	{
		int ix = _elems.size();
		int n_2 = _elems[ix - 2];
		int n_1 = _elems[ix - 1];

		for (; ix <= pos; ix++)
		{
			int elem = n_2 + n_1;
			_elems.push_back(elem);
			n_2 = n_1;	//将n_2 和n_1往后移动
			n_1 = elem;
		}
	}
}

ostream & Fibonacci::print(ostream &os) const
{
	int elem_pos = _beg_pos - 1;
	int end_pos = elem_pos + _length;

	if (end_pos > _elems.size())
		Fibonacci::gen_elems(end_pos);
	while (elem_pos < end_pos)
		os << _elems[elem_pos++] << " ";
	return os;
}

