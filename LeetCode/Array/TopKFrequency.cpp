#include "stdafx.h"
#include "Array.h"
#include <vector>
#include <queue>
#include <iostream>


int arr[] = { 2, 3, 1, 5, 2, 1, 2, 4, 3, 2, 3 };
std::vector<int> Solution::static_vec( &arr[0], &arr[sizeof(arr) / sizeof(int)] );
int Solution::static_topk = 3;

void Solution::topKFrequency(std::vector<int> vec, int topk)
{

	std::priority_queue<std::pair<int, int>> q;

	std::vector<int> vec_count(vec.size(), 0);
	for (auto it : vec)
	{
		vec_count[it]++;
	}          //计算出每个数字出现的次数

	for (int i = 0; i < vec_count.size(); i++)
	{
		if (vec_count[i] > 0)
		{
			q.push({ vec_count[i], i });
		}
	}         //插入优先队列

	for (int i = 0; i < topk; ++i) 
	{
		std::cout << q.top().second << std::endl;
		q.pop();
	}  //输出

}