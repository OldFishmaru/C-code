#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//猜数字游戏
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("******   1.play	  0.exit   ******\n");
//	printf("*********************************\n");
//}
//
//void game()//rand生成随机数，引入头文件s't'd
//{
//	int ret = 0;
//	//将srand放在主函数里
//	ret = rand()%100+1;//生成1-100的随机数
//	while (1)
//	{
//		int guess = 0;
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起始点
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//游戏
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//关机程序
//shutdown -s -t 60--电脑在六十秒内关机
//system（）--执行系统命令
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 30");
again:
	printf("请注意，你的电脑将在30秒后关机，如果输入泥人龟，则取消关机\n请输入:>");
	scanf("%s", input);
	if (strcmp(input, "泥人龟") == 0)//比较两个字符串，头文件为#include <string.h>
	{
		system("shutdown -a");
		printf("针不戳！");
	}
	else
	{
		printf("大声点听不见！\n");
		goto again;
	}
		
	return 0;
}