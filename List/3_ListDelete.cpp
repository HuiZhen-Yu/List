#include "macro.h"

/* 初始条件：顺序线性表已经存在，1<=i<=ListLength(L). */
/* 操作结果：再L中第i个位置之前删除先的数据元素，并用e返回其值，L的长度-1；*/
//线性表元素的删除
Status ListDelete(SqList* L, int i, ElemType* e)
{
	int k;

	if (L->length == 0)	//顺序线性表是空的
	{
		return ERROR;
	}
	if (i<1 || i>L->length)	//i不在范围之内的时候
	{
		return ERROR;
	}

	*e = L->data[i - 1];

	if (i < L->length)	//如果删除的数据不在表尾
	{
		/*将需要插入的位置后面的数全部都后移一位*/
		for (k = i - 1;k < L->length; k++)
		{
			L->data[k - 1] = L->data[k];
		}
	}

	L->length--;

	return OK;

}


//初始条件：链式线性表L已经存在，...
Status ListDelete(LinkList *L, int i, ElemType *e)
{
	int j;
	LinkList p, q;
	
	p = *L;
	j = 1;

	while (p->Next && j<i)
	{
		p = p->Next;
		++j;
	}

	if ( !(p->Next) || j>1)
	{
		return ERROR;
	}

	q = p->Next;
	p->Next = q->Next;

	*e = q->data;
	free(q);

	return OK;
}
