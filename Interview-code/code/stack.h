#include<fstream>

//顺序结构实现栈
template<class T>
	class Stack
	{
	public:
		Stack(int MaxStackSize = 10);
		~Stack()
		{
			delete[] stack;
		}
		bool IsEmpty() const
		{
			return top == -1;
		}
		bool IsFull() const
		{
			return top == MaxTop;
		}
		T Top() const;
		Stack<T> & Push(cosnt T& x);
		Stack<T> & Pop(T &x);
	private:
		int top;
		int MaxTop;
		T *stack;
	};

/*前序遍历左子树：递归
	typedef struct Bitree
	{
		double data;
		Bitree *Left, *right;
	}*Bitree;
	void PreOrderTerverse(Bitree T)
	{
		if (T == NULL)
			return ;
		printf("%c", T->data);
		PreOrderTerverse(T->Left);
		PreOrderTerverse(T->right);
	}
	*/
	//栈的一个应用：
	//匹配括号问题：从左往右扫描，遇到左括号存放到栈内，当遇到右括号时，将栈顶的左括号弹出，和该右括号组成一对括号。
	//栈的特点：后进先出
	//具有n个结点的完全二叉树的深度为|log2(n)|+1

	//满二叉树：所有分支都存在左子树和右子树，并且所有叶子节点都在同一层上。
	//完全二叉树：编号为i的结点与同样深度的满二叉树中编号为i的结点在二叉树中位置完全相同。
	//满二叉树一定是完全二叉树，但是完全二叉树不一定是满二叉树。

//前序遍历二叉树
	//二叉树为空，则返回空操作。
	//否则先访问根结点，然后前序遍历左子树，再前序遍历右子树。

	//二叉树的前序遍历实现递归算法
//	template<class T>

	typedef struct Bitree
	{
		double data;
		Bitree *lchild;
		Bitree *rchild;
	}*Bitree; 

	void PreOrderTraverse(Bitree T)
	{
		if (T == NULL)
			return;
		printf("%c", T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}

//中序遍历的递归算法
	void InOrderTraverse(Bitree T)
	{
		if (T == NULL)
			return;
		InOrderTraverse(T->lchild);
		printf("%c", T->data);
		InOrderTraverse(T->rchild);
	}

//后续遍历的递归算法。
	void PostOrderTraverse(Bitree T)
	{
		if (T == NULL)
			return;
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		printf("%c", T->data);
	}


	//计算二叉树的高度
	int BinaryTreeHeight(Bitree T)
	{
		if (T == 0)
			return 0;
		
	}
