#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);    //作用，在数组arr中，将前边内存5个替换成*
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}


//用自定义函数实现二分查找
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
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", ret);
//	}
//	return 0;
//}




//这段代码说明数组的存储空间是连续的
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
//	int i = 0;     //确定冒泡排序的趟数
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;   //假设这一趟排序的数据已经有序
//		      //每一趟冒泡排序
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