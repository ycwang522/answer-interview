#include"public.h"

/*
class A
{
public:
	static int total ;
	A(int num) :it(num)
	{
		total++;	//����һ�ι��캯����̬����ִ��+�������й��캯����ʱ��������Ĭ�Ϲ��캯��
	}
	virtual ~A()
	{
		total--;	//����һ����������ִ��һ��--����
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

int A::total = 0;	//�Ǿ�̬���ݳ�������������г�ʼ������ʼ��ʱʹ�������򣺣�

int main()
{
	const int max = 5;
	A *a[max];
	for (int i = 0; i < max; i++)
	{
		a[i] = new A(i);
		//������һ��A(i)��ʱ�򣬵��ù��캯��A(int num)��˽�б���it����ʼ��Ϊnum��ͬʱtotal+=1
	}
	for (int i = 0; i < max; i++)
	{
		cout << "������" << A::total << "������" << endl;
		cout << "����ɾ����" << a[i]->get() << "������" << endl;
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
	cout << "�����롰������Ӣ�ĵ��ʣ�";
	cin >> str;
	if (str == "dog")
	{
		cout << "correct input!" << endl;
		cout << "�õ��ʵ�����ĸ��:" << str[0] << endl;
	}
	else
		cout << "���벻��ȷ" << endl;

	cout << "�����롰����Ӣ�ĵ���" ;
	cin >> ch;
	if (ch == "pig")
	{
		cout << "������ȷ��" << endl;
		cout << "�õ��ʵ�����ĸΪ��" << ch[0] << endl;
	}
	else
		cout << "�������" << endl;

	return 0;


}