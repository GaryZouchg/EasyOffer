
#include "Greedy.h"

/*
Candy
There are N children standing in a line.Each child is assigned a rating value.
You are giving candies to these children subjected to the following requirements :
Each child must have at least one candy.Children with a higher rating get more candies than their
neighbors.What is the minimum candies you must give ?

����Ҫ��ÿ��С������Ҫ�쵽һ���ǹ�, ���Ǹ߼����С��Ҫ�����Աߵĺ��ӵõ����ǹ���, ��������Ҫ�������ǹ���

���ȸ�ÿ��С����һ���ǹ���Ȼ������ң�
�����i��С���ĵȼ��ȵ�i - 1��С���ߣ���ô��i��С�����ǹ��������ǵ�i - 1��С���ǹ������ڼ�һ��

�ٴ��ҵ��������i��С���ĵȼ����ڵ�i + 1��С���ģ�ͬʱ��i��С����ʱ���ǹ�����С�ڵ�i + 1��С����
��ô��i��С�����ǹ��������ǵ�i + 1��С�����ǹ�������һ��
*/

int array_ratings[] = { 3, 4, 5, 1, 2 };
vector<int> Solution::static_ratings(&array_ratings[0], &array_ratings[4]);

int Solution::candy(vector<int> &ratings) {
	vector<int> candys;
	//����ÿ�˷�һ����

	candys.resize(ratings.size(), 1);
	//���ѭ����֤���ұ߸߼���ĺ���һ������ߵĺ����ǹ�������
	for (int i = 1; i < (int)ratings.size(); i++) {
		if (ratings[i] > ratings[i - 1]) {
			candys[i] = candys[i - 1] + 1;
		}
	}

	//���ѭ����֤����߸߼���ĺ���һ�����ұߵĺ����ǹ�������
	for (int i = (int)ratings.size() - 2; i >= 0; i--) {
		if (ratings[i] > ratings[i + 1] && candys[i] <= candys[i + 1]) {
			candys[i] = candys[i + 1] + 1;
		}
	}
	int n = 0;
	for (int i = 0; i < (int)candys.size(); i++) {
		n += candys[i];
	}
	return n;
}
