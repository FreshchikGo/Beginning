#include<stdio.h>
int main()
{ 
	int n = 0;
	scanf_s("%d", &n);
	int data[30][30] = { 1 }; 
	int i, j;

	for (i = 1; i < n; i++)
	{
		data[i][0] = 1; 
		for (j = 1; j <= i; j++) 
		{
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; 
		}
	}

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
	return 0;
}