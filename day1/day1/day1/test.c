#include <stdio.h>

int main()

{

	int temp = 0;
	int a = 0, b = 0, c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a<c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b<c)

	{
		temp = c;
		c = b;
		b = temp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}