#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()//���֦
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	//else if(18<=age<28)�����Ǵ���ģ����age = 10�������Ϊ����
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)//{}�����
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");//�������ڵ�һ��if��Ӹ�{}
//	else//��else����������ifƥ�䣬�������û�н����ǰ��Ŀո���Ӱ��
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	//����ж�һ������������಻��ȣ�Ӧ����������==�����
//	//if��5 == num��������һ���Ⱥ������ʧ��
//	if (num = 5);//һ���Ⱥ��Ǹ�ֵ���������ж�
//	printf("hehe\n");//���Դ�ӡ
//	return 0;
//}

int main()
{
	int a = 0;
	printf("����������:\n");
	while (a < 100)
	{
		if (a % 2 == 1)
			printf(" %d", a);
		a++;

	}
	return 0;
}