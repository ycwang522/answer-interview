#include<iostream>
#include<string>



#ifndef CP5_ch7_03
#define CP5_ch7_03
class Person
{
public:
	const std::string& rename()const
	{
		return name;
	}

	const std::string &readdress()const	//thisָ��Ĭ��ָ�������͵ķǳ����汾�ĳ���ָ��
	{
		return address;
	}




	Person();
	~Person();

private:
	std::string name;
	std::string address;
};

Person::Person()
{
}

Person::~Person()
{
}
#endif


void main()
{
	int a = 0xabcd1234;
	char b = ((char*)&a)[0];

	
	std::cout << c << std::endl;
	//printf("%x", b);
}
