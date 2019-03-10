// BinTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "stdlid.h"
#include "BinTree.h"
#include <iostream>

// root1    



int _tmain(int argc, _TCHAR* argv[])
{
	NODE* rt1_root = new NODE(5);
	NODE* rt1_n21 = new NODE(4);
	NODE* rt1_n22 = new NODE(8);

	NODE* rt1_n31 = new NODE(11);
	NODE* rt1_n33 = new NODE(13);
	NODE* rt1_n34 = new NODE(4);

	NODE* rt1_n41 = new NODE(7);
	NODE* rt1_n42 = new NODE(2);
	NODE* rt1_n48 = new NODE(1);

	Solution sol;
	sol.binTreeAddNode(rt1_root, rt1_n21, 1);
	sol.binTreeAddNode(rt1_root, rt1_n22, 2);

	sol.binTreeAddNode(rt1_n21, rt1_n31, 1);
	sol.binTreeAddNode(rt1_n22, rt1_n33, 1);
	sol.binTreeAddNode(rt1_n22, rt1_n34, 2);

	sol.binTreeAddNode(rt1_n31, rt1_n41, 1);
	sol.binTreeAddNode(rt1_n31, rt1_n42, 2);
	sol.binTreeAddNode(rt1_n34, rt1_n48, 2);


	if (sol.binTreeFind(rt1_root, 11))
	{
		std::cout <<"11  "<< "found " << std::endl;
	}
	else
	{
		std::cout << "11  " << "NOT Found " << std::endl;
	}



	sol.binTreeDLR(rt1_root, Solution::printOper);
	std::cout <<  std::endl;


	sol.sumPathes(rt1_root, rt1_root->data);


	std::cout << "The Max Depth:  " << sol.maxDepth(rt1_root) << std::endl;
	std::cout << "The Min Depth:  " << sol.minDepth(rt1_root) << std::endl;


	sol.printVec2d( sol.levelOrder(rt1_root) );

	system("pause");

	return 0;
}

