#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);       //先用再加，为10
//	printf("%d\n", ++a);        //先加再用，为12
//	return 0;
//}


//结构体初体验
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[28];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三", 20, "20200909" };
//	struct Stu* p = &s1;
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);                      //.用来变量引用结构体元素
//	printf("%s\n",s1.id);                     //->用来指针引用结构体元素
//	return 0;
//}