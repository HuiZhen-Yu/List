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

	(*L)->Next = NULL;	//������һ���ձ�

	return OK;
}