#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price;
	int newprice;
	int weight;
	char choice = 0;
	char type;
	int total = 0;
	
	while (total < 1000)
	{
		printf("请选择菜单:修改价格[M], 出售[S]:");
		scanf(" %c",&choice);
		printf("请输入收入类型(小麦 [W]、洋葱[O]、西红柿[T] 或胡萝卜[C]):");
		scanf(" %c", &type);

		if (choice == 'M')
		{
			if (type == 'W') {
				printf("请输入小麦的新价格:");
				scanf("%d",&newprice);
				printf("将小麦价格更改为%d金币:\n",newprice);
			}
			else if (type == 'O') {
				printf("请输入洋葱的新价格:");
				scanf("%d",&newprice);
				printf("将洋葱价格更改为%d金币:\n",newprice);
			}
			else if (type == 'T') {
				printf("请输入西红柿的新价格:");
				scanf("%d",&newprice);
				printf("将西红柿价格更改为%d金币:\n",newprice);
			}
			else if (type == 'C') {
				printf("请输入胡萝卜的新价格:");
				scanf("%d",&newprice);
				printf("将胡萝卜价格更改为%d金币:\n",newprice);
			}
		}
		else if (choice == 'S')
		{
			printf("请输入您出售的公斤数:\n");
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
	}
	printf("您以获得%d金币,可以休息一下了", total);
	return 0;
}
