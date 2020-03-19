#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void printBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
			if (board[x][y] != '1')
	   {
			board[x][y] = '1';
			count--;   
        }
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] 
		+ mine[x + 1][y + 1] - 8 * '0';

}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],
	int row, int col)
{
	int win=0;
	while (win<col*row-EASY_COUNT)
	{
		int x = 0;
		int y = 0;

		printf("请输入坐标;>\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)

		{

			if (mine[x][y] == '1')
			{
				printf("炸死了\n");
				printBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = 0;
				win++;
				count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				printBoard(show, ROW, COL);
			}
		}
		else
			printf("坐标非法\n");
	}
	if (win >= col * row - EASY_COUNT)
	{
		printf("you win\n");
	}
}