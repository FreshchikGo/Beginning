#include<stdio.h>
typedef struct Test
{
	int a;
	char b;
	double c;
}Test;
typedef struct Test1
{
	int c;
	double b;
	char a;
}Test1;
#define offset(struct_type,member_name) (size_t)&(((struct_type*)0)->member_name)
//                                     ǿתΪ����     �ṹ���׵�ַ  
void main()
{
	printf("offset = %d\n", offset(Test, c));
	printf("offset = %d\n", offset(Test1, a));
}