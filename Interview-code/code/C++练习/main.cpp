
//#include <QtCore/QCoreApplication>
#include "vector3.h"
//#include "vector3.cpp"
#include <iostream>
int main(int argc, char *argv[])
{
//	QCoreApplication a(argc, argv);
	//测试构造函数
	Vector3 v1;
	Vector3 v2(3.0f, 4.0f, 5.0f);
	Vector3 v3(v2);

	//测试赋值运算符
	Vector3 v4 = v3;
	//打印
	v1.PrintVector3();
	v2.PrintVector3();
	v3.PrintVector3();
	v4.PrintVector3();
	//测试布尔运算 ==
	if (v1 == v3)
	{
		std::cout << "v1=v3" << std::endl;
	}
	else
	{
		std::cout << "v1!=v3" << std::endl;
	}
	if (v2 == v3)
	{
		std::cout << "v2=v3" << std::endl;
	}
	else
	{
		std::cout << "v2!=v3" << std::endl;
	}
	//测试布尔运算 !=
	if (v1 != v3)
	{
		std::cout << "v1!=v3" << std::endl;
	}
	else
	{
		std::cout << "v1=v3" << std::endl;
	}
	if (v2 != v3)
	{
		std::cout << "v2!=v3" << std::endl;
	}
	else
	{
		std::cout << "v2=v3" << std::endl;
	}

	//测试置为零向量
	v2.Zero();
	v1.PrintVector3();
	v2.PrintVector3();
	v3.PrintVector3();
	v4.PrintVector3();
	//测试一元"-"运算符
	Vector3 v5 = -v3;
	v5.PrintVector3();

	//测试二元运算符
	Vector3 v_x(2.0f, 3.0f, 4.0f);
	Vector3 v_y(3.0f, 3.0f, 4.0f);
	double a = 1.2;
	Vector3 v_chufa = v_x * a;
	Vector3 v_add = v_x + v_y;
	Vector3 v_sub = v_x - v_y;
	
	v_add.PrintVector3();
	v_sub.PrintVector3();
	
	//求模
	float mag = v2.VectorMag(v2);
	std::cout << mag << std::endl;

	//叉积
	Vector3 v_product = v_product.CrossProduct(v_x, v_y);
	std::cout << "输出叉积结果" << std::endl;
	v_product.PrintVector3();

	//点积
	float v_point = v_x*v_y;
	std::cout << "输出点积结果为：" << v_point << std::endl;

	//单位化
	v2.Normalize();
	v2.PrintVector3();


//	return a.exec();
}
