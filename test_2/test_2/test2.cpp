#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//sizeof������������ķ���
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 0;
//	num = sizeof(arr) / sizeof(arr[0]);     //���ǿ�������sizeof�������С����������ĸ���
//	printf("%d\n", sizeof(arr));               //sizeof ���Լ�������Ĵ�С����������arrռ40���ֽ�
//	printf("%d\n", num);
//	return 0;
//}


//�Զ��庯��Max������ȡ���ֵ
//int Max(int x, int y)
//{
//	if (x>y)
//		return x;
//	if (y > x)
//		return y;
//                                                     //�Զ����Max����
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}


//�Ĵ�����������������
//int main()
//{
//	register int a = 10;   //����  ��a����ɼĴ�������
//	return 0;
//}


//static��Ӧ��
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);                //����aΪ����test�����ľֲ�������������������
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;   //����һ����̬�ľֲ���������1��ֵ��a�ҽ���ֵһ�Σ��䲻�ᱻ���٣����õ�����
//	a++;
//	printf("%d\n", a);    //���Ϊ2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//ָ������ı����ռ�����ƽ̨λ���йأ�32λ�����4��64λ�����8
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}




