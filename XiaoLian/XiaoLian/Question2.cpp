#include "stdafx.h"
#include "XiaoLian.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
void Solution::question2(std::vector<int> vec, int topk)
{

	std::priority_queue<std::pair<int, int>> q;

	std::vector<int> vec_count(vec.size(),0);
	for (auto it : vec)
	{
		vec_count[it]++;
	}          //�����ÿ�����ֳ��ֵĴ���

	for (int i = 0; i < vec_count.size(); i++)
	{
		if (vec_count[i] > 0)
		{
			q.push({ vec_count[i], i });
		}
	}         //�������ȶ���

	for (int i = 0; i < topk; ++i) {
		std::cout << q.top().second << std::endl;
		q.pop();
	}

}