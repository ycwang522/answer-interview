#include<iostream>
#include<string>

using namespace std;

class Transation
{
public:
    Transation();
    virtual void logTransation() const=0;	//´¿Ðéº¯Êý


};

Transation::Transation()
{
	logTransation();
}

class BuyTransation :public Transation
{
public:
	virtual void logTransation() const;
};

class SellTransation :public Transation
{
public:
	virtual void logTransation()const;
};

int main()
{
	BuyTransation buy;
	system("pause");
}
