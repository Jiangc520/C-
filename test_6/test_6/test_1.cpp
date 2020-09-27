#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"add.h"
int main()
{
	int x = 0, y = 0, ret = 0;
	scanf("%d %d", &x, &y);
	ret = add(x, y);
	printf("%d\n", ret);
	return 0;
}