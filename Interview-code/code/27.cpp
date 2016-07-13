#include<iostream>
#include<vector>
#include<fstream>
//#include"27.h"

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}


void display(std::vector<int>ivec)
{
	for (int ix = 0; ix < (ivec.size()); ++ix)
	{
		std::cout << ivec[ix] << std::endl;
	}
}

void Bubble(std::vector<int>&vec1)
{
	std::ofstream outfile("1.txt");
	for (int ix = 0; ix < (vec1.size()-1 );ix++)
		for (int jx = ix + 1; jx < vec1.size(); jx++)
		{
			if (vec1[ix]>vec1[jx])
			{
				outfile << "交换之前：about to call swap! " << "ix=" << ix << " jx=" << jx << " swaping " << vec1[ix] << "  with " << vec1[jx] << "\n";
				swap(vec1[ix], vec1[jx]);
				outfile << "交换之后：about to call swap! " << "ix=" << ix << " jx=" << jx << " swaping " << vec1[ix] << "  with " << vec1[jx] << "\n";

			}
		}
}

int main()
{
	int a[8] = { 8, 2, 56, 65, 54, 6, 2, 10 };
	std::vector<int>vec(a, a + 8);//为vector对象赋值。
	std::cout << "vector before sort:\n";
	display(vec);

	Bubble(vec);

	std::cout << "vector after sort:\n";
	display(vec);

	system("pause");
}