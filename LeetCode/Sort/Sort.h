#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:

	static vector<int> static_vec;
	static bool static_print;
	/*ºÚµ•≈≈–Ú*/
	void bubble(vector<int> &vec = static_vec, bool print = static_print);
	void insert(vector<int> &vec = static_vec, bool print = static_print);
	void selection(vector<int> &vec = static_vec, bool print = static_print);
	void quickSort(vector<int> &vec = static_vec, int l = 0, int r = static_vec.size() -1 , bool print = static_print);


private:
	void printVector(vector<int> &vec = static_vec,bool print = static_print);




};