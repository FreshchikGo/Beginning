//猜数字游戏
#include <stdio.h>
#include<time.h>
void menu()
{
	printf("*****************************\n");
	printf("******1.玩游戏   0.退出******\n");
	printf("*****************************\n");

}
	
void game()
{
	int ret = rand()%100;
	int a = 0;
	printf("猜数字:\n");
	
	while (1)
	{
		scanf_s("%d", &a);
		if (a < ret)
			printf("猜小了\n");
		else if (a>ret)
			printf("猜大了\n");
		else
		{
			printf("你猜对了！\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入:\n");
		}
	} while (input);
}