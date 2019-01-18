#include "stdafx.h"
#include "Greedy.h"
/*
Given a string s and a dictionary of words dict, determine if s can be segmented into a space-
separated sequence of one or more dictionary words.
For example, given s = "leetcode", dict = ["leet", "code"].
Return true because "leetcode" can be segmented as "leet code".

�������˼�Ǹ���һ���ʵ��Լ�һ���ַ������ܷ��з�����ַ���ʹ��ÿ���ִ������ֵ�������ڡ�
����dp(i)��ʾ����Ϊi���ִ��ܷ���з֣�dp��������:
dp(i) = dp(j) && s(j, i) in dict, 0
j: i-1  -->> 0

*/




string str_dict[] = { "my", "leet", "code", "solution", "le","etc", "des", "tion", "fuck" };

string Solution::static_word("myleetcodesolution");
unordered_set<string> Solution::static_dict(&str_dict[0], &str_dict[7]);

bool Solution::wordBreak1(string s, unordered_set<string> &dict) {
	int len = (int)s.size();
	vector<bool> dp(len + 1, false);
	dp[0] = true; //�����һ��ֵΪtrue ������Ϊfalse

	for (int i = 1; i <= len; i++) {
		for (int j = i - 1; j >= 0; j--) {  //û�еĻ���һֱ����ʼλ��
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
Ҫ�ҳ����е��зֽ�
��������ʹ��dp[i][j]��ʾ��ʼ����Ϊi������Ϊj���Ӵ��ܷ��з֣���������״̬:
1. dp[i][j] = true && dp[i][j] in dict���������������Ӵ�ֱ�����ֵ���
2. dp[i][j] = true && dp[i][j] not in dict���������������Ӵ������ֵ��У����������зֳɸ�С���Ӵ�����
��Щ�Ӵ����ֵ���
3. dp[i][j] = false���Ӵ����ܱ��з�
�������⣬������Ҫ��������зֵĽ⣬�����ڽ���dp��ʱ����Ҫ����1��2�������������Ϊ����2��˵��
dp[i][j]��Ҫ�������зֵģ�Ҳ����˵����ֻ��Ҫ��ע��1��������Ӵ���
��dp���֮�����Ǿ���Ҫʹ��dfs���õ������Ľ⡣��dp[i][j] = 1��������棬����ֻ��Ҫdfs�ݹ鴦���
��i + j��ʼ���Ӵ��Ϳ����ˡ�
*/
int Solution::wordBreak2(string s, unordered_set<string> &dict) {
	return 0;
}