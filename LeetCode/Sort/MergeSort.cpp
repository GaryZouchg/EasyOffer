

#include "Sort.h"


/*  归并排序
https://blog.csdn.net/lemon_tree12138/article/details/50622744

算法：
归并排序是建立在归并操作上的一种有效的排序算法,该算法是采用分治法（Divide and Conquer）的一个非常典型的应用。
将已有序的子序列合并，得到完全有序的序列；即先使每个子序列有序，
再使子序列段间有序。若将两个有序表合并成一个有序表，称为二路归并

平均时间复杂度 NlogN
最坏情况   NlogN
最好情况   NlogN

空间复杂度 N


较复杂

*/
void Solution::mergeSort(vector<int> &data, int start, int end, vector<int> &result)
{
	if (0 == end - start)//如果只有一个元素，则不用排序
		return;
	else if (1 == end - start)//如果区间中只有两个元素，则对这两个元素进行排序
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
		//继续划分子区间，分别对左右子区间进行排序
		mergeSort(data, start, (end - start + 1) / 2 + start, result);
		mergeSort(data, (end - start + 1) / 2 + start + 1, end, result);


		//开始归并已经排好序的start到end之间的数据
		merge(data, start, end, result);

		//把排序后的区间数据复制到原始数据中去
		for (int i = start; i <= end; ++i)
			data[i] = result[i];
	}
}


void Solution::merge(vector<int> &data, int start, int end, vector<int> &result)
{
	int left_length = (end - start + 1) / 2 + 1;//左部分区间的数据元素的个数
	int left_index = start;
	int right_index = start + left_length;
	int result_index = start;
	while (left_index < start + left_length && right_index < end + 1)
	{
		//合并有序的素组，一边一个往下走
		if (data[left_index] <= data[right_index])
			result[result_index++] = data[left_index++];
		else
			result[result_index++] = data[right_index++];
	}

	//剩下的存入数组
	while (left_index < start + left_length)
		result[result_index++] = data[left_index++];


	while (right_index < end + 1)
		result[result_index++] = data[right_index++];

	printVector(result);
}