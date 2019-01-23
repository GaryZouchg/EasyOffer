
#include "stdafx.h"
#include "Sort.h"

/*  选择排序

算法原理：假定第一是最小的，循环查找后面的，遇到比他小的就交换， 以此类推

平均时间复杂度 n(n-1)/2
最坏情况   N*N
最好情况   N*N


空间复杂度

简单
不稳定

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


