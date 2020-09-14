#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;//申请了4个字节的空间
//	//printf("%p\n", &a);//打印地址
//	int* p = &a;//p为指针变量保持地址
//	//printf("%p\n", p);//打印地址
//	*p = 20;//解引用操作符或间接访问操作符
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32位--4个字节，64位--8.。。不论什么是谁的地址
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}
 

//如何定义一个结构的类型
//复杂对象--结构体--我们自己创造出来的一种类型
//struct--结构体关键字
//struct Book//创建好了一种类型
//{
//	char name[20];//c语言程序设计
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计" , 55 };
//	struct Book *pb = &b1;//指针变量指向b1
//	//利用pb打印出书名和价格
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//更加简单，指针指向对象
//	//用法
//	//.   结构体变量.成员
//	//->  结构体变量->成员
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*///两种用法
//
//
//	/*printf("书名:%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);*/
//	return 0;
//}
struct Book
{
	char name[20];
	short price;
};

#include <string.h>
int main()
{
	struct Book b1 = { "c" };
	b1.price = 15;//变量可以改
	strcpy(b1.name, "c++");//name为数组名，本质上为一个地址。
//要引入一个函数strcpy--字符拷贝---是库函数--要引入头文件#include <string.h>
	printf("%s\n", b1.name);//结果为c++---字符串更改方式
}


//%d 十进制有符号整数
//%u 十进制无符号整数
//%f 浮点数
//%s 字符串
//%c 单个字符
//%p 指针的值
//%e 指数形式的浮点数
//%x, % X 无符号以十六进制表示的整数
//%0 无符号以八进制表示的整数
//%g 自动选择合适的表示法