#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	printBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	printBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void menu() 
{
	printf("*******************************\n");
	printf("*******1.play ** 0.exit********\n");
	printf("*******************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time (NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case START:
			game();
			break;
		case EXIT:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������:>\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}