#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//������Ϊʵ�δ���ʱ�������βζ��� int arr[]��int *arr��̽��
//void func1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//	arr = arr + 1;
//	printf("%d\n", *arr);
//
//}
//void func2(int *arr)                                                                   
//{
//	printf("%d\n", sizeof(arr));
//	arr = arr + 1;
//	printf("%d\n", *arr);
//}
//
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5 };
//	int *b = a;
//	printf("%d\n", sizeof(a));
//	func1(a);
//	func2(a);
//
//	printf("%d\n", sizeof(b));
//	func1(b);
//	func2(b);
//
//	//a=a+1;
//	printf("%d\n", *a);
//	b = b + 1;
//	printf("%d\n", *a);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	printf("%p\n",arr );
//	printf("%p\n",arr+1 );     //+4
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n",&arr[0]+1 );   //+4
//
//	printf("%p\n",&arr );
//	printf("%p\n", &arr+1);   //+ 4*7=28     ˵��&arr���������������Ŀռ��С����Ȼ��ȡ����ֵ���׵�ַ
//	return 0;
//}


//void test1(char arr[])       //�����ľ���һ���׵�ַ����ָ������洢�����������arr��ָ���������������
//{
//	printf("%d\n", sizeof(arr));
//}
//int main()
//{
//	char arr[10] = { 0 };
//	test1(arr);
//	return 0;
//}