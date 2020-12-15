#include "macro.h"

//头插法
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;

	srand(time(0));	//初始化随机种子

	*L = (LinkList)malloc(sizeof(Node));
	(*L)->Next = NULL;

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));  //生成新节点
		p->data = rand() % 100 + 1;
		p->Next = (*L)->Next;
		(*L)->Next = p;
	}

}

