#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int price;
	int weight;
	char type;
	int total = 0;
	while (total < 1000)
	{
		printf("请输入收入类型(小麦 [W]、洋葱[O]、西红柿[T] 或胡萝卜[C]):");
		scanf(" %c", &type);
		printf("请输入您出售的公斤数:");
		scanf("%d", &weight);
		if (type == 'W') {
			price = 5;
		}
		else if (type == 'O') {
			price = 10;
		}
		else if (type == 'T') {
			price = 7;
		}
		else if (type == 'C') {
			price = 8;
		}
		total += weight * price;
	}
		printf("您以获得%d金币,可以休息一下了", total);
	return 0;
}