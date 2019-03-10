#include <vector>


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
	// defined in BinTreeFunc.cpp
	int binTreeAddNode(BinTree* father_node, BinTree* node, int n);   
	// father_node表示在此节点下插入子节点
	// node  将要插入的子节点
	// n=1 插入为左子树  n=2 插入为右子数
	BinTree* binTreeFind(BinTree* node, DataType data);
	void binTreeDLR(BinTree* root, void(*oper)(BinTree *p));
	void binTreeLDR(BinTree* root, void(*oper)(BinTree *p));
	void binTreeLRD(BinTree* root, void(*oper)(BinTree *p));
	static void  printOper(BinTree* node);

	void sumPathes(NODE* root, DataType val);

	int maxDepth(NODE * root, int level = 1);
	int minDepth(NODE * root);
	int minDepthTravel(NODE * root, int level);
	int maxdepth_ = std::numeric_limits<int>::min();  //用于存储中间变量
	int mindepth_ = std::numeric_limits<int>::max();  //用于存储中间变量


	std::vector<std::vector<int>> levelOrder(NODE * root);
	void printVec2d(std::vector<std::vector<int>> vec2d);
private:
	void pushToResult(std::vector<std::vector<int>>& ret, NODE* root, int level);

public:


};


