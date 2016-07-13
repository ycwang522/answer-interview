#include"public.h"

template<class T>
class NameObject
{
public:
	NameObject(string &name, const T& value);

private:
	string &nameValue;//reference
	const T objectValue;//const
};

string newDog("Persephone");
string oldDog("Satch");
NameObject<int> p(newDog, 2);
NameObject<int> s(oldDog, 36);



class HomeForSale
{
public:
	;
private:
	HomeForSale(const HomeForSale &);	//将构造函数设置为private
	HomeForSale& operator =(const HomeForSale &);	//将copy assignment函数设置为private
	//此时，当用户企图拷贝HomeForSale对象的时候，编译器会阻挠它。
};

class Uncopable	//这是一个阻止调用复制构造函数和复制赋值操作符而设计的一个基类
{
protected:
	Uncopable();
	~Uncopable();
private:
	Uncopable(const Uncopable &);
	Uncopable &operator =(const Uncopable &);
};


