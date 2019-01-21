
#include "stdafx.h"
#include "Sort.h"

/*  冒泡排序

算法原理：

时间复杂度
最坏情况
最好情况

空间复杂度



*/


void Solution::selection(vector<int> &vec, bool print)
{
	printVector(vec, print);

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i + 1; j < vec.size(); j++)
		{
			if (vec[j] < vec[i])
			{
				int tmp = vec[i];
				vec[i] = vec[j];
				vec[j] = tmp;
			}
			printVector(vec, print);
		}
	}

}


