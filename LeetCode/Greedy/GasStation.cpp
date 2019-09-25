
#include "Greedy.h"

/*
在一条环路上有 N 个加油站，其中第 i 个加油站有汽油 gas[i] 升。

你有一辆油箱容量无限的的汽车，从第 i 个加油站开往第 i + 1 个加油站需要消耗汽油 cost[i] 升。
你从其中的一个加油站出发，开始时油箱为空。

如果你可以绕环路行驶一周，则返回出发时加油站的编号，否则返回 - 1。

说明 :

如果题目有解，该答案即为唯一答案。
输入数组均为非空数组，且长度相同。
输入数组中的元素均为非负数。
示例 1 :

输入 :
   gas = [1, 2, 3, 4, 5]
   cost = [3, 4, 5, 1, 2]

输出 : 3
*/

int array_gas[] = { 1, 2, 3, 4, 5 };
int array_cost[] = { 3, 4, 5, 1, 2 };
vector<int> Solution::static_gas(&array_gas[0], &array_gas[4]);
vector<int> Solution::static_cost(&array_cost[0], &array_cost[4]);

int Solution::gasStation(vector<int> &gas, vector<int> &cost) {
	int sum = 0;
	int total = 0;
	int k = 0;
	for (int i = 0; i < (int)gas.size(); i++) {
		sum += gas[i] - cost[i];
		//小于0就只可能在i + 1或者之后了
		if (sum < 0) {
			k = i + 1;
			sum = 0;
		}
		total += gas[i] - cost[i];
	}
	if (total < 0) {   //加油站总的油量要小于总的耗油量
		return -1;
	}
	else {
		return k;
	}
}