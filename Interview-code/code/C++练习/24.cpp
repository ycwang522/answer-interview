#include"24.h"
#include<stdlib.h>
#include<vector>
//剑指offer，二维排序数组中数据的查找问题

std::vector<std::vector<int>>array;

bool Search(std::vector<std::vector<int>>array,int target)
{
	int rows = array.size();
	int columns = array[0].size();
	int row = 0;//从二维数组的右上角开始进行搜索查找。
	int column = columns - 1;
	while (row<=rows-1 && column>=0)
	{
		if (array[row][column]==target)
		{
			return true;
		}
		if (array[row][column] > target)
		{
			column--;
		}
		if (array[row][column]<target)
		{
			row++;
		}
	}
	return false;
}