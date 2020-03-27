#include<stdio.h>
int main()
{
	int i = 0,j=0;
	int input = 0;
	scanf_s("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= input; j++)
		{
			printf("%d*%d=%3d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}