
#include "stdafx.h"
#include "Sort.h"

/*  ��������

�㷨ԭ�����ڵ����Ƚϣ�һ����������һ�����ĵ����ұ�
i:0~n
j:0~n-i-1

ʱ�临�Ӷ�
����
������

�ռ临�Ӷ�



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


