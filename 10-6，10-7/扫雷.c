#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void menu()
{
	printf("***************************************\n");
	printf("***********     1.play    *************\n");
	printf("***********     0.exit    *************\n");
	printf("***************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����	
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//ɨ��
	Findmine(mine, show, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}

	} while (input);//��0Ϊ�棬ѭ������
}
int main()
{
	test();
	return 0;
}