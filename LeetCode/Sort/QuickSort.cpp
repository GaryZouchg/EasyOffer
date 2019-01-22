
#include "stdafx.h"
#include "Sort.h"

/*  快速排序

算法原理：相邻的数比较，一轮下来会有一个最大的到最右边
i:0~n
j:0~n-i-1

时间复杂度
最坏情况
最好情况

空间复杂度



*/


void Solution::quickSort(vector<int> &vec, bool print)
{
	printVector(vec, print);

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size() - 1 - i; j++)
		{
			if (vec[j] > vec[j + 1])
			{
				int tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
		printVector(vec, print);
	}

}


