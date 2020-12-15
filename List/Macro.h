#pragma once
#ifndef _macro_h_
#define _macro_h_

#include <stdlib.h>
#include <time.h>

//顺序存储结构
#define MAXSIZE 20
#define MAX_SIZE 1000
typedef int	ElemType;

typedef struct
{
	ElemType data[MAXSIZE];
	int length;		//线性表的当前长度
} SqList;

//用结构指针表示单链表
typedef struct Node
{
	ElemType data;		//数据域
	struct Node* Next;  //指针域

}Node;
typedef struct Node* LinkList;

//线性表的静态链表存储结构
typedef struct
{
	ElemType data;
	int cur;
}Component, StaticLinkList[MAX_SIZE];

#define		OK		1
#define		ERROR	0
#define		TRUE	1
#define		False	0

typedef int Status;

/***************获得元素的操作*****************/
Status GetElem(SqList L, int i, ElemType* e);

/***************插入元素的操作*****************/
Status ListInsert(SqList* L, int i, ElemType e);

/***************删除元素的操作*****************/
Status ListDelete(SqList* L, int i, ElemType* e);
#endif // !_macro_h_