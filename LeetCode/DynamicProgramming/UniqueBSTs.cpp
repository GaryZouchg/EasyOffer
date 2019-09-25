
#include "DynamicProgramming.h"


/*Unique Binary Search Trees

Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
For example, Given n = 3, there are a total of 5 unique BST's.


�����ĿҪ�����һ����n���ж����ֶ��������з�ʽ�������洢1��n��
���ǵ������������ʣ�����������iΪ���ڵ�Ķ�������
������������ֵһ��С��i��Ҳ����[0, i - 1]���䣬����������ֵһ������i��
Ҳ����[i + 1, n]��������������m�����з�ʽ������������n�֣������iΪ���ڵ�Ķ������ܵ����з�ʽ����m x n��

ʹ��dp[i]��ʾi���ڵ���������������и�������ôdp����Ϊ:
dp[i] = sum(dp[k] * dp[i - k -1]) 0

*/

int Solution::static_n = 5;

int Solution::uniqueBSTs1(int n)
{
	vector<int> dp(n + 1, 0);
	//dp��ʼ��
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			//����������ĸ���Ϊj����ô������Ϊi - j - 1
			dp[i] += dp[j] * dp[i - j - 1];
		}
	}
	return dp[n];
}


/*
�����ǰ��һ�ⲻͬ����Ҫ�õ��������еĽ⡣
����ǰ��֪����������n���������i������������Ϊ������[0, i - 1]�������� x ������[i + 1, n]������
������������ֻ��Ҫ�õ�i�������������������������У����ܵõ�i�����������ˡ������ʹ�õݹ���ܸ�
*/
TreeNode::TreeNode(int i) :data(i){}

vector<TreeNode *> Solution::uniqueBSTs2(int n)
{
	return generateTree(1, n);

}


vector<TreeNode*> Solution::generateTree(int start, int stop){
	vector<TreeNode*> vs;
	if (start > stop) {
		//û�������ˣ�����null
		vs.push_back(NULL);
		return vs;
	}
	for (int i = start; i <= stop; i++) {
		auto l = generateTree(start, i - 1);
		auto r = generateTree(i + 1, stop);
		//��ȡ����������������������֮�󣬷ŵ�rootΪi�Ľڵ������
		for (int j = 0; j < l.size(); j++) {
			for (int k = 0; k < r.size(); k++) {
				TreeNode* n = new TreeNode(i);
				n->left = l[j];
				n->right = r[k];
				vs.push_back(n);
			}
		}
	}
	return vs;
}