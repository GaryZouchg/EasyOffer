//第一题：
//给定一个二叉树，每个节点上有一个数字。对于每一个叶子节点，输出从该节点到根
//节点路径上所有数的和。


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
		question1(root->left, tmpval + total);   //左子树递归调用

		if (root->right == nullptr)
			tmpval = 0;
		else
			tmpval = root->right->data;
		question1(root->right, tmpval + total);  //右子树递归调用


		if (root->left == nullptr && root->right == nullptr)
		{
			std::cout << "total:  "<< total << std::endl;
		}
	}
}




int Solution::binTreeAddNode(BinTree* father_node, BinTree* node, int n)
{
	if (father_node == nullptr)
	{
		std::cout << " The father node is null...." << std::endl;
		return 0;
	}

	switch (n)
	{
	case 1:
		if (father_node->left)
		{
			std::cout << "the left node is already exist" << std::endl;
			return 0;
		}
		else
			father_node->left = node;
		break;
	case 2:
		if (father_node->right)
		{
			std::cout << "the right node is already exist" << std::endl;
			return 0;
		}
		else
			father_node->right = node;
		break;

	default:
		std::cout << "Wrong param !" << std::endl;
		return 0;

	}

	return 1;
}
