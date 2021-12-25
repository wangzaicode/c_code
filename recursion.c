#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int recursion(int n);
int main()
{
	int n,m;
	scanf("%d", &n);//求n的阶乘的n
	printf("n=%d\n", n);
    m=recursion(n);//n的阶乘等于m
	printf("n!=m=%d", m);
	return 0;
}
int recursion(int n)
{
	int z;
	if (n < 0)
		printf("n<0,data error!!!");
	else if (n == 0 || n == 1)
		z = 1;
	else
		z = n * recursion(n - 1);
	return z;
}