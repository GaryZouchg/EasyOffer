
#include "stdafx.h"
#include "Sort.h"

/*  ð������

�㷨ԭ��

ʱ�临�Ӷ�
����
������

�ռ临�Ӷ�



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


