//#include<stdio.h>
// 求一个整数的每一位
//void print(int x)
//{
//	if (x >= 9)
//	{
//		print(x/10);
//	}
//	printf("%d ", x%10);
//
//}
//int main()
//{
//	int input = 0;
//	printf("请输入:>n");
//	scanf_s("%d", &input);
//	print(input);
//	return 0;
//} 

//打印n的阶乘
//#include<stdio.h>
//int cal(int n)
//{
//	if (n > 0)
//		return n*cal(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int input = 0;
//	int res = 0;
//	printf("请输入n:>");
//	scanf_s("%d", &input);
//	res=cal(input);
//	printf("%d ", res);
//	return 0;
//}

//strlen模拟
//#include<stdio.h>
//int my_strlen(char * p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main()
//{
//	int res = 0;
//	char arr[] = "abcdefg";
//	res=my_strlen(arr);
//	printf("%d ", res);
//	return 0;
//}
#include<stdio.h> 
//字符串逆序打印
void inverse(char*p)
{
	if (*p != '\0')
	{
		inverse(p + 1);
	}
		printf("%c ", *p);
}
int main()
{
	char arr[] = "abcdefg";
	inverse(arr);
	return 0;
}