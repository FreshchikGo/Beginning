#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	char  arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = 'A' + i;
	}
	FILE *fpin = fopen("my.txt", "w");
	if (NULL == fpin)
	{
		printf("open failed\n");
		return -1;
	}

	for (i = 0; i < 10; i++)
	{
		fprintf(fpin, "%c", arr[i]);
	}
	fclose(fpin);
	FILE*fpout = fopen("myfile.txt","w");
	if (NULL == fpout)
	{
		fclose(fpin);
		printf("open test2.txt error\n");
		return -1;
	}
	char ch = fgetc(fpin);
	while (ch != EOF)
	{
		fputc(ch, fpout);
		ch = fgetc(fpin);
	
	}

	return 0;
}