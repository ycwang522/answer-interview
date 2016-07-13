//���캯��һ���ϼѵ�д��

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

//��ͨ�Ĺ��캯��
ABEntry::ABEntry(const std::string &name, const std::string &address, const std::list<PhoneNumber>&phones)
{
	theName = name;
	theAddress = address;	//��Щ���Ǹ�ֵ(assignments)
	thePhones = phones;		//�����ǳ�ʼ����initializations��
	numTimeConsulted = 0;	
}

//real initialization

//���캯���Ľϼѵ�д����ִ��Ч�ʸ���
//ѧ������Ա��ֵ�У�member inlitialization list��
ABEntry::ABEntry(const std::string &name, const string &address, const std::list<PhoneNumber>&phones)
	:theName(name),
	theAddress(address),
	thePhones(phones),
	numTimeConsulted(0)
{}

//�ټ���ABEntry��һ���޲������캯�����������·���ʵ��
ABEntry::ABEntry()
	:theName(),
	theAddress(),
	thePhones(),
	numTimeConsulted(0)
{}

