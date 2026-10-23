#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int income = 0;
	int sum = 0;
	while(sum < 200)
	{printf("请输入收入：");
	scanf("%d", &income);
	sum += income;
	}
	printf("恭喜!您已经获得200个金币,现在可以休息了");
	return 0;
}