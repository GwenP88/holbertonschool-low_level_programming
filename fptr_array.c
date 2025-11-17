#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
	int (*ops[4])(int, int);
	int sum, a, b, i;

	ops[0] = add;
	ops[1] = sub;
	ops[2] = mul;
	ops[3] = div;

	for (i = 0 ; i <=3 ; i++)
		{
			sum = ops[i](10,5);
			printf("%d\n", sum);
		}

	return (0);
}

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
