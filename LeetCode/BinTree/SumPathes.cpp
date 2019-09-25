
#include "BinTree.h"
#include <iostream>

void Solution::sumPathes(BinTree* root, DataType total)
{
	if (root != nullptr)
	{
		DataType tmpval;
		if (root->left == nullptr)
			tmpval = 0;
		else
			tmpval = root->left->data;
		sumPathes(root->left, tmpval + total);   //左子树递归调用

		if (root->right == nullptr)
			tmpval = 0;
		else
			tmpval = root->right->data;
		sumPathes(root->right, tmpval + total);  //右子树递归调用


		if (root->left == nullptr && root->right == nullptr)
		{
			std::cout << "path sum:  " << total << std::endl;
		}
	}
}