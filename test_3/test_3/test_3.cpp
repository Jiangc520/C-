#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);    //���ã�������arr�У���ǰ���ڴ�5���滻��*
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}


//���Զ��庯��ʵ�ֶ��ֲ���
//int binary_search(int* arr, int k, int sz)
//{
//	int mid = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k =15;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
//	}
//	return 0;
//}




//��δ���˵������Ĵ洢�ռ���������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;     //ȷ��ð�����������
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;   //������һ������������Ѿ�����
//		      //ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,1,2,3,4,8,6,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}