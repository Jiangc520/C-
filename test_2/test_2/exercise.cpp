#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//���1-100������
//int main()
//{
//	int i = 0;
//	for(i = 1; i < 101; i++)
//		if (i % 2 != 0)
//			printf("%d ", i);
//	return 0;
//}



//����n�Ľ׳�
//int main()
//{
//	int n = 0,sum=1;
//	int i = 0;
//	printf("������һ��n��ֵ��");
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

//Sleep(1000);      //��˼Ϊ��Ϣһ��
//system��"cls");      //��˼Ϊ�����Ļ���ڿ⺯��stdlib.h��



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
//	default:                 //��default����һ��case��䣬ִ������֮�󣬻���ִ�������case
//		printf("4\n");
//	case 3:
//		printf("3\n");
//
//	}
//	return 0;
//}


//ִ�йػ�����
//#include <stdlib.h>   //����system�⺯����ͷ�ļ�
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}