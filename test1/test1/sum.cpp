#include<stdio.h>
#include<string.h>
//int gval = 2021;

int main()
{
	int i = 0;
	char a[] = { "0123abcde" };
	int sz = sizeof(a) / sizeof(a[0]);
	int ret = strlen(a);
	printf("%d\n", ret);
	while (sz != 0)
	{
		printf("%c ", a[i]);
		sz--;
		i++;
	}
	return 0;
}