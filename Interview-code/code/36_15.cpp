#include"public.h"
#include<algorithm>
#include<time.h>

using std::max;

int f(int x)
{
	int s = 0;
	while (x-- > 0)
		s += f(x);
	return max(s, 1);
}


int main()
{
	clock_t start, finish;
	start = clock();
	cout << "���뿪ʼ����"<<endl;
	f(35);
	cout << "�������н���" << endl;
	finish = clock();
	
	printf("����ʱ%.3lf", (double(finish - start) / 1000));

	return 0;
}