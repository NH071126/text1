#include <stdio.h>
struct student {
	char name[30];
	char gender[10];
	char id[20];
};
void swap(struct student* a, struct student* b) {
	struct student temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	struct student stu1, stu2;
	printf("请输入第一个学生的信息:\n");
	scanf("%s %s %s", stu1.name, stu1.gender, stu1.id);
	printf("请输入第二个学生的信息:\n");
	scanf("%s %s %s", stu2.name, stu2.gender, stu2.id);
	swap(&stu1, &stu2);
	printf("交换后第一个学生的信息:%s %s %s\n", stu1.name, stu1.gender, stu1.id);
	printf("交换后第二个学生的信息:%s %s %s\n", stu2.name, stu2.gender, stu2.id);
	return 0;
}
