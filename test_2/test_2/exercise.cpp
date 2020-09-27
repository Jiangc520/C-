#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//输出1-100的奇数
//int main()
//{
//	int i = 0;
//	for(i = 1; i < 101; i++)
//		if (i % 2 != 0)
//			printf("%d ", i);
//	return 0;
//}



//计算n的阶乘
//int main()
//{
//	int n = 0,sum=1;
//	int i = 0;
//	printf("请输入一个n的值：");
//	scanf("%d", &n);
//	if (n == 0)
//		printf("%d\n", sum);
//	else for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	if (n!=0)
//		printf("%d\n", sum);
//	return 0;
//}

//Sleep(1000);      //意思为休息一秒
//system（"cls");      //意思为清空屏幕，在库函数stdlib.h中



//int main()
//{
//	int input;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("1\n");
//	case 2:
//		printf("2\n");
//	default:                 //把default当成一般case语句，执行完它之后，还会执行下面的case
//		printf("4\n");
//	case 3:
//		printf("3\n");
//
//	}
//	return 0;
//}


//执行关机程序
//#include <stdlib.h>   //调用system库函数的头文件
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}