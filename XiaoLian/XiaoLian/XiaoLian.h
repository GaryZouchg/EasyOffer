#include <vector>
#include <string>

typedef int DataType;

typedef struct BinTree   //�������ڵ㶨��
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
	// ���ڹ���������
	// father_node��ʾ�ڴ˽ڵ��²����ӽڵ�
	// node  ��Ҫ������ӽڵ�
	// n=1 ����Ϊ������  n=2 ����Ϊ������




	void question1(BinTree* root, DataType val);
	void question2(std::vector<int> vec, int topk);
	std::string question3(std::string str, int& idx);

};
