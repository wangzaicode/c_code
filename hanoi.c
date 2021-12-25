#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(char one, char three);
void hanoi(int n, char one, char two, char three);

int main()
{
	int n;
	scanf("%d", &n);//输入一个数
	hanoi(n, 'A','B','C');//调用hanoi塔函数
	return 0;
}
void hanoi(int n, char one, char two, char three)
{
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char one, char three)
{
	printf("%c--->%c\n", one, three);
}
