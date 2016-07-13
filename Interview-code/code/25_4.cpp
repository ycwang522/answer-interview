/*
***********************************************
**Name：Wang Yongchun
**Data:2016-3-24 22:14:04
**Readme:输入string类型的数据，然后存盘。
		写一个程序，打开该文本文件，将每个字都读取到vector<string>对象中。
		遍历该vector，将内容显示到cout。
		使用泛型算法sort()，对所有文字进行排序
		#include<algorithm>
		sort(container.begin(),container.end());
vertirion：vector
***********************************************
*/

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#define SIZE 5

using namespace std;

int main()
{
	std::ofstream outfile1("text.txt");
	std::string str1;
	std::cout << "Please enter a string:" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> str1;
		outfile1 << str1 << std::endl;
	}

	std::vector<string> str2;
	std::ifstream infile1("text.txt");
	/*for (int i = 0; i < 2; i++)
	{*/
	string name;
	for (int i = 0; i < SIZE; i++)
	{
		infile1 >> name ;
		str2.push_back(name);
		//std::cout << name << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << str2[i] << std::endl;
	}

	sort(str2.begin(), str2.end());
	std::cout << "sort排序之后：" << std::endl;
	ofstream outfile2("sort.txt");
	for (int i = 0; i < SIZE; i++)
	{
		outfile2 << str2[i] << std::endl;
	}
	system("pause");

}