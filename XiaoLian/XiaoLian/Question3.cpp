
#include "stdafx.h"
#include "XiaoLian.h"
#include <string>
std::string Solution::question3(std::string str, int& idx)
{
	std::string res = "";

	while (idx < str.size() && str[idx] != ']')   //���һ�� ']'
	{
		if (str[idx]<'0' || str[idx]>'9')   //������ĸ
		{
			res += str[idx++];
		}
		else                                //��������
		{
			int cnt = 0;
			while (idx < str.size() && str[idx] >= '0' && str[idx] <= '9')
			{
				cnt = cnt * 10 + (str[idx++] - '0');    //��ֹһλ���ֵ����
			}


			++idx;                                      //�������ֺ���϶���'[',
			std::string tmp = question3(str, idx);   //�ݹ����


			while (cnt-- > 0){
				res += tmp;
			}                                          // ǰ������־����˼Ӷ��ٸ��ַ���

			++idx;
		}
	}
	return res;
}
