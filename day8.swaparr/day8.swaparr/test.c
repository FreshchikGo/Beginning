#include<stdio.h>
int main()
{
	int arr1[10] = {10,21,41};
	int arr2[10] = { 5 ,4,5};
	int i = 0;
	for (i = 0; i<10; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}