#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//输入五个国家，按字母排名打印
int main()
{
	
	int i = 0, j = 0;
	char country[5][10] = {0};

	printf("input your country name:\n");
	for (i = 0; i < 5; i++)
	{
			gets(country[i]);
	
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i - 1; j++)
		{
			char temp[10]="0";
			if (strcmp(country[j],country[j+1])>0)
			{
				strcpy(temp, country[j]);
				strcpy(country[j], country[j + 1]);
					strcpy(country[j + 1], temp);

			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%c", country[i][j]);
		}
		printf("\n");
	}

	return 0;
}