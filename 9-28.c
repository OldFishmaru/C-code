#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�ж�����
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




//���ֲ���
//           �����������arr��ָ��
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
//	int ret = search(arr, k, sz);//ֻ����ȥarr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ����±�Ϊ%d", ret);
//	}
//	return 0;
//}





//ÿ�ε���num�ͻ�����
//void add(int* p)//�������޷���ֵ��void
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf��ӡ�ַ�����
//	return	0;//��ӡ4321
//}


//����ͷ�ļ���include ""
//�Ѻ���������ͷ�ļ�
//�������.c�ļ�