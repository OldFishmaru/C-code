#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{//"abc"为字符串，
//	char arr1[] = "abc";//数组//如以字符串的形式里面包含一个\0,\0=字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//printf("%d\n", strlen(arr1));//计算字符串长度，前要加#include <string.h>  。。/0不算字符内容
//     /用来防止转义例：printf("%c\n", ’‘’），要打印出‘要在’前加一个/


//if else
//int main()
//{
//	int input = 0;//定义一个变量
//	printf("西八\n");
//	printf("吃屁？(1/0)>: ");
//	scanf("%d", &input);//输入什么变量就在变量前面加&
//	if (input == 1)
//		printf("good\n");
//	else
//		printf("bad\n");
//	return 0;
//}

int main()
{
	int days = 0;
	printf("shit every day\n");
	while (days<30)
	{
		printf("shit num : %d\n", days);
		days++;
	}
	if(days>=30)
	printf("good job\n");
	return 0;
}