#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//递归--把大事化小
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}




//求字符串长度--函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//地址++
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，传过去的是第一个元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}

//不创建临时变量
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//arr是数组，传过去的是第一个元素的地址
	printf("len = %d\n", len);
	return 0;
}