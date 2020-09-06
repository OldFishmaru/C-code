#include <stdio.h>
//int main()
//{
//  printf("%d\n", sizeof(char));//1byte个字节=8bit
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;


//}//变量定义方法  short age = 18-类型+变量名+赋值
//{}为代码块，全局变量定义在{}外，局部在内
//当名字相同时局部变量优于全局变量

//int a = 100;

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//} //输出a=100




//int main()
//{
//	printf("无敌老鱼丸派计算机\n");
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//变量要定义在当前代码块的最前面
//	scanf_s("%d%d",&num1, &num2);//输入数据-使用输入函数scanf
//	sum = num1 + num2;
//	printf("sum = %d\n", sum); 
//	return 0;
//}


//int global = 2021;
//int main()
//{
//	extern int global;//extern-声明外部符号 外部=在另一个源文件中 
//	printf("global = %d\n", global);
//	return 0;
//}

//int main()
//{
//	{int a = 10;
//	printf("%d\n", a);//ok
//	}
//	printf("%d\n", a);//error
//	return 0;
//}