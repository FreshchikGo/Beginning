#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//���ظ����1--10ʮ�������
int main()
{
	int arr[10] = { 0 };
	int j,i,k;
	int temp = 0;
	srand((unsigned int)time(NULL));
	arr[0] = rand() % 10 + 1;
	for (k = 1; k < 10; k++)
	{
	again:
		temp = rand() % 10 + 1;
		for (i = 0; i < 10; i++)
		{
			if (arr[i] == temp)
				goto again;
		}
		for (j = 1; j < 10; j++)
		{
			if (arr[j] == 0)
			{
				arr[j] = temp;
				break;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
}