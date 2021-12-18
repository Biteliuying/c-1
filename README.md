# c-1
#include<stdio.h>
#define Hour 365*24
int main()
{
	int h, result;
	printf("请输入小时数");
	scanf_s("%d", &h);
	result = h /(Hour);
	printf("等于%d年\n", result);
	return 0;
}
