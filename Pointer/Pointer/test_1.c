#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x,int y)
{
	return x + y;
}

int main()
{
	//ָ������
	int* arr[5] = {NULL};
	//����ָ��
	int* (*p)[5]=&arr;
	//����ָ��
	int (*pr)(int, int)=Add; //&Add
	int sum = pr(1, 2);
	//int sum=(*pr)(1,2);   *���п��ޣ���Ϊ�������䲢û��ʵ�����壬����ֻΪ���ý��ͺ���ָ�빤��ԭ��
	               //�ȼ�Add(1,2)
	printf("sum=%d\n", sum);
	//����ָ�������
	int(*prr[5])(int, int);
	//ָ����ָ�������ָ��
	int(*(*ppr)[5])(int, int)=&prr;
	return 0;
}