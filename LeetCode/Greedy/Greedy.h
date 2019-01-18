#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	static vector<int> static_gas;
	static vector<int> static_cost;
	int gasStation(vector<int> &gas = static_gas, vector<int> &cost=static_cost);

	static vector<int> static_ratings;
	int candy(vector<int> &ratings= static_ratings);


	static string static_word;
	static unordered_set<string> static_dict;
	bool wordBreak1( string word = static_word, unordered_set<string> &dict = static_dict );
	int wordBreak2( string word = static_word, unordered_set<string> &dict = static_dict );

};
// sample for removeElement


