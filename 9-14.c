#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;//������4���ֽڵĿռ�
//	//printf("%p\n", &a);//��ӡ��ַ
//	int* p = &a;//pΪָ��������ֵ�ַ
//	//printf("%p\n", p);//��ӡ��ַ
//	*p = 20;//�����ò��������ӷ��ʲ�����
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32λ--4���ֽڣ�64λ--8.��������ʲô��˭�ĵ�ַ
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}
 

//��ζ���һ���ṹ������
//���Ӷ���--�ṹ��--�����Լ����������һ������
//struct--�ṹ��ؼ���
//struct Book//��������һ������
//{
//	char name[20];//c���Գ������
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c���Գ������" , 55 };
//	struct Book *pb = &b1;//ָ�����ָ��b1
//	//����pb��ӡ�������ͼ۸�
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);//���Ӽ򵥣�ָ��ָ�����
//	//�÷�
//	//.   �ṹ�����.��Ա
//	//->  �ṹ�����->��Ա
//	/*printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);*///�����÷�
//
//
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/
//	return 0;
//}
struct Book
{
	char name[20];
	short price;
};

#include <string.h>
int main()
{
	struct Book b1 = { "c" };
	b1.price = 15;//�������Ը�
	strcpy(b1.name, "c++");//nameΪ��������������Ϊһ����ַ��
//Ҫ����һ������strcpy--�ַ�����---�ǿ⺯��--Ҫ����ͷ�ļ�#include <string.h>
	printf("%s\n", b1.name);//���Ϊc++---�ַ������ķ�ʽ
}


//%d ʮ�����з�������
//%u ʮ�����޷�������
//%f ������
//%s �ַ���
//%c �����ַ�
//%p ָ���ֵ
//%e ָ����ʽ�ĸ�����
//%x, % X �޷�����ʮ�����Ʊ�ʾ������
//%0 �޷����԰˽��Ʊ�ʾ������
//%g �Զ�ѡ����ʵı�ʾ��