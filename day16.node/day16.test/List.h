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
}SListNode;  //�ڵ�ṹ��
typedef struct Slist
{
	SListNode *head;
}SList;
//�˴� SList->head ����Ϊ SListNode*

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
	if (plist->head == NULL)//β��Ҫ�����Ƿ�Ϊ��һ���ڵ㣬�ǵ�һ���ڵ㽫�޸ı�ͷָ��plist->head
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
}//ͷ���������Ƿ��һ�����㣬plist->head�����޸�

void PopBack(SList *plist)
{
	assert(plist != NULL);
	SListNode *p;
	SListNode  *prev;
	if (plist->head == NULL)
		return;
	p = plist->head;
	prev = p;
	
	//����ֻ��һ���ڵ�
	if (p->next == NULL)
		plist->head = NULL;
	//����ڵ�
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
}//β��ɾ����Ҫ���Ǳ���ֻ��һ���ڵ�ĳ���

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