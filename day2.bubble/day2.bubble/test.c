#include<stdio.h>
int main()
{
	float num[10], tmp;
	int flag=0;
	short i, j;
	printf("input 10 number:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &num[i]);
		
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (num[j + 1] < num[j])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				flag = 1;

			}

		}
		if (flag == 0)
			break;
	}
	printf("sorted number:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%f\n ", num[i]);
	}
	return 0;
}
//注意：数组的输入输出只能采用循环输入或输出，数组比较也一样