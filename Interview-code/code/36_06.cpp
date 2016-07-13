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

		//��������������У�Ѱ�Ҹ��ڵ��λ��
		int i = 1;
		for (i; i <= in.size(); i++)
		{
			if (in[i] != rootvalue)
				++i;
			else
				break;
		}

		//�������ĳ���Ϊ
		int left_position = i;	//�������������������
		int right_position = in.size() - left_position - 1;	//�������ĳ���
		vector<int>left_pre, right_pre;	//����ǰ�����ʱ����������
		vector<int>left_in, right_in;	//�������ʱ����������

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
		
		//����������
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

		//��������������У�Ѱ�Ҹ��ڵ��λ��
		int i = 0;
		for (i; i <in.size(); i++)
		{
			if (in[i] != rootvalue)
				++i;	//���������������и��ڵ��λ��
			else
				break;
		}

		//�������ĳ���Ϊ
		
		//int right_position = in.size() - left_length - 1;	//�������ĳ���
		vector<int>left_pre, right_pre;	//����ǰ�����ʱ����������
		vector<int>left_in, right_in;	//�������ʱ����������


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
		//����������
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