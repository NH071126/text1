#include <stdio.h>

int main()
{
	int number;
	int digit = 0;
	int count = 0;
	printf("请输入一个自然数: ");
	scanf("%d", &number);
	printf("请输入一个数字(0-9):");
	scanf("%d", &digit);
	if (number == 0)
	{
		if (digit == 0)
		{
			count = 1;
		}
	}
	else
	{
		while (number > 0)
		{
			int last_digit = number % 10;
			if (last_digit == digit)
			{
				count++;	
			}
				number /= 10;
		}
	}
	printf("数字%d在自然数中出现了%d次\n", digit,count);
	return 0;
}