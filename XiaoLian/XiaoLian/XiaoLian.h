
typedef int DataType;

struct BinTree
{
	DataType data;

	BinTree* left;
	BinTree* right;

	BinTree(DataType d) :data(d), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
	void question1(BinTree* root, DataType val);
	void question2();
	void question3();
};
