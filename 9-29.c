#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ݹ�--�Ѵ��»�С
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




//���ַ�������--����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//��ַ++
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬����ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}

//��������ʱ����
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
	int len = my_strlen(arr);//arr�����飬����ȥ���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}