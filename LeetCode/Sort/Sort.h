#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:

	static vector<int> static_vec;
	static vector<int> result_vec;
	static bool static_print;
	/*ºÚµ•≈≈–Ú*/
	void bubble(vector<int> &vec = static_vec, bool print = static_print);
	void insert(vector<int> &vec = static_vec, bool print = static_print);
	void selection(vector<int> &vec = static_vec, bool print = static_print);

	//∏¥‘”≈≈–Ú

	void quickSort(vector<int> &vec = static_vec, int l = 0, int r = static_vec.size() -1 , bool print = static_print);

	void mergeSort(vector<int> &data = static_vec, int start = 0, int end = static_vec.size() - 1, vector<int> &result = result_vec);

private:
	void printVector(vector<int> &vec = static_vec,bool print = static_print);
	void merge(vector<int> &data, int start, int end, vector<int> &result);




};