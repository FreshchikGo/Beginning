#include<stdio.h>
#include"game.h"
void setmine(char mine[COUNTS][COUNTS], int size)
{
	int count = COUNT+1;
	while (count)
	{
		int x = rand() % size + 1;
		int y = rand() % size + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
		
	}
}
void DisplayBoard(char board[COUNTS][COUNTS], int size)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= size; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= COUNT; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= COUNT; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**********************************\n");
	printf("********1.PLAY     0.EXIT*********\n");
	printf("**********************************\n");
	printf("**********************************\n");
	printf("**********************************\n");
}
void init_arr(char arr[COUNTS][COUNTS],int size,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			arr[i][j] = set;
		}
	}
}
void play()
{
	char show[COUNTS][COUNTS] = { '0' };
	char mine[COUNTS][COUNTS] = { '0' };
	init_arr(show, COUNTS,'*');
	init_arr(mine, COUNTS,  '0');
	DisplayBoard(show,COUNT);
	setmine(mine,COUNTS);
	DisplayBoard(mine, COUNT);

}
void game()
{
	int input = 0;
	do
	{
		
		menu();
		printf("请输入:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			play();
			break;
		case 0:
			break;
		default:
			printf("请重新输入:\n");
		}
	} while (input);
}