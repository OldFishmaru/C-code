#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void bubble_sort(int arr[],int sz)
//{//确定冒泡趟数
//	int i = 0;
//	for(i= 0;i<sz-1;i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}


//数组名为数组首元素的地址
//sizeof数组名计算的是整个数组的大小
//取地址数组名的时候，取出的是整个数组的地址