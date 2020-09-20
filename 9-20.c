#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//eof--end 0f file--文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码\n");
//	scanf("%s", password);//scanf只会读取空格前的数据
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}//提取\n--回车
//	printf("请确认(Y/N):>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//			
//	}//只会输出数字
//
//	return 0;
//}



//int main()
//{
//	int i = 1;//初始化
//	while (i<10)//判断
//	{
//		i++;//调整
//	}
//	return 0;
//}//代码较分散--用for循环代替


int main()
{
	int i = 0;
	//   初始化   判断   调整//判断成立继续走，假就结束
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}