//vector��erase���÷�������
//2016��5��10�� 09:34:59

#include"public.h"
#include<vector>
using namespace std;

int main()
{
	vector<int>ivec;
	ivec.push_back(100); 
	ivec.push_back(300);
	ivec.push_back(300);
	ivec.push_back(300);
	ivec.push_back(300);
	ivec.push_back(500);

	vector<int>::iterator iter;
	for (iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		if (*iter == 300)
		{
			iter=ivec.erase(iter);
		}
	}
	for (iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		cout << *iter << endl;
	}

}


