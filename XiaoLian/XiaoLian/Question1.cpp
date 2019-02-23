#include "stdafx.h"

#include "XiaoLian.h"
#include <iostream>

void Solution::question1(BinTree* root, DataType total)
{
	if (root != nullptr)
	{
		DataType tmpval;
		if (root->left == nullptr)
			tmpval = 0;
		else
			tmpval = root->left->data;
		question1(root->left, tmpval + total);   

		if (root->right == nullptr)
			tmpval = 0;
		else
			tmpval = root->right->data;
		question1(root->right, tmpval + total);


		if (root->left == nullptr && root->right == nullptr)
		{
			std::cout << "total" << std::endl;
		}
	}
}