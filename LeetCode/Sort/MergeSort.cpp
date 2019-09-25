

#include "Sort.h"


/*  �鲢����
https://blog.csdn.net/lemon_tree12138/article/details/50622744

�㷨��
�鲢�����ǽ����ڹ鲢�����ϵ�һ����Ч�������㷨,���㷨�ǲ��÷��η���Divide and Conquer����һ���ǳ����͵�Ӧ�á�
��������������кϲ����õ���ȫ��������У�����ʹÿ������������
��ʹ�����жμ������������������ϲ���һ���������Ϊ��·�鲢

ƽ��ʱ�临�Ӷ� NlogN
����   NlogN
������   NlogN

�ռ临�Ӷ� N


�ϸ���

*/
void Solution::mergeSort(vector<int> &data, int start, int end, vector<int> &result)
{
	if (0 == end - start)//���ֻ��һ��Ԫ�أ���������
		return;
	else if (1 == end - start)//���������ֻ������Ԫ�أ����������Ԫ�ؽ�������
	{
		if (data[start] > data[end])
		{
			int temp = data[start];
			data[start] = data[end];
			data[end] = temp;
		}
		return;
	}
	else
	{
		//�������������䣬�ֱ�������������������
		mergeSort(data, start, (end - start + 1) / 2 + start, result);
		mergeSort(data, (end - start + 1) / 2 + start + 1, end, result);


		//��ʼ�鲢�Ѿ��ź����start��end֮�������
		merge(data, start, end, result);

		//���������������ݸ��Ƶ�ԭʼ������ȥ
		for (int i = start; i <= end; ++i)
			data[i] = result[i];
	}
}


void Solution::merge(vector<int> &data, int start, int end, vector<int> &result)
{
	int left_length = (end - start + 1) / 2 + 1;//�󲿷����������Ԫ�صĸ���
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while (left_index < start + left_length && right_index < end + 1)
	{
		//�ϲ���������飬һ��һ��������
		if (data[left_index] <= data[right_index])
			result[result_index++] = data[left_index++];
		else
			result[result_index++] = data[right_index++];
	}

	//ʣ�µĴ�������
	while (left_index < start + left_length)
		result[result_index++] = data[left_index++];


	while (right_index < end + 1)
		result[result_index++] = data[right_index++];

	printVector(result);
}