#include<stdio.h>
void init_arr(int arr[],int length)
{
	int i = 0;
	for ( i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
}
void print_arr(int arr[], int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void rev_arr(int arr[], int length)
{
	int left = 0;
	int right = length-1;
	int temp = 0;
	while (left <= right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 4 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	init_arr(arr, sz);
	print_arr(arr, sz);
	rev_arr(arr, sz);
	print_arr(arr, sz);
	return 0;
}