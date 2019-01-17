#include "stdafx.h"
#include "Greedy.h"





int array_gas[] = { 1, 2, 3, 4, 5 };
int array_cost[] = { 3, 4, 5, 1, 2 };
vector<int> Solution::static_gas(array_gas[0], array_gas[4]);
vector<int> Solution::static_cost(array_cost[0], array_cost[4]);

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
	if (total < 0) {
		return -1;
	}
	else {
		return k;
	}
}