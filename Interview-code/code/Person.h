#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h
#include<string>
class Person
{
private:
	std::string name;
	std::string address;
public:
	std::string name1(std::string);
	std::string address1(std::string);
	Person();
	~Person();
};
#endif 