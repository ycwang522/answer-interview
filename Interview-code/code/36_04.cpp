//#include<iostream>
//
//struct size
//{
//	char ch1;
//	int m;
//	double n;
//};
//
//int main()
//{
//	struct size a;
//	std::cout << sizeof(a) << std::endl;
//
//}


#include <stdio.h>
#include <stdlib.h>
#include<vector>
#include<stack>
void fun(double *pl, double *p2, double *s)
{
	s = (double*)calloc(1, sizeof(double));
	*s = (*pl) + *(p2 + 1);
}



int	main()
	{
		double a[2] = { 1.1, 2.2 };
		double b[2] = { 10.0, 20.0 };
		double *s = a;
		fun(a, b, s);
		printf("%5.2f\n", *s);
		std::vector<int> vec(10);
		vec.push_back(1);
		std::stack<int>Stack;
		Stack.push(1);
		
	}

struct ListNode
{
	int val;
	struct ListNode *next;

	struct ListNode(int x) :val(x), next(NULL){}
};

std::vector<int> function(ListNode *head)
{
	std::vector<int> vec;
	std::stack<ListNode*> nodes;
	ListNode *Node = head;	//定义一个结点指针指向头结点

	while (Node != NULL)
	{
		nodes.push(Node);
		Node = Node->next;
	}

	while (nodes.empty() != 0)
	{
		Node = nodes.top();
		vec.push_back(Node->val);
		nodes.pop();
	}
	return vec;

}