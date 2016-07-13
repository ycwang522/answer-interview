#include"public.h"
#include<string>

/*
int main()
{
	int n = 5;
	int &m = n;
	int *p = &n;
	int *&rp = p;
	int b1[2] = { 1, 2 };
	int &b11 = b1[1];

	int a[3] = { 10, 20, 30 };
	int(&b)[3] = a;
	for (int i = 0; i < 3; i++)
		cout << b[i] << endl;

	std::string foo();
	void bar(const std::string &s);
	bar(foo());
	bar("hello world!");
	system("pause");
}
*/
//int &add(int &a, int &b)
//{
//	int s = a + b;
//	return s;
//}
//int main()
//{
//	int c = 5;
//	int d = 10;
//	cout << add(c, d) << endl;
//	system("pause");
//}

int &input(int n);
int value[10];
int error = -1;

void main()
{
	input(0) = 10;
	input(9) = 20;
	cout << input(0) << endl;
	cout << input(9) << endl;
	system("pause");
}

int &input(int n)
{
	if (n >= 0 && n <= 9)
		return value[n];
	else
		return error;
}

#define MAXSIZE 10
typedef struct
{
	int r[MAXSIZE + 1];
	int length;
}Sqlist;

void swap(Sqlist *L, int i,int j)	//½»»»Ëã·¨
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp;
}

void BubbleSort0(Sqlist *L)
{
	if (L == NULL)
		return;
	for (int i = 0; i < L->length-1; i++)
		for (int j = i + 1; j < L->length; j++)
		{
			if (L->r[i]>L->r[j])
				swap(L, i, j);
		}

}
