#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
	/*int n = 0;
	scanf_s("%d", &n);
	int *ar = NULL;
	ar = (int*)malloc(sizeof(int)*n);
	assert(ar != NULL);
	for (int i = 0; i < n; ++i)
	{
	ar[i] = i + 1;
	}
	for (int i = 0; i < n; ++i)
	{
	printf("%d ", ar[i]);
	}
	free(ar);
	ar = NULL;*/
	//typedef struct Student
	//{
	//	char *name;
	//	int age;
	//	char sex[3];
	//}Student;
	////malloc
	////assert
	////free后要滞空；
	//Student *p = (Student*)malloc(sizeof(Student));
	//assert(p != NULL);
	//p->age = 20;
	//strcpy(p->sex, "男");
	//p->name = (char *)malloc(sizeof(char)* 20);
	//assert(p->age != NULL);
	//strcpy(p->name, "张三");
	//printf("%s\n", p->name);
	//
	////calloc
	//int *ptr2 = (int *)calloc(10, sizeof(int));
	//assert (ptr2 != NULL);
	//printf("%d ", *ptr2);
	//printf("\n");
	////realloc
	//int *ptr1 = (int *)malloc(sizeof(int)* 5);
	//assert(ptr1 != NULL);
	//for (int i = 0; i < 5; ++i)
	//	ptr1[i] = i + 1;
	//realloc(ptr1, sizeof(int)* 10);
	//for (int i = 5; i < 10; i++)
	//	ptr1[i] = i + 1;
	//for (int i = 0; i < 10; ++i)
	//	printf("%d ", ptr1[i]);
	//printf("\n");
//void * my_realloc(void * memblock, size_t size)
//{
//		//1申请更大空间
//	void *new_memblock = malloc(size); 
//	if (new_memblock == NULL)
//		return NULL;
//	//2把原来的数据进行拷贝
//		memcpy(new_memblock, memblock, size); 
//		//3释放原有空间
//	free(memblock);
//	//返回新的空间地址
//	return new_memblock;
//	
//}
//{
//	//模拟realloc
//	int i = 0;
//	int *ptr1 = (int *)malloc(sizeof(int)* 5);
//	assert(ptr1 != NULL); 
//	for (i = 0; i < 5; i++)
//	{
//		*(ptr1+i) = i + 1;//ptr1[i]=*(p+i)
//	}
//	 
//	int *tmp = my_realloc(ptr1, sizeof(int)* 10);
//	if (tmp != NULL)
//	{
//		ptr1 = tmp;
//	}
//	else
//	{
//		free(ptr1);
//		return;
//	}
//	for (int i = 5; i < 10; ++i)
//		ptr1[i] = i + 1;
//	for (int i = 0; i < 10; ++i)
//		printf("%d ", ptr1[i]);
//{
char * get( )
{
	char p[] = "hello";
	return p;
}
int main()

{
	char *str = (char *)malloc(sizeof(100));
	assert(str != NULL);
	strcpy(str, "haha");
	printf("%s", str);
	free(str);
	//if (str != NULL)
	//	strcpy(str, "rehaha");
	//printf("%s", str);
	//free(str);
	return 0;
}