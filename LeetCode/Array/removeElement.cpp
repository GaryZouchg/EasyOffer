#include "stdafx.h"
#include "Array.h"
#include<iostream>

/*
Given an array and a value, remove all instances of that > value in place and return the new length.
The order of elements can be changed.It doesn't matter what you leave beyond the new length.


��һ�����������Ƴ�ָ��value�����ҷ����µ����鳤�ȡ�
��Ҫע��ĵط����� in place  �������½���һ�����顣

����
ʹ�������α�i��j���������飬���������value��ʹ��j��¼λ�ã�ͬʱ����i��ֱ����һ����
value���֣�����ʱi��Ӧ��ֵ���Ƶ�j��λ���ϣ�����j���ظ���������ֱ��������������ʱ��j�����µ�����
����
*/

using namespace std;

int Solution::sample[] = { 1, 2, 2, 3, 2, 4 };
int Solution::removeElement( int A[], int n, int elem ){
	//int A[] = { 1, 2, 2, 3, 2, 4 }; 
	//int n = 6;
	//int elem = 2;

	int i = 0;
	int j = 0;
	// i, j ��ʼ��ʱ��ָ��ͬһλ��

	for (i = 0; i < n; i++) {
		if (A[i] == elem) {
			continue;
		}
		A[j] = A[i];
		j++; 

	}
	return j;
}

