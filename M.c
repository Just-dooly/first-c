#include<stdio.h>
int main()
{
	int a, b, c, x, y;
	printf("3개의 정수 입력\n");
	scanf_s("%d %d %d", &a, &b, &c);

	x = a;
	if (x < b)x = b;
	if (x < c)x = c;
	y = a;
	if (y > b)y = b;
	if (y > c)y = c;

	printf("최댓값%d, 최소값%d\n", x, y);

	return 0;
}