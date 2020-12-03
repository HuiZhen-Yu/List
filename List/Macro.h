#pragma once
#ifndef _macro_h_
#define _macro_h_
#include <stdlib.h>

//˳��洢�ṹ
#define MAXSIZE 20
typedef int	ElemType;

typedef struct
{
	ElemType data[MAXSIZE];
	int length;		//���Ա�ĵ�ǰ����
} SqList;

//�ýṹָ���ʾ������
typedef struct Node
{
	ElemType data;		//������
	struct Node* Next;  //ָ����

}Node;
typedef struct Node* LinkList;



#define		OK		1
#define		ERROR	0
#define		TRUE	1
#define		False	0

typedef int Status;

/***************���Ԫ�صĲ���*****************/
Status GetElem(SqList L, int i, ElemType* e);

/***************����Ԫ�صĲ���*****************/
Status ListInsert(SqList* L, int i, ElemType e);

/***************ɾ��Ԫ�صĲ���*****************/
Status ListDelete(SqList* L, int i, ElemType* e);
#endif // !_macro_h_