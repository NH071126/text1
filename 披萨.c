#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int main()
	{
		int num1 = 0,num2 = 0;
		int price;
		char choice;
		char peisong;

		printf("输入N计算新订单");
		printf("输入Q结束程序");
		scanf(" %c", &choice);
		if(choice == 'N' )
		{
			printf("请输入披萨数量：");
			scanf("%d", &num1);
			printf("请输入披萨配料数量：");
			scanf("%d", &num2);
			printf("请选择是否需要配送（Y/N）：");
			scanf(" %c", &peisong);
			if(peisong == 'Y' )
			{
				price = num1 * 20 + num2 * 2 + 5;
			}
			else
			{
				price = num1 * 20 + num2 * 2;
			}
			printf("订单总价为：%d\n", price);
		}
		else if(choice == 'Q' )
		{
			printf("程序结束\n");
		}
		return 0;
	}
