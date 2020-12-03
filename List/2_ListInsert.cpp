#include "macro.h"

/* ��ʼ������˳�����Ա��Ѿ����ڣ�1<=i<=ListLength(L). */
/* �����������L�е�i��λ��֮ǰ�����ȵ�����Ԫ��e��L�ĳ���+1��*/

Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;

	if (L->length == MAXSIZE)	//˳�����Ա��Ѿ�����
	{
		return ERROR;
	}
	if (i<1 || i>L->length + 1)	//i���ڷ�Χ֮�ڵ�ʱ��
	{	
		return ERROR;
	}
	if (i <= L->length)	//�����������ݲ��ڱ�β
	{
		/*����Ҫ�����λ�ú������ȫ��������һλ*/
		for (k = L->length - 1;k >= i - 1;k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;		//���µ�Ԫ��ȥ��
	L->length++;

	return OK;

}

//������Ԫ�صĲ���
//��ʼ��������ʽ���Ա��Ѿ����ڣ�1<=i<=ListLength(L)
//�����������L�е�i��λ��֮ǰ�����µ�Ԫ��e
Status ListInsert(LinkList* L, int i, ElemType e)
{
	int j;
	LinkList p, a;
	p = *L;
	j = 1;

	while (p && j < i)		//Ѱ�ҵ�i���ڵ�
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