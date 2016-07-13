#include<stdio.h>
#include<stdlib.h>


int matrix[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };

bool find(int *matrix, int rows, int columns,int number)
{
	bool find = false;
	if (matrix != NULL && rows > 0 && columns > 0)
	{
		int row = 0;
		int column = columns - 1;
		while (row<rows && column>0)
		{
			if (matrix[row*columns + column] == number)
			{
				find = true;
				break;
			}

			else if (matrix[row*columns + column] > number)
			{
				column--;
			}
			else
			{
				column++;
			}
		}
	}
}

int main()
{
	printf("%d", matrix[2][2]);
	return 0;
}


#include<vector>

std::vector<std::vector<int>>array;

bool find(std::vector<std::vector<int>>array, int number)
{
	
	
	int m, n, x, y;
	for (x= 0; x < m; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (array[x][y]==number)
			{
				return true;
				break;
			}
			else
			{
				return false;
			}
		}
	}
	
	m = array.size();//ÐÐ
	n = array[0].size();//ÁÐ
	x = m - 1;
	y = 0;
	while (x>=0 && y<=n-1)
	{
		if (array[x][y] == number)
		{
			return true;
			break;
		}
		else if (array[x][y]<number)
		{
			y++;
		}
		else
		{
			x--;
		}
	}
	return false;
}