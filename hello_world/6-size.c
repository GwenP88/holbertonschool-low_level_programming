#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("\nSize of a char: %zu byte(s)",sizeof(char));
	printf("\nSize of a int: %zu byte(s)",sizeof(int));
	printf("\nSize of a long int: %zu byte(s)",sizeof(long int));
	printf("\nSize of a long long int: %zu byte(s)",sizeof(long long int));
	printf("\nSize of a float: %zu byte(s)",sizeof(float));
	return (0);
}
