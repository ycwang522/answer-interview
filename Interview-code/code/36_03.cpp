#include"public.h"
#include<stack>

typedef int ElemType;

typedef struct Node
{
	ElemType value;
	struct Node *next;
}Node, *LinkList;

LinkList LinklistInit()
{
	Node *L;
	L = (Node *)malloc(sizeof(Node));
	if (L == NULL)
		printf("ÉêÇëÊ§°Ü");
	else
		L->next = NULL;
}
void change(LinkList *pHead)
{
	std::stack<Node*> nodes;
	Node *pNode = *pHead;
	while (pNode != NULL)
	{
		nodes.push(pNode);
		pNode = pNode->next;
	}
	while (!nodes.empty() )
	{
		pNode = nodes.top();
		printf("%d\t", pNode->value);
		nodes.pop();
	}

}
