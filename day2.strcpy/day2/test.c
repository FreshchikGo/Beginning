#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	strcpy(&str[0], "china");
	strcpy(&str[1], "define");
	strcpy(&str[2], "ARM");
	printf("%s\n", str);
	return 0;
}//strcpy(a,b),����Ϊ������ַ���Ѵ�b��ַ��'\0'���ַ�ȫ����������a��ַ��ʼ�Ŀռ�

	