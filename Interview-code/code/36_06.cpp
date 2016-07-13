#include"public.h"
#include<vector>

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};
using std::vector;
class solution
{
public:
	struct TreeNode* reConstructBinaryTree(vector<int>pre, vector<int>in)
	{
		if (pre.empty() || in.empty())
			return NULL;
		int rootvalue = pre[0];
		TreeNode *root = new TreeNode(rootvalue);
		if (pre.empty() || in.empty())
			return root;

		//遍历中序遍历序列，寻找根节点的位置
		int i = 1;
		for (i; i <= in.size(); i++)
		{
			if (in[i] != rootvalue)
				++i;
			else
				break;
		}

		//左子树的长度为
		int left_position = i;	//根据中序遍历序列所求
		int right_position = in.size() - left_position - 1;	//右子树的长度
		vector<int>left_pre, right_pre;	//申明前序遍历时的左右子树
		vector<int>left_in, right_in;	//中序遍历时的左右子树

		for (int pos = 1; pos <= in.size(); pos++)
		{
			if (pos < i)
			{
				left_pre.push_back(pre[pos]);
				left_in.push_back(in[pos - 1]);
			}
			else if (pos > i)
			{
				right_pre.push_back(pre[pos]);
				right_in.push_back(in[pos]);
			}
		}
		
		//构建左子树
		root->left = reConstructBinaryTree(left_pre, left_in);
		root->right = reConstructBinaryTree(right_in, right_in);
		return root;
	}



};


/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
	{
		if (pre.empty() || in.empty())
			return NULL;
		int rootvalue = pre[0];
		TreeNode *root = new TreeNode(pre[0]);
		if (pre.empty() || in.empty())
			return root;

		//遍历中序遍历序列，寻找根节点的位置
		int i = 0;
		for (i; i <in.size(); i++)
		{
			if (in[i] != rootvalue)
				++i;	//求出中序遍历序列中根节点的位置
			else
				break;
		}

		//左子树的长度为
		
		//int right_position = in.size() - left_length - 1;	//右子树的长度
		vector<int>left_pre, right_pre;	//申明前序遍历时的左右子树
		vector<int>left_in, right_in;	//中序遍历时的左右子树


		for (int pos = 0; pos < in.size(); pos++)
		{
			if (pos < i)
			{
				left_pre.push_back(pre[pos+1]);
				left_in.push_back(in[pos]);
			}
			else if (pos>i)
			{
				right_pre.push_back(pre[pos]);
				right_in.push_back(in[pos]);
			}
		}		
		//构建左子树
		root->left = reConstructBinaryTree(left_pre, left_in);
		root->right = reConstructBinaryTree(right_in, right_in);
		return root;
	}


};



 struct TreeNode 
 {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in)
	{
		if (pre.empty() || in.empty())
			return NULL;
		TreeNode* root = new TreeNode(pre[0]);
		if (pre.empty() || in.empty())
			return root;

		int left_length = 0;
		for (int i = 0; i < in.size(); ++i)
		{
			if (in[i] != pre[0])
				++left_length;
			else
				break;
		}
		vector<int>left_pre, right_pre, left_in, right_in;
		int right_length = in.size() - left_length - 1;
		for (int i = 1; i <= left_length; ++i)
		{
			left_pre.push_back(pre[i - 1]);
			left_in.push_back(in[i]);
		}
		for (int i = left_length; i <= left_length + right_length; i++)
		{
			right_pre.push_back(pre[i]);
			right_in.push_back(in[i]);
		}

		root->left = reConstructBinaryTree(left_pre, left_in);
		root->right = reConstructBinaryTree(right_pre, right_in);
		return root;
	}

};

int a1[3] = { 1, 2, 3 };
int (&b) [3] = a;

int a[3] = { 10, 20, 30 };
int(&b)[3] = a;