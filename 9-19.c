#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch必须加整形
//	{
//	    case 1://case加整形常量表达式--数字
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;//直接跳到switch后面
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch必须加整形
//	{
//	case 1://case加整形常量表达式--数字
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//如没有break将会一直往下进行
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//
//	}
//	return 0;
//}


//循环语句
//int main()
//{
//	while (1)//
//		printf("\n");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;//循环停止
//		printf(" %d\n", i);
//		i++;
//	}
//	return 0;
//}

//getchar的作用
//int main()
//{
//	int ch = getchar();//输入 可以接受一个字符
//	putchar(ch);//输出
//	printf("%c\n", ch);
//	return 0;
//}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}