#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//{
//	int a = 1;
//	int b = 2;
//	if (b > a)
//		printf("较大值为：%d\n", b);
//	else
//		printf("较大值为%d\n", a);
//	return 0;
//}
//int Max(int x, int y)//求两个数最大值
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
//
//}
//int main()
//{
//	int a = 13;
//	printf("%02d", a);
//	return 0;
//}
int main()
{
	int a;
	printf("%d\n", (a = 3 * 5, a * 4, a + 5));//（15，60，20）就是输出最右边
	return 0;
}//输出20
//int x = 023----0开头为8进制，0x/0X开头为16进制
//++x=x+1.x++=x
//a && b----a和b要同时满足，||满足一个