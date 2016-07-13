#include"public.h"

class father
{
public:
	father(){ cout << "构造father" << endl; }
	~father(){ cout << "析构father" << endl; }
	virtual void smartFather()const { cout << "father 很帅" << endl; }
};

class mother
{
public:
	mother(){ cout << "构造mother" << endl; }
	~mother(){ cout << "析构mother" << endl; }
	virtual void beautifulMother()const { cout << "mother很漂亮" << endl; }
};

class son :public father, public mother
{
public:
	son(){ cout << "构造son" << endl; }
	~son(){ cout << "析构son" << endl; }
	virtual void smartFather()const { cout << "儿子很聪明" << endl; }
	virtual void beautifulMother()const { cout << "儿子很帅" << endl; }
	
};

int main()
{
	father *son1=new son;
//	son1.beautifulMother();
	son1->smartFather();
	system("pause");
}