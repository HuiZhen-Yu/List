#include "macro.h"

//��̬����Ĳ������

//�����ǻ�ÿ��з������±�
int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	if (space[0].cur)
		space[0].cur = space[i].cur;
		//��������һ������������Ϊ����
	return i;
}

int ListLength(StaticLinkList L)
{

}

Status StaticListInsert(StaticLinkList L, int i, ElemType e)
{
	int j, k, l;

	k = MAX_SIZE - 1;//���һ��Ԫ��
	if (i < 1 || ListLength(L) + 1)
	{
		return ERROR;
	}

	j = Malloc_SLL(L);
	if (!j)
	{
		L[j].data = e;
		for (l = 1;l <= i - 1;l++)
		{
			k = L[k].cur;
		}

		L[j].cur = L[k].cur;
		L[k].cur = j;

		return OK;
	}

	return ERROR;
}
