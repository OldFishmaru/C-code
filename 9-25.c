#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//��������Ϸ
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("******   1.play	  0.exit   ******\n");
//	printf("*********************************\n");
//}
//
//void game()//rand���������������ͷ�ļ�s't'd
//{
//	int ret = 0;
//	//��srand������������
//	ret = rand()%100+1;//����1-100�������
//	while (1)
//	{
//		int guess = 0;
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ����������������������ʼ��
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�ػ�����
//shutdown -s -t 60--��������ʮ���ڹػ�
//system����--ִ��ϵͳ����
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 30");
again:
	printf("��ע�⣬��ĵ��Խ���30���ػ�������������˹꣬��ȡ���ػ�\n������:>");
	scanf("%s", input);
	if (strcmp(input, "���˹�") == 0)//�Ƚ������ַ�����ͷ�ļ�Ϊ#include <string.h>
	{
		system("shutdown -a");
		printf("�벻����");
	}
	else
	{
		printf("��������������\n");
		goto again;
	}
		
	return 0;
}