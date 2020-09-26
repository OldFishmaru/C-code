#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//拷贝字符串
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";//会将\0也打印过来
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}



//内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

int get_max(int x, int y)//返回什么型，前面就加什么型int
{
	if (x > y)
		return x;
	else
		return y;

}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}