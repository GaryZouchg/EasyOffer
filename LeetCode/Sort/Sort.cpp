// Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "Sort.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Solution sol;

	sol.insert();
	/*
	sol.bubble();

	sol.quickSort();*/
	//sol.selection();


	system("pause");
	return 0;
}




//默认的待排序数组
int array_vec[] = { 5, 7, 6, 3, 4, 8, 1, 2 };
vector<int> Solution::static_vec(&array_vec[0], &array_vec[8]);
//默认将排序过程打印出来
bool Solution::static_print = true;

void Solution::printVector(vector<int> &vec, bool print)
{
	if (print)
	{	
		cout << "Size : " << vec.size() << "    Elements : ";
		for (auto it : vec)
		{
			cout << it << "\t";
		}
		cout << endl;

	}

}
