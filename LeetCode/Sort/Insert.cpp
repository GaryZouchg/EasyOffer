
#include "stdafx.h"
#include "Sort.h"

/*  插入排序

算法原理：

时间复杂度
最坏情况
最好情况

空间复杂度


*/


void Solution::insert(vector<int> &vec, bool print)
{
	printVector(vec, print);

	for (int i = 1; i < vec.size(); i++)
	{
		int j = i;
		while (j>0 && (vec[j] > vec[j - 1]))
		{
			int tmp;
			tmp = vec[j - 1];
			vec[j - 1] = vec[j];
			vec[j] = tmp;
		}

		printVector(vec, print);
	}

}


