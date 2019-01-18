#include "stdafx.h"
#include "Greedy.h"
/*
Given a string s and a dictionary of words dict, determine if s can be segmented into a space-
separated sequence of one or more dictionary words.
For example, given s = "leetcode", dict = ["leet", "code"].
Return true because "leetcode" can be segmented as "leet code".

这题的意思是给出一本词典以及一个字符串，能否切分这个字符串使得每个字串都在字典里面存在。
假设dp(i)表示长度为i的字串能否别切分，dp方程如下:
dp(i) = dp(j) && s(j, i) in dict, 0
j: i-1  -->> 0

*/




string str_dict[] = { "my", "leet", "code", "solution", "le","etc", "des", "tion", "fuck" };

string Solution::static_word("myleetcodesolution");
unordered_set<string> Solution::static_dict(&str_dict[0], &str_dict[7]);

bool Solution::wordBreak1(string s, unordered_set<string> &dict) {
	int len = (int)s.size();
	vector<bool> dp(len + 1, false);
	dp[0] = true; //加入第一个值为true 其他的为false

	for (int i = 1; i <= len; i++) {
		for (int j = i - 1; j >= 0; j--) {  //没有的话会一直到开始位置
			if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end()) {
				dp[i] = true;
				break;
			}
		}
	}
	for (auto it : dp)
	{
		cout << it << ",";
	}cout << endl;

	return dp[len];
}

/*
要找出所有的切分解
首先我们使用dp[i][j]表示起始索引为i，长度为j的子串能否被切分，它有三种状态:
1. dp[i][j] = true && dp[i][j] in dict，这种情况是这个子串直接在字典中
2. dp[i][j] = true && dp[i][j] not in dict，这种情况是这个子串不在字典中，但是它能切分成更小的子串，而
这些子串在字典中
3. dp[i][j] = false，子串不能被切分
根据题意，我们需要求出所有切分的解，所以在进行dp的时候需要处理1和2这两种情况，因为对于2来说，
dp[i][j]是要继续被切分的，也就是说我们只需要关注第1种情况的子串。
当dp完成之后，我们就需要使用dfs来得到整个的解。在dp[i][j] = 1的情况下面，我们只需要dfs递归处理后
面i + j开始的子串就可以了。
*/
int Solution::wordBreak2(string s, unordered_set<string> &dict) {
	return 0;
}