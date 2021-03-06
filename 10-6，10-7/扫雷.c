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
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘	
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	//扫雷
	Findmine(mine, show, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
		}

	} while (input);//非0为真，循环继续
}
int main()
{
	test();
	return 0;
}