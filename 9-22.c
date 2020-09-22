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
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数，总字节数/每个元素字节数
//    int left = 0;
//    int right = sz-1;
//    while(left <= right)
//    {int mid = (left + right)/2;
//        if (arr[mid] > k)
//        {
//        right = mid - 1;
//        }
//        else if (arr[mid] < k)
//        {
//        left = mid + 1;
//        }
//        else
//        {
//        printf("找到了，下标为：%d\n", mid);
//        break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到");
//    }
//    return 0;
//}

#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to ntr!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//下标位数-2
//	////因为如果char arr1[] = “abc”
//	////实际上里面包含【a b c \0】4个元素，所以要再去掉一个\0
//	//简化后
//	int right = strlen(arr1)-1;//求字符串长度，遇到\0停止，只要减一
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);//停留100毫秒，Sleep要引入头文件#include <windows.h>
//		system("cls");//system--执行系统命令的一个函数
//		//cls--清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	for(i=0;i < 3;i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		//if (password == "123456")//等号不能用来比较两个字符串是否相等
		//应使用库函数strcmp
		if(strcmp(password, "123456") == 0)//如果两者相等，返回的结果是0，所以==0
		{
			printf("正确");
			break;
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误");
	}
	return 0;
}