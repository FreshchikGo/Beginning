#define _CRT_SECURE_NO_WARNINS 1
#include"Contact.h"

void menu()
{
	printf("*********************ͨѶ¼**********************\n");
	printf("**************[1] Add     [5] Show **************\n");
	printf("**************[2] Del     [6] Clear *************\n");
	printf("**************[3] Find    [7] Sort **************\n");
	printf("**************[4] Modify  [0] Quit **************\n");
	printf("*************************************************\n");
}
int main()
{
	Contact cont;//����ͨѶ¼����
	InitContact(&cont);
	int select = 1;
	while (select)
	{
		menu();
		printf("������:\n");
		scanf("%d", &select);
		if (select == QUIT)
			break;
		switch(select)
		{
		case ADD:
			AddContact(&cont);//���δ�ָ��
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
			printf("�����������������...\n");
			break;

		}

	}
	SaveContact(&cont);
	printf("�˳�ͨѶ¼ϵͳ��Goodbyle...\n");
	return 0;
}