#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//#define MAX = 100//#define定义标识符常量
//int main()
//{
//	int a = MAX;
//
//}


//MAX(int x, int y)//-----函数的实现
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}

//#define MAX(X,Y) (X>Y?X:Y)//前面的括号会被替换成后面的括号--宏的定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);//会被换成max = MAX（a>b?a:b)
//	printf("max = %d\n", max);
//    return 0;
//		
//}

//int main()
//{
//	int a = 10;//4个字节
//	printf("%p\n", &a);//&按位与，取地址
//	return 0;//地址为：001DF914
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;//把地址存到p里
//	//p--指针变量---用来存放地址的变量
//	
//	*p = 20;//解引用操作符--通过*p找到a的值并把它改为20
//	printf("%p\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));//指针大小4个字节--当前平台为32位--64位8个字节
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}//输出a