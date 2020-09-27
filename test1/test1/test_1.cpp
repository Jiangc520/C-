#include<stdio.h>


//各变量所分配空间大小，单位：byte
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}



//局部变量的生命周期，{开始，}结束
//int main()
//{
//	{
//		int num = 0;                 //{}中的变量，生命周期只在{}中，出了{}，它就被释放，所以报错未声明的num
//	}
//	printf("%d\n", num);
//	return 0;
//
//}

//全局变量的生命周期，整个工程
//int main()
//{
//	extern int gval;                 //extern声明外部变量用的
//	printf("%d\n", gval);
//	return 0;
//}




//enum Sex//枚举函数
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};//上面三者都是枚举常量
//	
//int main()
//{
//	printf("%d\n", MALE);//默认值0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//有关字符串
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };    
//	printf("%s\n", arr1);      //输出结果abc
//	printf("%s\n", arr2);  //abc烫烫烫烫蘟bc
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//"abc"-----'a' 'b' 'c' '\0'----'\0'字符串结束标志
//	char arr2[] = { 'a', 'b', 'c' ,0};    //‘\0’ASCII值是0
//	printf("%s\n", arr1);   //输出结果abc
//	printf("%s\n", arr2);//           abc
//
//	return 0;
//}


//#include<string>        //引用strlen得包括这个库函数
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };   
//	printf("%d\n", strlen(arr1));       //结果是3
//	printf("%d\n", strlen(arr2));      //结果是15，其实这是一个随机值，strlen会读取下去，直到'\0',为止
//	
//	return 0;
//}


//转义字符 \ 的理解
//#include<string>
//int main()
//{
//	printf("c:\test\32\test.c\n");      //输出为   c:		est框	est.c
//	printf("c:\\test\\32\\test.c\n");  //输出为   c:\test\32\test.c
//	printf("%d\n", strlen("c:\test\32\test.c"));  //输出为13  \t \32算作一个字节
//	return 0;                                 
//}

