#pragma once
#ifndef __GAME_H_
#define __GAME_H_
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
int GetMineCount(char mine[ROWS][COLS], int x, int y);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],
	int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void printBoard(char board [ROWS][COLS],int row , int col );
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
enum OPTION
{
	EXIT,
	START
};
enum MINE_COUNT
{
	EASY_COUNT=10
};
#endif