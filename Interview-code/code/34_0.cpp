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
	HomeForSale(const HomeForSale &);	//�����캯������Ϊprivate
	HomeForSale& operator =(const HomeForSale &);	//��copy assignment��������Ϊprivate
	//��ʱ�����û���ͼ����HomeForSale�����ʱ�򣬱���������������
};

class Uncopable	//����һ����ֹ���ø��ƹ��캯���͸��Ƹ�ֵ����������Ƶ�һ������
{
protected:
	Uncopable();
	~Uncopable();
private:
	Uncopable(const Uncopable &);
	Uncopable &operator =(const Uncopable &);
};


