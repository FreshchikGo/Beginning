#pragma 
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
	}
	printf("\n");	
}
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走：>\n");
		printf("请输入坐标：>\n");
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
		     	break;
			}
			else
			{
				printf("已有棋子在此格上,请从新走\n");
			}
				
		}
		else
		{
			printf("坐标非法！重新输入！>\n");
		}
	}  
}
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	x = rand() % 3;
	y = rand() % 3;
	printf("电脑走:>\n");
	while (1)
	{ 
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
		else
		{
			x=rand() % 3;
			y = rand() % 3;
		}
	}
}
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] ==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			if (board[i][0] == 'X')
				return 'X';
			 else
				return 'O';
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			if (board[0][i] == 'X')
				return 'X';
			else 
				return 'O';
		}
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		if (board[2][0] == 'X')
			return 'X';
		else
			return 'O';
	}
	if (board[2][2] == board[1][1] && board[1][1] == board[0][0] && board[1][1] != ' ')
	{
		if (board[1][1] == 'X')
			return 'X';
		else 
			return 'O';

	}
	if (is_full(board,row,col)==1)
	{
		return 'Q';
	}
	return ' ';
}