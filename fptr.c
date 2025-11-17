#include <stdio.h>

int add(int a, int b);

int main(void)
{
	int (*ops)(int a, int b);
	int sum;

	ops = add;
	sum = ops(10,5);
	printf("%d\n", sum);
	sum = ops(23,7);
	printf("%d\n", sum);
	sum = ops(40,8);
	printf("%d\n", sum);
	sum = ops(48,6);
	printf("%d\n", sum);

	return (0);
}

int add(int a, int b)
{
	return (a + b);
}


