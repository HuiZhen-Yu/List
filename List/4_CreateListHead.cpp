#include "macro.h"

//ͷ�巨
void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;

	srand(time(0));	//��ʼ���������

	*L = (LinkList)malloc(sizeof(Node));
	(*L)->Next = NULL;

	for (i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node));  //�����½ڵ�
		p->data = rand() % 100 + 1;
		p->Next = (*L)->Next;
		(*L)->Next = p;
	}

}

