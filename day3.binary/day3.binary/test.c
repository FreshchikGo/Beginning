#include<stdio.h>
int main()
{
	int tar = 0;
	int i = 0;
	int arr[10] = { 0 };
	printf("请输入十个数:\n");
	for (i = 0; i< 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("请输入要查找的数\n");
	scanf_s("%d", &tar);
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0]))-1;
	int mid = 0;
	

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (tar < arr[mid])
		{
			right = mid - 1;
		}
		else if (tar>arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标为%d\n",mid);
			break;
		}
	}
	if (left > right)
		printf("不存在这个数\n");

}