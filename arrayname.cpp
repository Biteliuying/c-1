#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int whichmax(int x,int y);
int a[15];
int main()
{
	a[5] = 12;
	a[13] = 18;
	int abcdef = whichmax(a[5], a[13]);
	printf("BIGGER OUTPUT%d\n",abcdef);
}
int whichmax(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}