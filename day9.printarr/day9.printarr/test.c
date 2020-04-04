#include<stdio.h>
//int print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//
//	return 0;
//}
#include<string.h>
void reverse(char arr[10], int length)
{
	char *p1 = arr;
	char * p2 = &arr[length-1];
	while (p1 < p2)
	{
		char temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
}
int main()
{
	int i = 0;
	char arr[10] = "abcdefg";
	reverse(arr,strlen(arr));
	for (i = 0; i < strlen(arr); i++)
		printf("%c",arr[i]);
	return 0;
}