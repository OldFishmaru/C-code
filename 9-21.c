#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;//�Ǵ�ӡ��һ�����ж�
//	for (i = 0; i < 10; i++)//�����ǰ�պ�����д����ǰ�Ⱥ�С��
//	{
//		printf(" %d\n", i);
//	}
//	return 0;
//}
 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//for�ĳ�ʼ�����������ж϶�����ʡ�ԣ����жϱ�ʡ�ԣ����Ϊ��
//	{
//		for(; j<10; j++)//��һ��ѭ�����j��Ϊ10�����治�ٴ�ӡ
//		{
//
//			printf("hehe\n");
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�жϵ�λ�����Ǹ�ֵk=0--0Ϊ��--ѭ��������
//		//������жϵ�λ���ϸ�ֵΪ��0����Ϊ��ѭ��
//		k++;//����ѭ��һ��
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <=10);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	scanf_s("%d", &a);
//	do
//	{
//		d = b * c;
//		e = d * ++b;
//		c = b--;
//		if (b == a)
//			printf("%d\n", e);
//	}
//	while (b<a);
//
//	return 0;
//}
//


//n�Ľ׳�
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for(i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}