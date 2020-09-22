#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 2;n++)
//	{
//		for (i = 1;i <= n;i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//优化上面的代码

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 2;n++)
//	{	
//	ret = ret * n;	 
//	sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//在一个有序数组中找到10以内一个数 
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 0;
//    int i = 0;
//    int sz = sizeof(arr);
//    scanf("%d", &k);
//    for (i = 0; i < sz; i++)
//    {
//        if (k == arr[i])
//        {
//            printf("找到了下标是%d\n", i);
//            break;
//        }
//    }
//    if (i == sz)
//        printf("找不到\n");
//    return 0;
//}



//二分查找法
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数，总字节数/每个元素字节数
    int left = 0;
    int right = sz-1;
    while(left <= right)
    {int mid = (left + right)/2;
        if (arr[mid] > k)
        {
        right = mid - 1;
        }
        else if (arr[mid] < k)
        {
        left = mid + 1;
        }
        else
        {
        printf("找到了，下标为：%d\n", mid);
        break;
        }
    }
    if (left > right)
    {
        printf("找不到");
    }
    return 0;
}


