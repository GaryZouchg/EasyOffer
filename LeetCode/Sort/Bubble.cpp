
#include "stdafx.h"
#include "Sort.h"

/*  冒泡排序

   算法：相邻的数比较，一轮下来会有一个最大的到最右边
   i:0~n
   j:0~n-i-1
   两两比较相邻记录的关键字，如果反序则交换，直到没有反序的记录为止。 

   平均时间复杂度 n(n-1)/2
   最坏情况   N*N
   最好情况   N*N

   空间复杂度 1

   稳定
   简单


*/


void Solution::bubble(vector<int> &vec, bool print)
{
	printVector(vec, print);

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size()-1-i; j++)
		{
			if (vec[j] > vec[j+1])
			{
				int tmp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = tmp;
			}
		}
		printVector(vec, print);
	}

}


