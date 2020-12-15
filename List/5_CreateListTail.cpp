#include "macro.h"


//尾插法创建链表
void CreateListTail(LinkList *L, int n)
{
	LinkList p, r;
	int i;

	srand(time(0));
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;

	for (i = 0;i < n;i++)
	{
		p = (Node*)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		r->Next = p;
		r = p;		//
	}

	r->Next = NULL;


}