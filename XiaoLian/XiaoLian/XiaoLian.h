#include <vector>
#include <string>

typedef int DataType;

typedef struct BinTree   //二叉树节点定义
{
	DataType data;

	BinTree* left;
	BinTree* right;

	BinTree(DataType d) :data(d), left(nullptr), right(nullptr) {}
} NODE;



class Solution
{
public:
	int binTreeAddNode(BinTree* father_node, BinTree* node, int n);   
	// 用于构建二叉树
	// father_node表示在此节点下插入子节点
	// node  将要插入的子节点
	// n=1 插入为左子树  n=2 插入为右子数




	void question1(BinTree* root, DataType val);
	void question2(std::vector<int> vec, int topk);
	std::string question3(std::string str, int& idx);

};
