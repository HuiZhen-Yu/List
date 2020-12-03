#include "macro.h"
/***************获得元素的操作*****************/
//将线性表中第i个元素返回

//Status 表示函数的类型，其值是函数结果状态代码，如OK等。
//初始条件：顺序线性表L已经存在，1<=i<=ListLength(L)
//操作结果：用E返回L中第I个数据元素的值。


//顺序存储结构 线性表元素的获取
Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length == 0 || i<1 || i>L.length)
	{
		return ERROR;
	}
	*e = L.data[i - 1];

	return OK;
}


//链式存储结构 链表元素的获取
Status GetElem(LinkList L,int i,ElemType *e)
{
	int j;
	LinkList p;

	p = L->Next;
	j = 1;
	while (p && j<i)
	{
		p = p->Next;
		++j;
	}

	if (!p || j > i)
	{
		return ERROR;
	}
	*e = p->data;//(*p).data
	return OK;

}