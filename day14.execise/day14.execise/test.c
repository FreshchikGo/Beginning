#define _CRT_SECURE_NO_WARNINS 1
#include"Contact.h"

void menu()
{
	printf("*********************通讯录**********************\n");
	printf("**************[1] Add     [5] Show **************\n");
	printf("**************[2] Del     [6] Clear *************\n");
	printf("**************[3] Find    [7] Sort **************\n");
	printf("**************[4] Modify  [0] Quit **************\n");
	printf("*************************************************\n");
}
int main()
{
	Contact cont;//定义通讯录变量
	InitContact(&cont);
	int select = 1;
	while (select)
	{
		menu();
		printf("请输入:\n");
		scanf("%d", &select);
		if (select == QUIT)
			break;
		switch(select)
		{
		case ADD:
			AddContact(&cont);//传参传指针
			break;
		case DEL:
			DelContact(&cont);
			break;
		case FIND:
			FindContact(&cont);
			break;
		case MODIFY:
			ModifyContact(&cont);
			break;
		case SHOW:
			ShowContact(&cont);
			break;
		case CLEAR:
			ClearContact(&cont);
			break;
		case SORT:
			SortContact(&cont);
			break;
		default:
			printf("输入错误，请重新输入...\n");
			break;

		}

	}
	SaveContact(&cont);
	printf("退出通讯录系统，Goodbyle...\n");
	return 0;
}