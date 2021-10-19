#include<stdio.h>
int main()
{
	long a;
	int b, c, d, e;
	printf("请输入：");
	scanf("%ld", &a);
	b = a / 3600;
	c = a - b * 3600;
	d = c / 60;
	e = c - d * 60;
	printf("%d小时%d分钟%d秒", b, d, e);
	return 0;
}