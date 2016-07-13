#include"public.h"
bool find();

bool find(int matrix[4][4], int rows, int columns, int number)
{
	bool found = false;
	if (matrix != NULL && rows > 0 && columns > 0)	//判断矩阵不为空
	{
		int row = 0;
		int column = columns - 1;	//选择数组右上角
		while (row < rows && column >= 0)
		{
			if (matrix[row][column] == number)
			{
				found = true;
				break;
			}
			else if (matrix[row][column] > number)
				--column;
			else
				++row;
		}
		return found;
		cout << matrix[row*columns + column] << endl;
	}
}

int main()
{
	int matrix[4][4] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
//	int(*p)[4] = matrix;
	int rows = 4;
	int columns = 4;
	int number = 10;
	bool find(int (*matrix)[4], rows, columns, number);

	return 0;
}