#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 2;n++)
//	{
//		for (i = 1;i <= n;i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//�Ż�����Ĵ���

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 2;n++)
//	{	
//	ret = ret * n;	 
//	sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//��һ�������������ҵ�10����һ���� 
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 0;
//    int i = 0;
//    int sz = sizeof(arr);
//    scanf("%d", &k);
//    for (i = 0; i < sz; i++)
//    {
//        if (k == arr[i])
//        {
//            printf("�ҵ����±���%d\n", i);
//            break;
//        }
//    }
//    if (i == sz)
//        printf("�Ҳ���\n");
//    return 0;
//}



//���ֲ��ҷ�
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ��������ֽ���/ÿ��Ԫ���ֽ���
//    int left = 0;
//    int right = sz-1;
//    while(left <= right)
//    {int mid = (left + right)/2;
//        if (arr[mid] > k)
//        {
//        right = mid - 1;
//        }
//        else if (arr[mid] < k)
//        {
//        left = mid + 1;
//        }
//        else
//        {
//        printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//        break;
//        }
//    }
//    if (left > right)
//    {
//        printf("�Ҳ���");
//    }
//    return 0;
//}

#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to ntr!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//�±�λ��-2
//	////��Ϊ���char arr1[] = ��abc��
//	////ʵ�������������a b c \0��4��Ԫ�أ�����Ҫ��ȥ��һ��\0
//	//�򻯺�
//	int right = strlen(arr1)-1;//���ַ������ȣ�����\0ֹͣ��ֻҪ��һ
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);//ͣ��100���룬SleepҪ����ͷ�ļ�#include <windows.h>
//		system("cls");//system--ִ��ϵͳ�����һ������
//		//cls--�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	for(i=0;i < 3;i++)
	{
		printf("����������");
		scanf("%s", password);
		//if (password == "123456")//�ȺŲ��������Ƚ������ַ����Ƿ����
		//Ӧʹ�ÿ⺯��strcmp
		if(strcmp(password, "123456") == 0)//���������ȣ����صĽ����0������==0
		{
			printf("��ȷ");
			break;
		}
	}
	if (i == 3)
	{
		printf("�������������");
	}
	return 0;
}