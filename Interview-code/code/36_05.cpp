/*
*已知一个二叉树的前序遍历和中序遍历序列
*重建该二叉树，并且输出根节点的值
*/

#include"public.h"

struct BinaryTreeNode
{
	int value;
	BinaryTreeNode *pLeft;
	BinaryTreeNode *pRight;
};

BinaryTreeNode* constructor(int *preOrder, int *inOrder, int length)
{
	if (preOrder == NULL || inOrder == NULL || length < 0)
		return NULL;
	constructorCore(preOrder, preOrder + length - 1, inOrder, inOrder + length - 1);
}

BinaryTreeNode* constructorCore(int *startPreorder, int *endPreorder, int *starInOrder, int *endInOrder)
{
	int rootNodeValue = startPreorder[0];	//根节点的值
	BinaryTreeNode* root = new BinaryTreeNode();
	root->value = rootNodeValue;
	root->pLeft = root->pRight = NULL;

	if (startPreorder == endPreorder)
	{
		if (starInOrder == endInOrder && *startPreorder == *starInOrder)
			return root;
		else
			throw std::exception("Invalid input");
	}

	//根据中序遍历寻找根节点的值
	int *rootInOrder = starInOrder;
	while (rootInOrder <= endInOrder && *rootInOrder != rootNodeValue)
		++rootInOrder;

	if (rootInOrder == endPreorder && *rootInOrder != rootNodeValue)
		throw std::exception("Invalid input.");

	int leftLength = rootInOrder - starInOrder;	//左子树的长度
	int *leftPreorderEnd = startPreorder + leftLength;	//前序遍历时左子树最后一个结点
	if (leftLength > 0)
		root->pLeft = constructorCore(startPreorder + 1, leftPreorderEnd, starInOrder, rootInOrder - 1);

	if (leftLength < startPreorder - endPreorder)
		root->pRight = constructorCore(startPreorder + leftLength + 1, endPreorder, rootInOrder + 1, endInOrder);
	return root;

}

struct BinaryTreeNode
{
	int value;
	BinaryTreeNode *pLeft;
	BinaryTreeNode *pRight;
};

BinaryTreeNode* Constructor(int *preorder, int *inorder, int length)
{
	if (preorder == NULL || inorder == NULL || length < 0)
		return NULL;
	else
		return Construcor_Core(preorder, preorder + length - 1, inorder, inorder + length - 1);
}

BinaryTreeNode *Construcor_Core(int *startPreorder, int *endPreorder, int *StartInorder, int *EndInorder)
{
	BinaryTreeNode* root = new BinaryTreeNode();
	int rootvalue = startPreorder[0];
	root->value = rootvalue;
	root->pLeft = root->pRight = NULL;

	if (startPreorder == endPreorder)
	{
		if (StartInorder == EndInorder && *startPreorder == *StartInorder)
		{
			return root;
		}
		else
			throw std::exception("Invalid Input.");
	}

	//根据中序遍历查找根节点的位置
	int *rootInorder = StartInorder;
	while (rootInorder <= EndInorder && *rootInorder != rootvalue)
		++rootInorder;
	if (rootInorder == EndInorder && *rootInorder != rootvalue)
		throw std::exception("Invalid Input.");
	int LeftLength = rootInorder- StartInorder;
	int *preOrderEnd = startPreorder + LeftLength;

	if (LeftLength > 0)
		root->pLeft = Construcor_Core(startPreorder + 1, preOrderEnd, StartInorder, rootInorder - 1);
	if (LeftLength < startPreorder - endPreorder)
		root->pRight = Construcor_Core(preOrderEnd + 1, endPreorder, rootInorder + 1, EndInorder);
	return root;
}

#include<vector>
struct TreeNode
{
	
	int val;
	TreeNode *left;
	TreeNode *right;
	
	
};


int main()
{
	std::vector<int> pre;
	pre.begin();
	pre.end();

	TreeNode *root;
	std::vector<TreeNode*>ivec;
	root->val = 0;
	root->left = root->right = NULL;
	ivec.push_back(root);
	
}


using std::vector;
class Solution {
public:
	struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
	{
		int in_length = in.size();
		if (pre.empty() || in.empty() || in_length <= 0)
			return NULL;	//如果输入的两个遍历序列均为空，则返回

		vector<int> pre_start, pre_end, in_start, in_end;
		int rootval = pre[0];	//根节点的值

		TreeNode* root = new TreeNode();
		//根据中序遍历寻找根结点的值
		int i = 0;
		for (i; i < in_length; i++)
		{
			if (in[i] == rootval)
				break;
		}

		for (int j = 0; j < i; j++)
		{

		}
		


		
	}



	


};


 
 struct TreeNode 
 {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

 class Solution
 {
 public:
	struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
	{
		if (pre.empty() || in.empty())
			return NULL;	//如果输入的两个遍历序列均为空，则返回
		else
			return core(pre, pre.end, in.begin, in.end);
	}



	TreeNode* core(int *start_pre, int *end_pre, int *start_in, int *end_in)
	{
		int rootvalue = start_pre[0];
		TreeNode* root = new TreeNode(rootvalue);
		root->left = root->right = NULL;

		if (start_pre == end_pre)
		{
			if (start_in == end_in && *start_in == *start_pre)
				return root;
		}

		//根据中序遍历的方式查找根节点
		int *rootInOrder = start_in;
		while (rootInOrder <= end_in && *rootInOrder != rootvalue)
			++rootInOrder;
		if (rootInOrder==end_in && *rootInOrder != rootvalue)
			throw std::exception("invalid input");

		int leftLength = rootInOrder - start_in;
		int *preOrderEnd = start_pre + leftLength;

		if (leftLength > 0)
		{
			root->left = core(start_pre + 1, preOrderEnd, start_in, rootInOrder - 1);
		}
		if (leftLength < start_pre - end_pre)
		{
			root->right = core(preOrderEnd + 1, end_pre, rootInOrder + 1, end_in);
		}
		return root;
	}
 };