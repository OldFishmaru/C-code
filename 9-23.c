#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入三个数将它们从大到小排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//		
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//找到100以内3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}


//找最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m%n)//如结果不等于0，则循环继续
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//找闰年1000到2000
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y < 2000;y++)
//		//闰年判断规则
//		//能被4整除并且不能被100整除
//		//能被400整除
//	{
//		if (y % 4 == 0 && y % 100 != 0)	//&&并且
//		{
//			printf("%d ", y);
//			count++;
//		}
//		else if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("数量为：%d", count);
//	return 0;
//}


//简化后
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y < 2000;y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			printf("%d ", y);
//	}
//	printf("数量为：%d", count);
//}



//打印100~200的素数
//试除法
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;//跳到一个循环外
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

#include <math.h>
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int j = 0;
		for (j = 2;j <=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;//跳到一个循环外
			}
		}
		if (j>sqrt(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}

