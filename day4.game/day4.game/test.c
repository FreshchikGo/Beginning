//��������Ϸ
#include <stdio.h>
#include<time.h>
void menu()
{
	printf("*****************************\n");
	printf("******1.����Ϸ   0.�˳�******\n");
	printf("*****************************\n");

}
	
void game()
{
	int ret = rand()%100;
	int a = 0;
	printf("������:\n");
	
	while (1)
	{
		scanf_s("%d", &a);
		if (a < ret)
			printf("��С��\n");
		else if (a>ret)
			printf("�´���\n");
		else
		{
			printf("��¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
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
			break;
		default:
			printf("�����������������:\n");
		}
	} while (input);
}