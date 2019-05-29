
#include "stdafx.h"
#include "Sort.h"

/*  快速排序
https://blog.csdn.net/lemon_tree12138/article/details/50622744

算法：
1．先从数列中取出一个数作为基准数。可以是第一个元素,也可以随机找一个元素作为基准数划分

2．分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边。
	2.1. 两个索引，一个从右到左找比基准数小的，另一个从左到右找比基准数大的
	2.2. 找到之后交换，可以利用基准数的空间
	2.3. 把基准数交换到中间

3．再对左右区间重复第二步，直到各区间只有一个数。

平均时间复杂度 NlogN
最坏情况   N*N
最好情况   NlogN

空间复杂度 logN

不稳定
较复杂

*/


void Solution::quickSort(vector<int> &vec, int l, int r, bool print)
{

	if (l < r)
	{
		int i = l ;      //最左端
		int j = r;		//最右端
		int x = vec[l]; // 基准值为第一个
		while (i < j)
		{
			while (i < j && vec[j] >= x)  // 从右向左找第一个小于x的数
				j--;

			if (i < j)
				vec[i++] = vec[j];  //  利用了基准数的空间，先复制在++

			while (i < j && vec[i] < x) // 从左向右找第一个大于等于x的数
				i++;

			if (i < j)
				vec[j--] = vec[i];     //先赋值在减减
		}
		vec[i] = x;
		printVector(vec);

		quickSort(vec, l, i - 1); // 递归调用
		quickSort(vec, i + 1, r);


	}
}

