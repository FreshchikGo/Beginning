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
		printf("���Ӯ\n");
		print_board(board, ROW, COL);
	}
	else if (ret == 'O')
	{
		printf("����Ӯ\n");
		print_board(board, ROW, COL);
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
		print_board(board, ROW, COL);
	}
	 
}
void menu()
{
	int input = 0;

	printf("*******************\n");
	printf("***0.exit 1.play***\n");
	printf("*******************\n");
	printf("�����룺\n");
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
				printf("��Ϸ����\n");
				break;
			default:
				printf("�����������������\n");
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