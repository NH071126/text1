#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int length = 3;
	int food_size;
	while (1)
	{
		printf("请输入食物的大小:");
		scanf("%d", &food_size);
		if (length >= food_size) {
			length += food_size;
			printf("蛇吃掉食物长度变为%d米:", length);
		}
		else if(length < food_size){
			printf("蛇在吃比它大的食物时死了,总长度为%d米:", length);
			break;
		}
	}

	return 0;
}