
#include "stdafx.h"
#include "Sort.h"

/*  ��������

�㷨ԭ��

ƽ��ʱ�临�Ӷ� n(n-1)/2
����   N*N
������   N*N
  

�ռ临�Ӷ� 0


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


