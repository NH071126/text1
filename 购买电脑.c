#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count=0;
	double price = 95.125;
	double total=0.0;
	printf("你想买多少台电脑 %d\n");
	scanf("%d", &count);
	total = count * price;
	printf("%d台电脑的价格为 %f个硬币\n", count,total);
	return 0;
}
