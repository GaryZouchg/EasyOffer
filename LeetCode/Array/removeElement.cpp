#include "stdafx.h"
#include "Array.h"
#include<iostream>

/*
Given an array and a value, remove all instances of that > value in place and return the new length.
The order of elements can be changed.It doesn't matter what you leave beyond the new length.


在一个数组里面移除指定value，并且返回新的数组长度。
需要注意的地方在于 in place  ，不能新建另一个数组。

方法
使用两个游标i，j，遍历数组，如果碰到了value，使用j记录位置，同时递增i，直到下一个非
value出现，将此时i对应的值复制到j的位置上，增加j，重复上述过程直到遍历结束。这时候j就是新的数组
长度
*/

using namespace std;

int Solution::sample[] = { 1, 2, 2, 3, 2, 4 };
int Solution::removeElement( int A[], int n, int elem ){
	//int A[] = { 1, 2, 2, 3, 2, 4 }; 
	//int n = 6;
	//int elem = 2;

	int i = 0;
	int j = 0;
	// i, j 开始的时候指向同一位置

	for (i = 0; i < n; i++) {
		if (A[i] == elem) {
			continue;
		}
		A[j] = A[i];
		j++; 

	}
	return j;
}

