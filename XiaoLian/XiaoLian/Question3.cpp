
#include "stdafx.h"
#include "XiaoLian.h"
#include <string>
std::string Solution::question3(std::string str, int& idx)
{
	std::string res = "";

	while (idx < str.size() && str[idx] != ']')   //最后一个 ']'
	{
		if (str[idx]<'0' || str[idx]>'9')   //遇到字母
		{
			res += str[idx++];
		}
		else                                //遇到数字
		{
			int cnt = 0;
			while (idx < str.size() && str[idx] >= '0' && str[idx] <= '9')
			{
				cnt = cnt * 10 + (str[idx++] - '0');    //不止一位数字的情况
			}


			++idx;                                      //跳过数字后面肯定的'[',
			std::string tmp = question3(str, idx);   //递归调用


			while (cnt-- > 0){
				res += tmp;
			}                                          // 前面的数字决定了加多少个字符串

			++idx;
		}
	}
	return res;
}
