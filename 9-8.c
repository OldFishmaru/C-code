#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{//"abc"Ϊ�ַ�����
//	char arr1[] = "abc";//����//�����ַ�������ʽ�������һ��\0,\0=�ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c',0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//printf("%d\n", strlen(arr1));//�����ַ������ȣ�ǰҪ��#include <string.h>  ����/0�����ַ�����
//     /������ֹת������printf("%c\n", ����������Ҫ��ӡ����Ҫ�ڡ�ǰ��һ��/


//if else
//int main()
//{
//	int input = 0;//����һ������
//	printf("����\n");
//	printf("��ƨ��(1/0)>: ");
//	scanf("%d", &input);//����ʲô�������ڱ���ǰ���&
//	if (input == 1)
//		printf("good\n");
//	else
//		printf("bad\n");
//	return 0;
//}

int main()
{
	int days = 0;
	printf("shit every day\n");
	while (days<30)
	{
		printf("shit num : %d\n", days);
		days++;
	}
	if(days>=30)
	printf("good job\n");
	return 0;
}