#include <stdio.h>
void menu1();
int menu2();
int menu3();
int menu4();

int main()
{
	int password;
	int i;
	int is_right = 0;
	char choice = 0;
	for (i = 0;i < 3; i++)
	{
		printf("please enter your password:");
		scanf("%d", &password);
		if (password == 123456) {
			is_right = 1;
			break;
		}
		else {
			printf("请重新输入\n");
		}
	}
	if (is_right == 0) {
		printf("you are a bad girl.\n");
		return 0;
	}
	while (1) {
		printf("请选择1.我要好好学习,2.我要男朋友,3.我要变有钱,4.我要变成技术大佬\n:");
		scanf(" %c", &choice);
		
		switch (choice)
		{
		case '1':
			menu1();
			break;
		case '2':
			menu2();
			break;
		case '3':
			menu3();
			break;
		case '4':
			menu4();
			break;
		default:
			printf("无效");
			break;
		}
	}
	return 0;
}
	void menu1(){
		printf("你进入了好好学习菜单\n");
		int n = 0;
		int i, j;
		printf("请输入一个正整数:");
		scanf("%d",&n);
		if (n <= 0) {
			printf("Care for mentally retarded children,we stay together.\n");
			printf("You are such a sweet little fool.\n");
		}
		else {
			for (i = 1;i <= n;i++) {
				for (j = 1;j <= i;j++) {
					printf("%d * %d = %-2d", i, j, i * j);
				}
				printf("\n");
			}
		}
	}
	int menu2(){
		printf("你进入了找男朋友菜单\n");
		printf("仙女和凡人谈恋爱是违反天条的,仙女应该好好学习:");
		menu1();
		return 0;
	}
	int menu3() {
		printf("你进入了变有钱菜单\n");
		char ch1;
		printf("请选择有钱后想干什么?A.找男朋友,B.买同济版高等数学好好学习");
		scanf(" %c", &ch1);
		if (ch1 == 'A') { menu2(); }
		else if (ch1 == 'B') { menu1(); }
		return 0;
	}
	int menu4() {
		printf("你进入了技术大佬菜单\n");
		char ch2;
		printf("请选择你为什么要学技术?A.为了变有钱,B.因为我热爱学习");
		scanf(" %c", &ch2);
		if (ch2 == 'A') { menu2(); }
		else if (ch2 == 'B') { menu1();}
		return 0;
	}
