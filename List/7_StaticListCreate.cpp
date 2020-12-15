#include "macro.h"
//对静态链表的初始化相当于初始化数组
Status InitList(StaticLinkList space)
{
	int i;
	for (i = 0;i < MAXSIZE - 1;i++)
	{
		space[i].cur = i + 1;
	}
	space[MAXSIZE - 1].cur = 0;
	return OK;
}