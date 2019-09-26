#include <limits.h>
#include "DynamicProgramming.h"
#include <algorithm>

/*Perfect Squares
Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16,
...) which sum to n. For example, given  n = 12  , return 3 because  12 = 4 + 4 + 4  ; given  n =
13  , return 2 because  13 = 4 + 9


��Ŀ���룺 ����һ�������� n  ����������Ҫ���ٸ���ȫƽ����������1��4��9��16����������ܵõ�n��
���磬���� n = 12  ������3����Ϊ 12 = 4 + 4 + 4  ������ n = 13  ������2����Ϊ 13 = 4 + 9  ��

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
