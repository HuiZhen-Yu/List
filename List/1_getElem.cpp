#include "macro.h"
/***************���Ԫ�صĲ���*****************/
//�����Ա��е�i��Ԫ�ط���

//Status ��ʾ���������ͣ���ֵ�Ǻ������״̬���룬��OK�ȡ�
//��ʼ������˳�����Ա�L�Ѿ����ڣ�1<=i<=ListLength(L)
//�����������E����L�е�I������Ԫ�ص�ֵ��


//˳��洢�ṹ ���Ա�Ԫ�صĻ�ȡ
Status GetElem(SqList L, int i, ElemType *e)
{
	if (L.length == 0 || i<1 || i>L.length)
	{
		return ERROR;
	}
	*e = L.data[i - 1];

	return OK;
}


//��ʽ�洢�ṹ ����Ԫ�صĻ�ȡ
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