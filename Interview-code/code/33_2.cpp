//��ľ�̬��Ա�������ܵ����൱�еķǾ�̬��Ա
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