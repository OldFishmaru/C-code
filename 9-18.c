#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()//多分枝
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	//else if(18<=age<28)这样是错误的，如果age = 10输出还是为青年
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)//{}代码块
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");//改正：在第一个if后加个{}
//	else//此else与离得最近的if匹配，所以输出没有结果，前面的空格无影响
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//如果判断一个常量与变量相不相等，应将常量放在==的左边
//	//if（5 == num），如少一个等号则编译失败
//	if (num = 5);//一个等号是赋值，两个是判断
//	printf("hehe\n");//可以打印
//	return 0;
//}

int main()
{
	int a = 0;
	printf("请输入数字:\n");
	while (a < 100)
	{
		if (a % 2 == 1)
			printf(" %d", a);
		a++;

	}
	return 0;
}