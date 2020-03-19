#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret = 0;
	char board[ROW][COL];
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		ret = is_win(board,  ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
	
		computer_move(board,ROW,COL);
		ret = is_win(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		print_board(board, ROW, COL);
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
		print_board(board, ROW, COL);
	}
	else if (ret == 'O')
	{
		printf("电脑赢\n");
		print_board(board, ROW, COL);
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
		print_board(board, ROW, COL);
	}
	 
}
void menu()
{
	int input = 0;

	printf("*******************\n");
	printf("***0.exit 1.play***\n");
	printf("*******************\n");
	printf("请输入：\n");
}
void test()
{
	int input = 0;
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
				printf("游戏结束\n");
				break;
			default:
				printf("输入错误请重新输入\n");
				break;
			}
	} while (input);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	test();
	return 0;
}