

#include "Sort.h"


//�������㷨������Ҫ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�O(1)��ʹ�ý���������һ��ֻ�ܽ�����������

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