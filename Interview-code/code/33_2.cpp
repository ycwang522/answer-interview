//类的静态成员函数不能调用类当中的非静态成员
#include <stdio.h>
class Point
{
public:
	void init()
	{
	}
	static void output()
	{
		printf("%d\n", m_x);
	}
private:
	int m_x;
};
void main()
{
	Point pt;
	pt.output();
}