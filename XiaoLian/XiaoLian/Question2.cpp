#include "stdafx.h"
#include "XiaoLian.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
void Solution::question2()
{
	int arr[] = { 2, 3, 1, 5, 2, 1, 2, 4, 3, 2, 3 };
	std::vector<int> vec( &arr[0], &arr[sizeof(arr) / sizeof(int)] );
	int topk = 3;
	std::priority_queue<std::pair<int, int>> q;

	std::vector<int> vec_count(vec.size(),0);
	for (auto it : vec)
	{
		vec_count[it]++;
	}

	for (int i = 0; i < vec_count.size(); i++)
	{
		if (vec_count[i] > 0)
		{
			q.push({ vec_count[i], i });
		}
	}

	for (int i = 0; i < topk; ++i) {
		std::cout << q.top().second << std::endl;
		q.pop();
	}

}