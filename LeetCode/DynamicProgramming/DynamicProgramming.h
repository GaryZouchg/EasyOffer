#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

struct TreeNode {
	TreeNode(int i);
	int data;
	struct TreeNode *left, *right;
};



class Solution {
public:
	static int static_n;
	int uniqueBSTs1(int n = static_n);
	vector<TreeNode *> uniqueBSTs2(int n = static_n);

	static int static_num;
	int PerfectSquare(int n = static_num);


private:
	vector<TreeNode*> generateTree(int start, int stop);

	//static vector<int> static_ratings;
	//int candy(vector<int> &ratings = static_ratings);


	//static string static_word;
	//static unordered_set<string> static_dict;
	//bool wordBreak1(string word = static_word, unordered_set<string> &dict = static_dict);
	//int wordBreak2(string word = static_word, unordered_set<string> &dict = static_dict);

};
// sample for removeElement
