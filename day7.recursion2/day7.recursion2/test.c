#include<stdio.h>
//��һ���Ǹ�������ӡ����λ�ĺ�
//int sum(int x)
//{
//	if (x > 9)
//		return sum(x % 10) + sum(x / 10);
//	else
//		return x;
//}
//int main()
//{
//	int res = 0;
//	int input = 0;
//	scanf_s("%d", &input);
//	res=sum(input);
//	printf("%d ", res);
//	return 0;
//}


//void test(int x,int k)
//{
//	static int i = 1;
//	if (k)
//	{
//		i *= x;
//		test(x, --k);
//	}
//	if (k==1)
//	printf("%d ", i);
//}
//int main()
////n��k�η�
//{
//	int input = 0;
//	int k = 0;
//	scanf_s("%d%d", &input,&k);
//	test(input,k);
//	return 0;
//}

//쳲���������
int fib(int n)
{
	if (n<3)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int input = 0;
	int res = 0;
	scanf_s("%d", &input);
	res=fib(input);
	printf("%d", res);
}