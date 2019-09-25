
#include "Greedy.h"

/*
��һ����·���� N ������վ�����е� i ������վ������ gas[i] ����

����һ�������������޵ĵ��������ӵ� i ������վ������ i + 1 ������վ��Ҫ�������� cost[i] ����
������е�һ������վ��������ʼʱ����Ϊ�ա�

���������ƻ�·��ʻһ�ܣ��򷵻س���ʱ����վ�ı�ţ����򷵻� - 1��

˵�� :

�����Ŀ�н⣬�ô𰸼�ΪΨһ�𰸡�
���������Ϊ�ǿ����飬�ҳ�����ͬ��
���������е�Ԫ�ؾ�Ϊ�Ǹ�����
ʾ�� 1 :

���� :
   gas = [1, 2, 3, 4, 5]
   cost = [3, 4, 5, 1, 2]

��� : 3
*/

int array_gas[] = { 1, 2, 3, 4, 5 };
int array_cost[] = { 3, 4, 5, 1, 2 };
vector<int> Solution::static_gas(&array_gas[0], &array_gas[4]);
vector<int> Solution::static_cost(&array_cost[0], &array_cost[4]);

int Solution::gasStation(vector<int> &gas, vector<int> &cost) {
	int sum = 0;
	int total = 0;
	int k = 0;
	for (int i = 0; i < (int)gas.size(); i++) {
		sum += gas[i] - cost[i];
		//С��0��ֻ������i + 1����֮����
		if (sum < 0) {
			k = i + 1;
			sum = 0;
		}
		total += gas[i] - cost[i];
	}
	if (total < 0) {   //����վ�ܵ�����ҪС���ܵĺ�����
		return -1;
	}
	else {
		return k;
	}
}