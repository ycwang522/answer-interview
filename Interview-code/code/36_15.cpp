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
	cout << "代码开始运行"<<endl;
	f(35);
	cout << "代码运行结束" << endl;
	finish = clock();
	
	printf("共耗时%.3lf", (double(finish - start) / 1000));

	return 0;
}