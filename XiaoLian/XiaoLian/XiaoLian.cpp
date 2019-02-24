// XiaoLian.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "stdlib.h"
#include "XiaoLian.h"
#include <iostream>



NODE* rt1_root = new NODE(5);
NODE* rt1_n21 = new NODE(4);
NODE* rt1_n22 = new NODE(8);

NODE* rt1_n31 = new NODE(11);
NODE* rt1_n33 = new NODE(13);
NODE* rt1_n34 = new NODE(4);

NODE* rt1_n41 = new NODE(7);
NODE* rt1_n42 = new NODE(2);
NODE* rt1_n48 = new NODE(1);

int _tmain(int argc, _TCHAR* argv[])
{
	Solution sol;

	sol.binTreeAddNode(rt1_root, rt1_n21, 1);
	sol.binTreeAddNode(rt1_root, rt1_n22, 2);

	sol.binTreeAddNode(rt1_n21, rt1_n31, 1);
	sol.binTreeAddNode(rt1_n22, rt1_n33, 1);
	sol.binTreeAddNode(rt1_n22, rt1_n34, 2);

	sol.binTreeAddNode(rt1_n31, rt1_n41, 1);
	sol.binTreeAddNode(rt1_n31, rt1_n42, 2);
	sol.binTreeAddNode(rt1_n34, rt1_n48, 2);


	//Question1
	sol.question1(rt1_root, rt1_root->data);



	//Question2
	int arr[] = { 2, 3, 1, 5, 2, 1, 2, 4, 3, 2, 3 };
	std::vector<int> vec(&arr[0], &arr[sizeof(arr) / sizeof(int)]);
	int topk = 3;
	sol.question2(vec, topk);

	//Question3
	std::string str = "3[a2[c]]";
	int idx = 0;
	std::cout<<sol.question3(str, idx)<<std::endl;

	system("pause");
	return 0;
}

