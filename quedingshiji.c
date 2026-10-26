#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;
	int century;
	printf("请输入年份:");
	scanf("%d", &year);
	if(year>0)
	{
		century = (year - 1) / 100 + 1;
		printf("%d世纪\n", century);
	}
	else
	{
		printf("年份不能为0或负数!\n");
	}

	
	return 0;
}