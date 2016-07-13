#include<iostream>

using namespace std;
/*
template<typename T>
void Creat2DArray(T **&a, int row, int col)
{
	a = new T *[row];

	for (int ix = 0; ix < row; ix++)
	{
		a[ix] = new T[col];
	}
}

template<typename T>
void Delete2DArray(T **&a, int row)
{
	for (int ix = 0; ix < row; ix++)
		delete[] a[ix];


	delete[] a;
}

*/
//
//template<class T>
//void Creat2DArray(T **&x, int row, int col)
//{
//	x = new T*[row];//分配一个含有row个元素的指针数组，数组中存放每一行的首地址
//	
//	
//	for (int ix = 0; ix < row; ix++)
//	{
//		x[ix] = new T[col];
//	}
//}
//
//template<class T>
//void Delete2DArray(T **&x, int row)
//{
//	for (int ix = 0; ix < row; ++ix)
//		delete[] x[ix];
//
//	delete[]x;
//}
//
//int main()
//{
//	int **a;
//	int row, col;
//
//	cout << "请输入两个整数：";
//	cin >> row >> col;
//	Creat2DArray(a, row, col);
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < col; j++)
//		{
//			cout << "输入数列中的一个数";
//			cin >> a[i][j];
//		}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
//
//		
//	Delete2DArray(a, row);
//	system("pause");
//}

template<class T>
void CreatArray(T **&x, int row, int col)
{
	x = new T*[row];

	for (int ix = 0; ix < row; ++ix)
	{
		x[ix] = new T[col];
	}
}

template<class T>
void DeleteArray(T **&x, int row)
{
	for (int ix = 0; ix < row; ++ix)
	{
		delete[] x[ix];
	}

	delete[]x;
}

int main()
{
	int **a;
	int row, col;
	cout << "分别输入数列的行数和列数：";
	cin >> row >> col;
	CreatArray(a, row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "输入数列中的数：";
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}

	DeleteArray(a, row);

	system("pause");
}