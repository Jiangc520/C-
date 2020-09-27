#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x,int y)
{
	return x + y;
}

int main()
{
	//指针数组
	int* arr[5] = {NULL};
	//数组指针
	int* (*p)[5]=&arr;
	//函数指针
	int (*pr)(int, int)=Add; //&Add
	int sum = pr(1, 2);
	//int sum=(*pr)(1,2);   *可有可无，因为在这里其并没有实际意义，存在只为更好解释函数指针工作原理
	               //等价Add(1,2)
	printf("sum=%d\n", sum);
	//函数指针的数组
	int(*prr[5])(int, int);
	//指向函数指针数组的指针
	int(*(*ppr)[5])(int, int)=&prr;
	return 0;
}