#include<stdio.h>
int is_leap(int x)
{
	if ((x % 4 == 0 && x % 100 != 0 )|| x % 400 == 0)
		return 1;
	return 0;

}
int main()
{
	int input = 0;
	scanf_s("%d", &input);
	if (is_leap(input))
		printf("������\n");
	else
		printf("��������\n");
	return 0;
}
