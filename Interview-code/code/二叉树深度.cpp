#include"public.h"

//int number(int n)
//{
//	if (n>=0)
//	{
//		int m = 0;
//		while (n)
//		{
//			n = n&(n - 1);
//			++m;
//		}
//		return m;
//	}
//	else
//	{
//		int m1 = 1;
//		while (-n)
//		{
//			(-n) = -n&(n - 1);
//			++m1;
//		}
//		return m1;
//	}
//
//	
//}
//
//int main()
//{
//	int m=number(-15);
//	cout << m << endl;
//	int n = number(15);
//	cout << n << endl;
//	int p = number(0);
//	cout << p << endl;
//	system("pause");
//}

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};

//������������

int TreeDepth(TreeNode *pRoot)
{
	if (pRoot == 0)
		return 0;
	int number_left = TreeDepth(pRoot->left);
	int number_right = TreeDepth(pRoot->right);
	return (number_left > number_right) ? (number_left + 1) : (number_right + 1);
}

//================���Դ���==================
void Test(TreeNode *pRoot, int expected)
{
	int result = TreeDepth(pRoot);
	if (expected == result)
		printf("Test passed.\n");
	else
		printf("Test failed.\n");
}

//					1
//				/		\
//			   2		 3
//			  / \		  \
//			 4   5		   6
//				/
//			   7

//	��ÿ����������ε��㷨
//	�ж��Ƿ��Ƕ���ƽ����
//bool isBalanced(TreeNode *pRoot)
//{
//	if (!pRoot)
//		return true;
//	int left = TreeDepth(pRoot->left);
//	int right = TreeDepth(pRoot->right);
//	int differ = left - right;
//	if (differ > 1 || differ < -1)
//	{
//		return false;
//	}
//	return isBalanced(pRoot->left) && isBalanced(pRoot->right);
//}
//
//bool IsBalanced(TreeNode *pRoot, int *pDepth)
//{
//	if (pRoot == NULL)
//	{
//		*pDepth = 0;
//		return true;
//	}
//	int left, right;
//	if (IsBalanced(pRoot->left, &left) && IsBalanced(pRoot->right, &right))	//����������Ϊƽ�������
//	{
//		int differ = left - right;
//		if (differ<=1 || differ >= -1)
//		{
//			*pDepth = 1 + (left > right) ? left : right;
//			return true;
//		}
//	}
//	return false;
//}











//����һ������������ǰ������������н���ֵ��
//#��ʾ����

//typedef struct BiTree
//{
//	char ch;
//	BiTree *left, *right;
//}*BiTree;
//
//void CreatBiTree(BiTree *T)
//{
//	char ch;
//	scanf_s("%c", &ch);
//	if (ch == '#')
//	{
//		*T = NULL;
//	}
//	else
//	{
//		*T = (BiTree)malloc(sizeof(BiTree));
//		if (!*T)
//		{
//			exit(OVERFLOW);
//		}
//		(*T)->ch = ch;
//		CreatBiTree(&(*T)->left);
//		CreatBiTree(&(*T)->right);
//	}
//}