//�������ص���ϰ
//data��2016-03-27 16:45:05


#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

template<typename T>
void max(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
	std::cout << a << endl;
}

template<typename TT>
void max(TT a[], TT &b)
{
	cout << "��û�������" << endl;
}


//
////1:��������
//void max(int &a, int &b)
//{
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	else
//	{
//		;
//	}
//	std::cout << "I'm function(1),The larger int number is" << a << std::endl;
//}
//
////2������������
//void max(float &a, float &b)
//{
//	if (a < b)
//	{
//		float temp = a;
//		a = b;
//		b = temp;
//	}
//	else
//	{
//		;
//	}
//	std::cout << "I'm function(2),The larger float number is" << a << std::endl;
//}
//
////3�������ַ���
//void max(const string a, const string b)
//{
//	std::cout << "I'm function(3),The string I want to input is" << a << endl;
//}
//
////4��һ������vector
//void max(vector<int>ivec)
//{
//	std::cout << "I'm function(4),The length of the vector is " << ivec.size() << endl;
//
//}
//
////5:һ��������vector
//void max(vector<float>ivec1)
//{
//	std::cout << "I'm function(5),The length of the vector is " << ivec1.size() << endl;
//
//}
//
////6:һ���ַ���vector
//void max(vector<string>ivec2)
//{
//	std::cout << "I'm function(6),The length of the vector is " << ivec2.size() << endl;
//
//}
//
////7:һ���������飬һ����ʾ�����С������ֵ
//void max(int a[], int number)
//{
//	std::cout << "I'm function(7),The length of the array is " << number << endl;
//
//}
//
////8:һ��float��array���Լ���ʾ�����С��intֵ
//void max(float a[], int number1);


int main()
{
	int a = 1, b = 5;
	cout << &a << endl;
	max(a, b);
	float fa = 1.0, fb = 2.3;
	max(fa,fb);
	int c[5] = {};
	max(c, b);

	string sa = "I'm A.";
	string sb = "I'm B.";
	max(sa, sb);

	system("pause");
	return 0;
}