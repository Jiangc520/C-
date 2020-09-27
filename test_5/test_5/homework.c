#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//递归实现数组内字符串的逆序
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_strings(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) > 1)
//	{
//		reverse_strings(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_strings(arr);
//	printf("%s\n", arr);
//	return 0;
//}