#include<vector>
#include<iostream>
#include<string>

using namespace std;

void display_message(const string &str1,vector<int>&vec_int)
{
	cout << str1;
	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[i]" << vec_int[i] << std::endl;
	}
}

//函数重载
void display_message(const string &str1, vector<double>&vec_double)
{
	cout << str1;
	for (int i = 0; i < vec_double.size(); i++)
	{
		cout << "vec_int[i]" << vec_double[i] << std::endl;
	}
}

//模板使用
template<typename elemType>
void display_message(const string &str1, vector<elemType> &vec_template)
{
	cout << str1;
	for (int ix = 0; ix < vec_template.size(); ix++)
	{
		elemType T = vec_template[ix];
		cout << T << std::endl;


	}
}
const vector<int>*fibona_seq(int size)
{
	static vector<int>elem;//局部静态变量。每次被调用时不会像局部非静态变量那样破坏又重新建立
	const int max = 1025;

	if (size <= 0 || size > max)
	{
		cout << "Error input.\n";
		return 0;
	}

	//如果传入的size比当前静态容器中元素的个数要多，说明需要计算的数据不包含在当前的静态容器中
	//需要继续往后计算，并将计算得到的结果存入静态容器当中。
	for (int ix = elem.size(); ix < size; ix++)
	{
		if (ix == 0 || ix == 1)
		{
			elem.push_back(1);
		}
		else
		{
			elem.push_back(elem[ix - 1] + elem[ix - 2]);
		}

	}
	
	//如果①输入的数值合理&&②当前调用函数传入的size小于当前静态容器中的长度
	//说明，所求的数值包含于当前的静态容器当中，此时不需要再计算，直接返回当前静态容器的地址即可。
	return &elem;

	

	const string str1("You are my best friend!");
	display_message;
}