#include<fstream>

//˳��ṹʵ��ջ
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

/*ǰ��������������ݹ�
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
	//ջ��һ��Ӧ�ã�
	//ƥ���������⣺��������ɨ�裬���������Ŵ�ŵ�ջ�ڣ�������������ʱ����ջ���������ŵ������͸����������һ�����š�
	//ջ���ص㣺����ȳ�
	//����n��������ȫ�����������Ϊ|log2(n)|+1

	//�������������з�֧������������������������������Ҷ�ӽڵ㶼��ͬһ���ϡ�
	//��ȫ�����������Ϊi�Ľ����ͬ����ȵ����������б��Ϊi�Ľ���ڶ�������λ����ȫ��ͬ��
	//��������һ������ȫ��������������ȫ��������һ��������������

//ǰ�����������
	//������Ϊ�գ��򷵻ؿղ�����
	//�����ȷ��ʸ���㣬Ȼ��ǰ���������������ǰ�������������

	//��������ǰ�����ʵ�ֵݹ��㷨
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

//��������ĵݹ��㷨
	void InOrderTraverse(Bitree T)
	{
		if (T == NULL)
			return;
		InOrderTraverse(T->lchild);
		printf("%c", T->data);
		InOrderTraverse(T->rchild);
	}

//���������ĵݹ��㷨��
	void PostOrderTraverse(Bitree T)
	{
		if (T == NULL)
			return;
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		printf("%c", T->data);
	}


	//����������ĸ߶�
	int BinaryTreeHeight(Bitree T)
	{
		if (T == 0)
			return 0;
		
	}
