#include<stdio.h>
//һά���鴫��
//void test(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", *(arr + i));
//	
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, sz);
//	return 0;
//}
//��ά����ָ�봫��
//void test(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", *(arr + i));
//
//}
void test(int(*arr)[5], int row,int col)
{
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	 for (j = 0; j < col;j++)
 	{
		printf("%d ", *(*(arr + i)+j));//�൱��arr[i][j] 
	}
}
int main()
{
	int arr[2][5] = { 1, 2, 3, 4, 5 , 6, 7, 8, 9, 0};
	int sz = sizeof(arr) / sizeof(arr[0][0]);
	test(arr, 2 ,5);
	return 0;
}