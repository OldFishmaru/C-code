#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//#define MAX = 100//#define�����ʶ������
//int main()
//{
//	int a = MAX;
//
//}


//MAX(int x, int y)//-----������ʵ��
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}

//#define MAX(X,Y) (X>Y?X:Y)//ǰ������Żᱻ�滻�ɺ��������--��Ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);//�ᱻ����max = MAX��a>b?a:b)
//	printf("max = %d\n", max);
//    return 0;
//		
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	printf("%p\n", &a);//&��λ�룬ȡ��ַ
//	return 0;//��ַΪ��001DF914
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;//�ѵ�ַ�浽p��
//	//p--ָ�����---������ŵ�ַ�ı���
//	
//	*p = 20;//�����ò�����--ͨ��*p�ҵ�a��ֵ��������Ϊ20
//	printf("%p\n", a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));//ָ���С4���ֽ�--��ǰƽ̨Ϊ32λ--64λ8���ֽ�
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}//���a