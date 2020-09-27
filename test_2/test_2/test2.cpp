#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//sizeof计算数组个数的方法
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 0;
//	num = sizeof(arr) / sizeof(arr[0]);     //我们可以利用sizeof算数组大小来计算数组的个数
//	printf("%d\n", sizeof(arr));               //sizeof 可以计算数组的大小，比如数组arr占40个字节
//	printf("%d\n", num);
//	return 0;
//}


//自定义函数Max（）求取最大值
//int Max(int x, int y)
//{
//	if (x>y)
//		return x;
//	if (y > x)
//		return y;
//                                                     //自定义个Max函数
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}


//寄存器变量的声明方法
//int main()
//{
//	register int a = 10;   //建议  把a定义成寄存器变量
//	return 0;
//}


//static的应用
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);                //变量a为函数test（）的局部变量，出函数则销毁
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;   //声明一个静态的局部变量，将1赋值于a且仅赋值一次，其不会被销毁，而得到保存
//	a++;
//	printf("%d\n", a);    //输出为2 3 4 5 6
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//指针申请的变量空间至于平台位数有关，32位则分配4，64位则分配8
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}




