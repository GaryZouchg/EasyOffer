

#include "Sort.h"

/*  插入排序

算法原理：假定第一是最小的，循环查找后面的，遇到比他小的就交换， 以此类推

平均时间复杂度 n(n-1)/2
最坏情况   N*N
最好情况   N*N
  

空间复杂度 0


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


