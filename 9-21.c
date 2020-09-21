#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;//是打印完一次再判断
//	for (i = 0; i < 10; i++)//最好用前闭后开区间写法，前等后小于
//	{
//		printf(" %d\n", i);
//	}
//	return 0;
//}
 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//for的初始化，调整，判断都可以省略，如判断被省略，则恒为真
//	{
//		for(; j<10; j++)//第一次循环后就j仍为10，后面不再打印
//		{
//
//			printf("hehe\n");
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断的位置上是赋值k=0--0为假--循环不进行
//		//如果在判断的位置上赋值为非0，则为死循环
//		k++;//所以循环一次
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <=10);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	scanf_s("%d", &a);
//	do
//	{
//		d = b * c;
//		e = d * ++b;
//		c = b--;
//		if (b == a)
//			printf("%d\n", e);
//	}
//	while (b<a);
//
//	return 0;
//}
//


//n的阶乘
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for(i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}