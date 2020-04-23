#include<stdio.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//sizeof+数组名 表示求整个数组大小
	printf("%d\n", sizeof(a[0][0]));//求第一个元素的大小
	printf("%d\n", sizeof(a[0]));//求第一行元素大小为4*4=16个字节
	printf("%d\n", sizeof(a[0]+1));//只要数组名不是单独放在sizeof内,就会降级，
	                               //这里本位第二行元素的地址，
 	                               //降级为第二行首元素地址
	printf("%d\n", sizeof(a+1));//降级为第二行的首元素地址
	printf("%d\n", sizeof(&a[0]+1));//降级为第二行的地址
	printf("%d\n", sizeof(*a));//降级为第一行的四个元素16字节
	printf("%d\n", sizeof(a[3]));
	

	return 0;
}