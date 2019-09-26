#include <limits.h>
#include "DynamicProgramming.h"
#include <algorithm>

/*Perfect Squares
Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16,
...) which sum to n. For example, given  n = 12  , return 3 because  12 = 4 + 4 + 4  ; given  n =
13  , return 2 because  13 = 4 + 9


题目翻译： 给出一个正整数 n  ，求至少需要多少个完全平方数（例如1，4，9，16……）相加能得到n。
例如，给出 n = 12  ，返回3，因为 12 = 4 + 4 + 4  。给出 n = 13  ，返回2，因为 13 = 4 + 9  。

*/

using namespace std;

int Solution::static_num = 12;

int Solution::perfectSquare(int n)
{
	vector<int> dp(n + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 1; i + j * j <= n; j++) {
			dp[i + j * j] = min(dp[i + j * j], dp[i] + 1);
		}
	}
	return dp[n];
}
