
#include "stdafx.h"
#include "Sort.h"

/*  ��������
https://blog.csdn.net/lemon_tree12138/article/details/50622744

�㷨��
1���ȴ�������ȡ��һ������Ϊ��׼���������ǵ�һ��Ԫ��,Ҳ���������һ��Ԫ����Ϊ��׼������

2���������̣���������������ȫ�ŵ������ұߣ�С�ڻ����������ȫ�ŵ�������ߡ�
	2.1. ����������һ�����ҵ����ұȻ�׼��С�ģ���һ���������ұȻ�׼�����
	2.2. �ҵ�֮�󽻻����������û�׼���Ŀռ�
	2.3. �ѻ�׼���������м�

3���ٶ����������ظ��ڶ�����ֱ��������ֻ��һ������

ƽ��ʱ�临�Ӷ� NlogN
����   N*N
������   NlogN

�ռ临�Ӷ� logN

���ȶ�
�ϸ���

*/


void Solution::quickSort(vector<int> &vec, int l, int r, bool print)
{

	if (l < r)
	{
		int i = l ;      //�����
		int j = r;		//���Ҷ�
		int x = vec[l]; // ��׼ֵΪ��һ��
		while (i < j)
		{
			while (i < j && vec[j] >= x)  // ���������ҵ�һ��С��x����
				j--;

			if (i < j)
				vec[i++] = vec[j];  //  �����˻�׼���Ŀռ䣬�ȸ�����++

			while (i < j && vec[i] < x) // ���������ҵ�һ�����ڵ���x����
				i++;

			if (i < j)
				vec[j--] = vec[i];     //�ȸ�ֵ�ڼ���
		}
		vec[i] = x;
		printVector(vec);

		quickSort(vec, l, i - 1); // �ݹ����
		quickSort(vec, i + 1, r);


	}
}

