#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//数组作为实参传参时，函数形参定义 int arr[]和int *arr的探讨
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
//	printf("%p\n", &arr+1);   //+ 4*7=28     说明&arr代表的是整个数组的空间大小，虽然它取出的值是首地址
//	return 0;
//}


//void test1(char arr[])       //传来的就是一个首地址，用指针变量存储，所以这里的arr是指针而不是整个数组
//{
//	printf("%d\n", sizeof(arr));
//}
//int main()
//{
//	char arr[10] = { 0 };
//	test1(arr);
//	return 0;
//}