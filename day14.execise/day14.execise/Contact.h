#ifndef _CONTACT_H_
#define _CONTACT_H_
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

typedef enum
{
	QUIT,
	ADD,
	DEL,
	FIND,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
}OPER_ENUM;
#define DEFAULT_CONTACT_SIZE 2

#define MAX_NAME_SIZE 20
#define MAX_ADDR_SIZE 256
//人员信息结构体
typedef struct PersonInfo
{
	char name[MAX_NAME_SIZE];
	char sex[3];
	char tel[12];
	char addr[MAX_ADDR_SIZE];
	short age;
}PersonInfo; 
//通讯录结构体 内部嵌套了人员信息结构体
typedef struct Contact
{
	//PersonInfo data[MAX_CONTACT_SIZE];
	PersonInfo *data;
	size_t size;
	size_t capacity;
}Contact;
void InitContact(Contact *pct);
void AddContact(Contact *pct);
void ShowContact(Contact *pct);
void FindContact(Contact *pct);
void DelContact(Contact *pct);
void ModifyContact(Contact *pct);
void ClearContact(Contact *pct);
void SortContact(Contact *pct);
void DestroyContact(Contact *pct);
#endif