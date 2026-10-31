#include<stdio.h>
#include<time.h>
int main()

{
	char enter;
	double minutes;

	while (1)
	{
		printf("按回车键开始计时，或输入任意一个字符退出。\n");
		enter = getchar();
		if (enter != '\n')
		{
			break;
		}
		long long start = time(NULL);
	
		printf("按回车键停止计时。\n");
		getchar();
		long long end = time(NULL);
	
		minutes = (end - start) / 60.0;
		printf("结果%.3f\n分钟", minutes);

	}
	
	return 0;
}
