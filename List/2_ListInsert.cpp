#include "macro.h"

/* 初始条件：顺序线性表已经存在，1<=i<=ListLength(L). */
/* 操作结果：再L中第i个位置之前插入先的数据元素e，L的长度+1；*/

Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;

	if (L->length == MAXSIZE)	//顺序线性表已经满了
	{
		return ERROR;
	}
	if (i<1 || i>L->length + 1)	//i不在范围之内的时候
	{	
		return ERROR;
	}
	if (i <= L->length)	//如果插入的数据不在表尾
	{
		/*将需要插入的位置后面的数全部都后移一位*/
		for (k = L->length - 1;k >= i - 1;k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;		//将新的元素去掉
	L->length++;

	return OK;

}

//单链表元素的插入
//初始条件：链式线性表已经存在，1<=i<=ListLength(L)
//操作结果：在L中第i个位置之前插上新的元素e
Status ListInsert(LinkList* L, int i, ElemType e)
{
	int j;
	LinkList p, a;
	p = *L;
	j = 1;

	while (p && j < i)		//寻找第i个节点
	{
		p = p->Next;
		j++;
	}

	if (!p || j > i)
	{
		return ERROR;
	}

	a = (LinkList)malloc(sizeof(Node));
	a->data = e;

	a->Next = p->Next;
	p->Next = a;

	return OK;

}