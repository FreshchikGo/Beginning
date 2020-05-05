#ifndef _HEAD_H_
#define _HEAD_H_
#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
#include"function.c"
#include<assert.h>
#include<stdlib.h>
typedef struct SListNode
{
	int data;
	struct SListNode *next;
}SListNode;  //节点结构体
typedef struct Slist
{
	SListNode *head;
}SList;
//此处 SList->head 类型为 SListNode*

void SListInit(SList *p)
{
	p->head = NULL;
}


static SListNode* buy_node(int x)
{
	SListNode *s = (SListNode *)malloc(sizeof(SListNode));
	s->data = x;
	s->next = NULL;
	return s;
}
void PushBack(SList * plist,int x)
{
	assert(plist != NULL);
	SListNode *s = buy_node(x);
	if (plist->head == NULL)//尾插要考虑是否为第一个节点，是第一个节点将修改表头指针plist->head
	{
		plist->head = s;
		return;
	}
	SListNode *p = plist->head;
	while (p->next)
		p = p->next;
	p->next = s;

}
void PushFront(SList *plist, int x)
{
	assert(plist != NULL);
	SListNode *s = buy_node(x);
	s->next = plist->head;
	plist->head = s;
}//头插则无论是否第一个几点，plist->head都需修改

void PopBack(SList *plist)
{
	assert(plist != NULL);
	SListNode *p;
	SListNode  *prev;
	if (plist->head == NULL)
		return;
	p = plist->head;
	prev = p;
	
	//链表只有一个节点
	if (p->next == NULL)
		plist->head = NULL;
	//多个节点
	else
	{
		while (p->next != NULL)
		{
			prev = p;
			p = p->next;
		}
		prev->next = NULL;
	}
	free(p);
}//尾部删除需要考虑表中只有一个节点的场合

void PopFront(SList* plist)
{
	assert(plist != NULL);
	SListNode *p = plist->head;
	SListNode *prev = p;
	if (plist->head == NULL)
		return;
	if ( NULL==p->next)
	{
		plist->head = NULL;
		free(p);
	}
	else
	{
		p = p->next;
		plist->head = p;
		free(prev);

	}
}
void ListShow(SList* plist)
{
	SListNode * p = plist ->head;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("Over\n");
}
#endif