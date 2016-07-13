#include"public.h"

/*
class A
{
public:
	static int total ;
	A(int num) :it(num)
	{
		total++;	//调用一次构造函数静态变量执行+操作，有构造函数的时候不再生成默认构造函数
	}
	virtual ~A()
	{
		total--;	//调用一次析构函数执行一次--操作
	}
	virtual int get() 
	{ 
		return it; 
	}	
	virtual void set(int age) 
	{ 
		it = age; 
	}
private:
	int it;
};

int A::total = 0;	//非静态数据常量须在类外进行初始化，初始化时使用作用域：：

int main()
{
	const int max = 5;
	A *a[max];
	for (int i = 0; i < max; i++)
	{
		a[i] = new A(i);
		//当生成一个A(i)的时候，调用构造函数A(int num)，私有变量it被初始化为num，同时total+=1
	}
	for (int i = 0; i < max; i++)
	{
		cout << "该类有" << A::total << "个对象。" << endl;
		cout << "正在删除第" << a[i]->get() << "个对象" << endl;
		delete a[i];
	}
	return 0;
}
*/

/*
class A
{
public:
	void static func()
	{
		cout << A::n << endl;
		n++;
	}

private:
	static int n;
};
int A::n = 0;
int main()
{
	int i;
	for(i = 0; i < 5; i++)
	{
		A::func();
		cout << endl;
	}
}
*/

#include<string>
using std::string;
int main()
{
	string str = "I'am a string type.";
	char ch[] = "I'm a char type.";
	cout << str << endl;
	cout << ch << endl;
	cout << "请输入“狗”的英文单词：";
	cin >> str;
	if (str == "dog")
	{
		cout << "correct input!" << endl;
		cout << "该单词的首字母是:" << str[0] << endl;
	}
	else
		cout << "输入不正确" << endl;

	cout << "请输入“猪”的英文单词" ;
	cin >> ch;
	if (ch == "pig")
	{
		cout << "输入正确！" << endl;
		cout << "该单词的首字母为：" << ch[0] << endl;
	}
	else
		cout << "输入错误！" << endl;

	return 0;


}