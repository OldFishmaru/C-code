#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void swap(int x, int y)//xyΪ��ʽ������û������Ĵ��룬xy�����ڣ��������Զ�����
////�����У�x��y�仯��abʵ�ʲ���  �޹�
//
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//void swap2(int* pa, int* pb)//pa��pbΪab�ĵ�ַ
//{
//	int tmp = 0;
//	tmp = *pa;//ͨ����ַ�ҵ���a
//	*pa = *pb;//������������ַ����
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	swap2(&a, &b);//ȡ��ַ��&abΪʵ�ʲ���
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

int prime(int a)
{
	int b = 0;
	for (b = 2;b <=a;b++)
	{
		if (a % b == 0)
		{
			break;
		}

	}
	if (a == b)
		return 1;
}

int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		if (prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}