#include<stdio.h>
int main()
{
	long a;
	int b, c, d, e;
	printf("�����룺");
	scanf("%ld", &a);
	b = a / 3600;
	c = a - b * 3600;
	d = c / 60;
	e = c - d * 60;
	printf("%dСʱ%d����%d��", b, d, e);
	return 0;
}