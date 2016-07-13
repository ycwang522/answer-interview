#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h
#include<string>
#include<iostream>
class Person
{
private:
	std::string name;
	std::string address;
public:
	const std::string &getName() const { return name; }
	const std::string &getAddress() const{ return address; }
};



#endif