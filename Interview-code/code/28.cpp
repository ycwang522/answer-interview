#include<vector>
#include<iostream>
#include<string>
#define MAX 100

using namespace std;


inline bool NumberIsOk(const int &number)
{
	if (number <= 0 || number > MAX)
	{
		std::cout << "Error Input.\n" << endl;
		return false;
	}
	return true;
}

void display_message(vector<int> &ivec1, const string &str1)//
{
	for (int ix = 1; ix < ivec1.size(); ix++)
	{
		std::cout << ivec1[ix] << endl;
	}
	std::cout << "TypeName of vector is " << str1;
	std::cout << std::endl;
}

//void pentagonal(const int &number)
const vector<int> *pentagonal(int &number)
{
	//static vector<int> ivec1;
	
	static vector<int> ivec1;

	if (!NumberIsOk(number))
	{
		return 0;
	}

	for (int ix = ivec1.size(); ix < number; ++ix)
	{
		ivec1.push_back(ix*(3 * ix - 1) / 2);
	}

	return &ivec1;
}



int main()
{
	//const vector<int>ivec;
	int number1;
	std::cout << "Please enter a int number:";
	std::cin >> number1;
	pentagonal(number1);
	display_message(ivec1,"int");
	
	system("pause");
	return 0;
}






