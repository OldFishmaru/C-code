#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//eof--end 0f file--�ļ�������־
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);//scanfֻ���ȡ�ո�ǰ������
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}//��ȡ\n--�س�
//	printf("��ȷ��(Y/N):>\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//			
//	}//ֻ���������
//
//	return 0;
//}



//int main()
//{
//	int i = 1;//��ʼ��
//	while (i<10)//�ж�
//	{
//		i++;//����
//	}
//	return 0;
//}//����Ϸ�ɢ--��forѭ������


int main()
{
	int i = 0;
	//   ��ʼ��   �ж�   ����//�жϳ��������ߣ��پͽ���
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	return 0;
}