#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//������n��쳲���������
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret = %d", ret);
//	return 0;
//}//�˷�������������

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret = %d", ret);
//	return 0;
//}


//������
int qingwa(int n)
{
	int a = 1;
	int b = 2;
	int c = 0;
	if (n == 1 || n== 2)
		return n;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = qingwa(n);
	printf("%d", ret);
	return 0;
}