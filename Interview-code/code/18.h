//构造函数一个较佳的写法

#include<string>
#include<list>
using namespace std;
class PhoneNumber
{

};


class ABEntry
{
public:
	ABEntry(const std::string &name, const std::string &address, const std::list<PhoneNumber>&phones);
private:
	std::string theName;
	std::string theAddress;
	std::list<PhoneNumber>thePhones;
	int numTimeConsulted;
};

//普通的构造函数
ABEntry::ABEntry(const std::string &name, const std::string &address, const std::list<PhoneNumber>&phones)
{
	theName = name;
	theAddress = address;	//这些都是赋值(assignments)
	thePhones = phones;		//而不是初始化（initializations）
	numTimeConsulted = 0;	
}

//real initialization

//构造函数的较佳的写法，执行效率更高
//学名：成员初值列（member inlitialization list）
ABEntry::ABEntry(const std::string &name, const string &address, const std::list<PhoneNumber>&phones)
	:theName(name),
	theAddress(address),
	thePhones(phones),
	numTimeConsulted(0)
{}

//再假设ABEntry有一个无参数构造函数，可用如下方法实现
ABEntry::ABEntry()
	:theName(),
	theAddress(),
	thePhones(),
	numTimeConsulted(0)
{}

