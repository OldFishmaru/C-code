#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


    //int a = 10;
	//int b = a++;//后置++，先使用，再++//前置++，先++，再使用
	//printf("a = %d b = %d\n", a, b);//a = 11,b = 10。先输出b再输出a
	//return 0;
	/*int a = (int)3.14;*///()里面放类型--强制类型转换


	//int a = 10;
	//int b = 20;
	//int max = 0;
	//max = (a > b ? a : b);//如果a>b为真，则a被执行，否则b被执行
	////条件操作符相当于下面
	//if (a > b)
	//	max = a;
	//else
	//	max = b;


	//return 0;
//只要是整数，内存中存储的都是2进制补码，正数的原码=反码=补码，负数存补码
//原码是直接按照正负写出的二进制数列
//反码是符号位不变，其他位按位取反得到的，最左边第一位为符号位
//补码是反码+1
//100000000000000000000010--原码
//111111111111111111111101--反码
//111111111111111111111110--补码
//typedef--类型重定义


//void test()
//{
//	int a = 1;//循环之后本会销毁
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}//输出结果为5个a=2

//添加一个static后变量不会销毁
//static修饰局部变量，局部变量的生命周期变长
void test()
{
	static int a = 1;//静态的局部变量--保存使用上一次变量留下来的值
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}//a=2 3 4 5 6
