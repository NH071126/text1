#include <stdio.h>
void menu1();
void menu2();
void menu3();
void menu4();

struct student {
	char name[20];
	char id[20];
	char gender;
	char height[10];
};
struct student stu;
int main() {
	int account;
	int password;
	int is_right = 0;
	int i;
	for (i = 0;i < 5;i++)
	{
		printf("请输入账号和密码：");
		scanf("%d %d", &account, &password);
		if (account == 123456 && password == 123456)
		{
			printf("登录成功！\n");
			is_right = 1;
	       
			break;
		}
		else
		{
			printf("账号或密码输入错误，还有n次机会,请重新输入！\n");
		}
	}
	if(is_right == 0)
	{
		printf("哼,渣男,骗子\n");
		return 0;
	} 
    printf("姓名: \n");
    scanf(" %s",stu.name);
	printf("学号: \n");
    scanf(" %s",stu.id);
	printf("性别: \n");
    scanf(" %s",stu.gender);
	printf("身高: %s\n", stu.height);
    scanf(" %s",stu.height);

while (1) {
	char choice;
	printf("请选择要修改的信息:1.姓名,2.学号,3.性别,4.身高,5.退出\n");
	scanf(" %c", &choice);
	switch (choice) {
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
	case '5':
		return 0;
	default:
		printf("输入错误，请重新输入！\n");
		break;
	}
}	
    return 0;
}
void menu1() {
	printf("请输入新的姓名:");
	scanf(" %s", stu.name);
}
void menu2() {
	printf("请输入新的学号:");
	scanf(" %s", stu.id);
}
void menu3() {
	printf("请输入新的性别:");
	scanf(" %s", stu.gender);
}
void menu4() {
	printf("请输入新的身高:");
	scanf(" %s", stu.height);
}