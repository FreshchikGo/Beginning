#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char s[81];
	char ch='0';
	int i=0,len=0,j=0;
	printf("�����ַ���:\n");
	scanf("%s", s);
	printf("�����������ַ�:>\n");
	getchar();
	scanf("%c", &ch);
	len = strlen(s);
	while (s[i] != '\0')
	{
		if (ch <= s[i])
			break;
		else
			i++;
	}
	for (j= len-1; j>=i; j--)
	{
		s[j + 1] = s[j];
	}
	s[len + 1] = '\0';
	s[i] = ch;
	printf("�����Ľ��:\n");
	printf("%s\n", s);
	return 0;
}