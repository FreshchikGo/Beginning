#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int input = 0;
	printf("请输入一个数:");
	scanf_s("%d", &input);
	int i = is_prime(input);
	if (i == 1)
		printf("是素数\n");
	else
		printf("不是素数\n");
	return 0;
}