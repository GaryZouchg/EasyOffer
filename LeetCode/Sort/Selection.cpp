
#include "stdafx.h"
#include "Sort.h"

/*  ѡ������

�㷨ԭ���ٶ���һ����С�ģ�ѭ�����Һ���ģ���������С�ľͽ����� �Դ�����

ƽ��ʱ�临�Ӷ� n(n-1)/2
����   N*N
������   N*N


�ռ临�Ӷ�

��
���ȶ�

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


