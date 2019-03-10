#include "stdafx.h"
#include "BinTree.h"
#include <algorithm>
#include <iostream>



int Solution::maxDepth(BinTree* root, int level)
{

	if (root == nullptr)
	{
		return 0;
	}


	if (!root->left && !root->right)
		return std::max(maxdepth_, level);

	if (root->left)
	{
		maxdepth_ = maxDepth(root->left, level + 1);
	}

	if (root->right)
	{
		maxdepth_ = maxDepth(root->right, level + 1);
	}

	return maxdepth_;

}


int Solution::minDepth(BinTree* root)
{

	if (root == nullptr)
	{
		return mindepth_;
	}
	int level = 1;
	mindepth_ = minDepthTravel(root, 1);

	return mindepth_;

}

int Solution::minDepthTravel(BinTree* root, int level)
{



	if (!root->left && !root->right)
		return std::min(mindepth_, level);

	if (root->left)
	{
		//level++;
		mindepth_ = minDepthTravel(root->left, level+1);
		//level--;

	}

	if (root->right)
	{
		//level++;
		mindepth_ = minDepthTravel(root->right, level+1);
		//level--;
	}

	return mindepth_;

}