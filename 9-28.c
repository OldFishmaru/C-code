#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//判断闰年
//int leap(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000;year < 2000;year++)
//	{
//		if (1 == leap(year))
//		{
//			printf("%d ", year);
//			count++;
//
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}




//二分查找
//           本质上这里的arr是指针
//int search(int arr[], int k, int sz)
//{
//	//  4/4=1
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k, sz);//只传过去arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了下标为%d", ret);
//	}
//	return 0;
//}





//每次调用num就会增加
//void add(int* p)//空类型无返回值用void
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num = %d", num);
//	return 0;
//}



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf打印字符个数
//	return	0;//打印4321
//}


//引用头文件用include ""
//把函数声明放头文件
//定义放在.c文件