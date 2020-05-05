#include"List.h"
#include"function.c"
void Test()
{
	SList mylist;
	SListInit(&mylist);
	PushBack(&mylist, 8);
	PushBack(&mylist, 9);
	PushFront(&mylist, 7);
	ListShow(&mylist);
	PopFront(&mylist);
	PopFront(&mylist);
	ListShow(&mylist);

}
void main()
{
	
	Test();
}