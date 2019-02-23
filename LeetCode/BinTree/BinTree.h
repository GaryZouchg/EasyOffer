typedef int DataType;

typedef struct BinTree
{
	DataType data;

	BinTree* left;
	BinTree* right;

	BinTree(DataType d) :data(d), left(nullptr), right(nullptr) {}
} NODE;

class Solution
{
public:
	void question1(NODE* root, DataType val);
};


