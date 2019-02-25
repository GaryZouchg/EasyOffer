#include "stdafx.h"
#include "BinTree.h"
#include <iostream>

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

BinTree* Solution::binTreeFind(BinTree* root, DataType data)
{
	BinTree *p;
	if (!root) return nullptr;
	else
	{
		if (root->data == data)
			return root;
		else
		{
			if (p = binTreeFind(root->left, data))
				return p;
			else if (p = binTreeFind(root->right, data))
				return p;
			else
				return nullptr;
		}
	}


}

void Solution::binTreeDLR(BinTree* root, void(*oper)(BinTree *p))
{

	if (root)
	{
		oper(root);
		binTreeDLR(root->left, oper);
		binTreeDLR(root->right, oper);
	}
	return;
}

void Solution::binTreeLDR(BinTree* root, void(*oper)(BinTree *p))
{

	if (root)
	{
		binTreeLDR(root->left, oper);
		oper(root);
		binTreeLDR(root->right, oper);
	}
	return;
}

void Solution::binTreeLRD(BinTree* root, void(*oper)(BinTree *p))
{

	if (root)
	{
		binTreeLRD(root->left, oper);
		binTreeLRD(root->right, oper);
		oper(root);
	}
	return;
}

void Solution::printOper(BinTree* node)
{

	std::cout << node->data << ",  ";
	return;
}

