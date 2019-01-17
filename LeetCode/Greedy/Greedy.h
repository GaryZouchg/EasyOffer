#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	static vector<int> static_gas;
	static vector<int> static_cost;
	int gasStation(vector<int> &gas = static_gas, vector<int> &cost=static_cost);
};
// sample for removeElement


