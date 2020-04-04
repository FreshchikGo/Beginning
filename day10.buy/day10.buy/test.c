#include<stdio.h>
int Countnum(int price,int money)
{
	int count = money / price;
	int emp = 0;
	emp = money / price;
	do
	{
		emp =emp-2;
		count++;
		emp++;
	} while (emp);
	return count;
}
int main()
{
	int count = 0;
	int money = 0;
	int price = 1;
	printf("ÄãÓÐ¶àÉÙÇ®?:>");
	scanf_s("%d", &money);
	
	int num=Countnum(price,money);
	printf("%d", num);

	return 0;
}