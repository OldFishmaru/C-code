#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������ǴӴ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//		
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//�ҵ�100����3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}


//�����Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m%n)//����������0����ѭ������
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//������1000��2000
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y < 2000;y++)
//		//�����жϹ���
//		//�ܱ�4�������Ҳ��ܱ�100����
//		//�ܱ�400����
//	{
//		if (y % 4 == 0 && y % 100 != 0)	//&&����
//		{
//			printf("%d ", y);
//			count++;
//		}
//		else if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("����Ϊ��%d", count);
//	return 0;
//}


//�򻯺�
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000;y < 2000;y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			printf("%d ", y);
//	}
//	printf("����Ϊ��%d", count);
//}



//��ӡ100~200������
//�Գ���
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;//����һ��ѭ����
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

#include <math.h>
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int j = 0;
		for (j = 2;j <=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;//����һ��ѭ����
			}
		}
		if (j>sqrt(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}

