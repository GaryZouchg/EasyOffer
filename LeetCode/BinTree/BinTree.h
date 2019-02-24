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
	// father_node��ʾ�ڴ˽ڵ��²����ӽڵ�
	// node  ��Ҫ������ӽڵ�
	// n=1 ����Ϊ������  n=2 ����Ϊ������
	BinTree* binTreeFind(BinTree* node, DataType data);
	void binTreeDLR(BinTree* root, void(*oper)(BinTree *p));
	void binTreeLDR(BinTree* root, void(*oper)(BinTree *p));
	void binTreeLRD(BinTree* root, void(*oper)(BinTree *p));

	static void  printOper(BinTree* node);





void sumPathes(NODE* root, DataType val);

};


