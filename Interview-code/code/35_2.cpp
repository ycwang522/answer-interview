#include"public.h"

class father
{
public:
	father(){ cout << "����father" << endl; }
	~father(){ cout << "����father" << endl; }
	virtual void smartFather()const { cout << "father ��˧" << endl; }
};

class mother
{
public:
	mother(){ cout << "����mother" << endl; }
	~mother(){ cout << "����mother" << endl; }
	virtual void beautifulMother()const { cout << "mother��Ư��" << endl; }
};

class son :public father, public mother
{
public:
	son(){ cout << "����son" << endl; }
	~son(){ cout << "����son" << endl; }
	virtual void smartFather()const { cout << "���Ӻܴ���" << endl; }
	virtual void beautifulMother()const { cout << "���Ӻ�˧" << endl; }
	
};

int main()
{
	father *son1=new son;
//	son1.beautifulMother();
	son1->smartFather();
	system("pause");
}