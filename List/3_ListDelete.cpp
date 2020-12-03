#include "macro.h"

/* ��ʼ������˳�����Ա��Ѿ����ڣ�1<=i<=ListLength(L). */
/* �����������L�е�i��λ��֮ǰɾ���ȵ�����Ԫ�أ�����e������ֵ��L�ĳ���-1��*/
//���Ա�Ԫ�ص�ɾ��
Status ListDelete(SqList* L, int i, ElemType* e)
{
	int k;

	if (L->length == 0)	//˳�����Ա��ǿյ�
	{
		return ERROR;
	}
	if (i<1 || i>L->length)	//i���ڷ�Χ֮�ڵ�ʱ��
	{
		return ERROR;
	}

	*e = L->data[i - 1];

	if (i < L->length)	//���ɾ�������ݲ��ڱ�β
	{
		/*����Ҫ�����λ�ú������ȫ��������һλ*/
		for (k = i - 1;k < L->length; k++)
		{
			L->data[k - 1] = L->data[k];
		}
	}

	L->length--;

	return OK;

}


//��ʼ��������ʽ���Ա�L�Ѿ����ڣ�...
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
