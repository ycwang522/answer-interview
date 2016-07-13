#include<iostream>
#include<string>

using namespace std;

class girl
{
	girl();

	girl(int age,string name)
	{
		age = 20;
		name = "sunxiaofen";
	}
private:
	int age;
	string name;
	
public:
	friend class boy;

};


class boy
{
public:
	void display(girl &);
}by1;

void boy::display(girl &x)
{
	cout << "name of the girl is:" << x.name << endl
		<< "and age of the girl is:" << x.age << endl;
}

int main()
{
	girl sxf;
	//sxf.age = 20;
	//sxf.name = "sunxiaofen";
	by1.display(sxf);
	system("pause");

}