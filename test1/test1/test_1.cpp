#include<stdio.h>


//������������ռ��С����λ��byte
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



//�ֲ��������������ڣ�{��ʼ��}����
//int main()
//{
//	{
//		int num = 0;                 //{}�еı�������������ֻ��{}�У�����{}�����ͱ��ͷţ����Ա���δ������num
//	}
//	printf("%d\n", num);
//	return 0;
//
//}

//ȫ�ֱ������������ڣ���������
//int main()
//{
//	extern int gval;                 //extern�����ⲿ�����õ�
//	printf("%d\n", gval);
//	return 0;
//}




//enum Sex//ö�ٺ���
//	{
//		MALE,
//		FEMALE,
//		SECRET
//	};//�������߶���ö�ٳ���
//	
//int main()
//{
//	printf("%d\n", MALE);//Ĭ��ֵ0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//�й��ַ���
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };    
//	printf("%s\n", arr1);      //������abc
//	printf("%s\n", arr2);  //abc���������abc
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//"abc"-----'a' 'b' 'c' '\0'----'\0'�ַ���������־
//	char arr2[] = { 'a', 'b', 'c' ,0};    //��\0��ASCIIֵ��0
//	printf("%s\n", arr1);   //������abc
//	printf("%s\n", arr2);//           abc
//
//	return 0;
//}


//#include<string>        //����strlen�ð�������⺯��
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };   
//	printf("%d\n", strlen(arr1));       //�����3
//	printf("%d\n", strlen(arr2));      //�����15����ʵ����һ�����ֵ��strlen���ȡ��ȥ��ֱ��'\0',Ϊֹ
//	
//	return 0;
//}


//ת���ַ� \ �����
//#include<string>
//int main()
//{
//	printf("c:\test\32\test.c\n");      //���Ϊ   c:		est��	est.c
//	printf("c:\\test\\32\\test.c\n");  //���Ϊ   c:\test\32\test.c
//	printf("%d\n", strlen("c:\test\32\test.c"));  //���Ϊ13  \t \32����һ���ֽ�
//	return 0;                                 
//}

