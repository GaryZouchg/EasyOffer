

#include "Sort.h"


//求排序算法，并且要求时间复杂度为O(n)，空间复杂度O(1)，使用交换，而且一次只能交换两个数。

int a[] = { 10, 6, 9, 5, 2, 8, 4, 7, 1, 3 };

vector<int> Solution::static_OnO1(&a[0], &a[8]);

void Solution::onO1Sort(vector<int> &a, bool print ) {
	int i, tmp;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < a.size();) {
		tmp = a[a[i] - 1];
		a[a[i] - 1] = a[i];
		a[i] = tmp;
		if (a[i] == i + 1) i++;
	}

	return ;
}