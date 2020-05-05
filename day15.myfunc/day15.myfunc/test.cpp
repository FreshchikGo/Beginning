#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include<assert.h>
//int main()
//{
//	char * p = "- nihao, zhuo.li lin ";
//	char * d = " hao";
//	char * res = strstr(p, d);
//	printf("res=%s\n", res);
//	return 0;
//}Strstr



//int main()
//{
//	char str[] = "-1 Th@is, a sample string.";
//	char * p;
//	p = strtok(str, " ,.-@");
//	printf("%s\n", p);
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//			p = strtok(NULL, " ,.-@");
//	}
//	return 0;
//}strtok




void* my_memmove(void * des, const void*src, size_t count)
{   
	void* ret = des;
	assert(des != NULL);
	assert(src != NULL);
	while (count--)
	{
		*(char *)des = *(char *)src;
		des = (char *)des + 1;
		src = (char *)src + 1;
	}
	return ret;

}
int main()
{
	char *p;
	char des[] = "abcdefggadas";
	char res[] = {'1','2','3'};
	p= (char *)my_memmove(des, res, sizeof(char)* 3);
	printf("%s\n", des);
	printf("%c\n", *p);
	return 0;
}
