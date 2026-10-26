#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[3][3];
	int is_right = 1;
	int i, j;

	for (i = 0; i < 3; i++) {
		printf("请填入数字:");
		scanf("%d %d %d",&a[i][0], &a[i][1], &a[i][2]);
	}
	for (i = 0; i < 3; i++) {
		if (a[i][0] == a[i][1] || a[i][1] == a[i][2] || a[i][0] == a[i][2]) {
			is_right = 0;
			break;
		}
	}
	for (j = 0; j < 3; j++) {
		if (a[0][j] == a[1][j] || a[1][j] == a[2][j] || a[0][j] == a[2][j]) {
			is_right = 0;
			break;
		}
	}
	if (is_right == 1) {
		printf("正确!你可以走出这里:");
	}
	else {
		printf("错误!你无法走出这里:");
	}
	return 0;
}