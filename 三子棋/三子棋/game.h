#define _CRT_SECURE_NO_WARNINGS 1
#define _GAME_H_
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void print_board(char board[ROW][COL], int row, int col);//¥Ú”°∆Â≈Ã
void init_board(char board[ROW][COL],int row,int col);//≥ı ºªØ∆Â≈Ã
void player_move(char board[ROW][COL], int row ,int col);
void 	computer_move(char board[ROW][COL],int row, int col);
char is_win(char board[ROW][COL], int row, int col);