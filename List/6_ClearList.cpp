#include "macro.h"

Status ClearList(LinkList *L)
{
	LinkList p, q;
	p = (*L)->Next;
	while (p)
	{
		q = p->Next;
		free(p);
		p = q;
	}

	(*L)->Next = NULL;	//链表变成一个空表

	return OK;
}