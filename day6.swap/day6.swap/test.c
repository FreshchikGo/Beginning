#include<stdio.h>
void swap(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 20,b=10;
	int* pa = &a;
	int* pb = &b;
	swap(&a, &b);
	printf("a=%d,b=%d\n", a,b);
	return 0;
}