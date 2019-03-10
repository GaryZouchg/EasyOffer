#include "stdafx.h"
#include "BinTree.h"
#include <algorithm>
#include <iostream>

using namespace std;

vector<vector<int>> Solution::levelOrder(BinTree* root)
{
	int depth = maxDepth(root);

	vector<vector<int>> ret(depth);
	if (depth == 0)
		return ret;
	else
		cout << "The depth of the tree:  "<< depth << endl;

	pushToResult(ret, root, 0);

	//cout << "{ " << endl;
	//for (auto itv : ret)
	//{
	//	cout << "[  " ;
	//	for (auto it : itv)
	//	{
	//		cout << it << ", ";
	//	}
	//	cout << " ]" << endl;

	//}
	//cout << "{ " << endl;

	return ret;

}
void Solution::pushToResult(std::vector<std::vector<int>>& ret, NODE* root, int level)
{
	if (root == NULL)
		return;
	ret[level].push_back(root->data);
	pushToResult(ret, root->left, level + 1);
	pushToResult(ret, root->right, level + 1);

}

void Solution::printVec2d(vector<vector<int>> vec2d)
{
	cout << "{ " << endl;
	for (auto itv : vec2d)
	{
		cout << "[ ";
		for (auto it : itv)
		{
			cout << it << ",";
		}
		cout << " ]," << endl;

	}
	cout << "}" << endl;

}

