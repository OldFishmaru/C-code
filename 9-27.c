#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void swap(int x, int y)//xy为形式参数，没有下面的代码，xy不存在，调用完自动销毁
////不可行，x，y变化与ab实际参数  无关
//
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//void swap2(int* pa, int* pb)//pa，pb为ab的地址
//{
//	int tmp = 0;
//	tmp = *pa;//通过地址找到了a
//	*pa = *pb;//两数交换但地址不换
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	swap2(&a, &b);//取地址，&ab为实际参数
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

int prime(int a)
{
	int b = 0;
	for (b = 2;b <=a;b++)
	{
		if (a % b == 0)
		{
			break;
		}

	}
	if (a == b)
		return 1;
}

int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		if (prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}