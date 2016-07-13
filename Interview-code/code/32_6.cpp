//引用 reference
#include<iostream>
int &put(int n);	//声明
int vals[10];	//int array
int error = -1;
void main()
{
 	put(0) = 10; //以put(0)函数值作为左值，等价于vals[0]=10; 
	put(9) = 20; //以put(9)函数值作为左值，等价于vals[9]=20; 
	put(10) = 50;
	std::cout << std:: endl;
	std::cout << vals[0] << std::endl;
	std::cout << vals[9] << std::endl;
 	std::cout << vals[10] << std::endl;

	system("pause");
}
int &put(int n)
{
	if (n >= 0 && n <= 9) 
		return vals[n];
	else
	{ 
		std::cout << "subscript error"; 
		return error; 
	}
}