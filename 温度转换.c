#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double sheshidu;
	double huashidu;
	printf("ÇëÊäÈë»ªÊÏÎÂ¶È£º");
	scanf("%lf", &huashidu);
    sheshidu = ( huashidu - 32) * 5.0 / 9;
	printf("%.2f ", sheshidu);
	return 0;
}
