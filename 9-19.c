#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch���������
//	{
//	    case 1://case�����γ������ʽ--����
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;//ֱ������switch����
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch���������
//	{
//	case 1://case�����γ������ʽ--����
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;//��û��break����һֱ���½���
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//
//	}
//	return 0;
//}


//ѭ�����
//int main()
//{
//	while (1)//
//		printf("\n");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;//ѭ��ֹͣ
//		printf(" %d\n", i);
//		i++;
//	}
//	return 0;
//}

//getchar������
//int main()
//{
//	int ch = getchar();//���� ���Խ���һ���ַ�
//	putchar(ch);//���
//	printf("%c\n", ch);
//	return 0;
//}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}